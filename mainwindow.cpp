
#include <QTableWidget>
#include <QStringList>
#include <QString>
#include <QPushButton>
#include <QTabWidget>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainmemory.h"
#include "mainmemory.cpp"
#include "cache.h"

using namespace std;

MainMemory MM(2048, 2, 2);                  // (Size in bites, bites per word, offset)
DirectMappedCache DC(128, MM);         // (Size in bites, mainmemory)


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    MM.show_console();
    DC.show_all_console();


    //===========================================================--MAIN MEMORY--===========================================================

    // Setting numebr of cols, rows
    int MM_width = 400;
    int MM_height = 600;
    ui->tableW_MM->resize(MM_width, MM_height);
    ui->tableW_MM->setRowCount(MM.get_block_count());
    ui->tableW_MM->setColumnCount(MM.get_words_block() + 1);

    // Setting col size, depending on the num of cols
    int block_col_width = 100;
    int other_col_width = MM_width - block_col_width - 30;
    string memory_col_str = "Word ";
    if (MM.get_offset() > 2){
        block_col_width = 50;
        memory_col_str = "W";
        other_col_width = MM_width - block_col_width - 30;
    }
    ui->tableW_MM->setColumnWidth(0, block_col_width);
    for (int i = 1; i < MM.get_words_block() + 1; i++){
        ui->tableW_MM->setColumnWidth(i, other_col_width / (MM.get_words_block()) );
    }

    // Setting column titles (mm - main memory)
    QStringList MM_title_columns = {"Block"};
    for (int i = 0; i < MM.get_words_block(); i++){
        string col_title = memory_col_str + to_string(i);
        MM_title_columns << QString::fromStdString(col_title);
    }
    ui->tableW_MM->setHorizontalHeaderLabels(MM_title_columns);

    // Filling the cells with random numbers
    vector<string> cell_keys = MM.get_keys();
    for (int i = 0; i < MM.get_block_count(); i++){
        string cell_key = cell_keys[i];
        ui->tableW_MM->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(cell_key)));
        for (int j = 0; j < MM.get_words_block(); j++){
            vector <string> cell_value_array = MM.get_cells()[cell_key];
            string cell_value = cell_value_array[j];
            ui->tableW_MM->setItem(i, j + 1, new QTableWidgetItem(QString::fromStdString(cell_value)));
        }
    }
    //===========================================================--Tabs--===========================================================

    // Direct Mapping Cache
    // dc - direct cache

    int DC_width = 550;
    int DC_height = 300;
    ui->tableW_DC->resize(DC_width, DC_height);
    ui->tableW_DC->setRowCount(DC.get_line_count());

    QStringList DC_title_columns = {"Index", "Valid bit", "Tag", "Data"};
    ui->tableW_DC->setColumnCount(DC_title_columns.length());
    ui->tableW_DC->setHorizontalHeaderLabels(DC_title_columns);

    ui->tableW_DC->setColumnWidth(0, 70);
    ui->tableW_DC->setColumnWidth(1, 70);
    ui->tableW_DC->setColumnWidth(2, (DC_width - 140) / 2);
    ui->tableW_DC->setColumnWidth(3, (DC_width - 140) / 2);

    // Filling init value of cells (can be optimized)
    // Filling: index
    for (int i = 0; i < DC.get_line_count(); i++){
        QTableWidgetItem *cache_cell = new QTableWidgetItem(QString::fromStdString(to_string(i)));
        cache_cell->setTextAlignment(Qt::AlignCenter);
        ui->tableW_DC->setItem(i, 0, cache_cell);
    }

    // Filing: init valid bit, tag, data
    update_tableDC_values();


    //===========================================================--Buttons--===========================================================

    connect(ui->pushB_generateInstruction, SIGNAL(released()), this, SLOT(generate_instructionClicked()));
    connect(ui->pushB_nextStep, SIGNAL(released()), this, SLOT(look_throught_cacheClicked()));
    //connect(ui->pushB_generateInstruction, &QPushButton::released, this, &MainWindow::event_generate_intruction);
    ui->pushB_nextStep->setEnabled(false);

}

void MainWindow::update_tableDC_values(){
    for (int i = 0; i < DC.get_line_count(); i++){
        vector <string> cache_line = DC.get_line(i);
        for (int j = 0; j < cache_line.size(); j++){
            QTableWidgetItem *cache_cell = new QTableWidgetItem(QString::fromStdString(cache_line[j]));
            cache_cell->setTextAlignment(Qt::AlignCenter);
            ui->tableW_DC->setItem(i, j + 1, cache_cell);               // j + 1 cuz 0 col in busy with index, which equals "i"
        }
    }
}

// Button for generation random instruction (HEX)
void MainWindow::generate_instructionClicked(){
    int random_cell = rand() % MM.get_size();
    ui->lineE_hex_intruction->clear();
    ui->lineE_hex_intruction->insert(QString::fromStdString(MainMemory::DEC_to_HEX(random_cell)));
    ui->pushB_nextStep->setEnabled(true);

    cout << "[Button] Generating random HEX instruction: " << endl
         << "HEX:\t" << random_cell << endl;
}

// Button that looks the instruction in cache and then in MM
void MainWindow::look_throught_cacheClicked(){
    cout << "[Button] Looking throught cache for random HEX instruction" << endl;

    // HEX to BIN
    string input_HEX = (ui->lineE_hex_intruction->text()).toStdString();
    string input_BIN = MainMemory::HEX_to_BIN(input_HEX);
    string max_HEX = MainMemory::DEC_to_HEX(MM.get_size() - 1);          // Max HEX number in the memory
    string max_BIN = MainMemory::HEX_to_BIN(max_HEX);                   // Max BIN number in the memory
    while (input_BIN.length() < max_BIN.length()){                      // For cases like this: 2A and 34D. Tag length will be completely different
        input_BIN = "0000" + input_BIN;
    }
    // Showing BIN value
    string temp = input_BIN;
    for(int i = 4; i < temp.length(); i += 4){
        temp.insert(i, " ");
        i++;
    }
    ui->lineE_bin_intruction->clear();
    ui->lineE_bin_intruction->insert(QString::fromStdString(temp));

    cout << "HEX:\t" << input_HEX << endl
         << "BIN:\t" << input_BIN << endl;

    // Cache search
    cout << "[Function][search_cache] " << endl;
    DC.search_cache(input_BIN);

    // Updating the table
    cout << "[Funtion][updata_tableDc_values]" << endl;
    update_tableDC_values();
    ui->pushB_nextStep->setEnabled(false);

    cout << "----------------------------------------------------------------" << endl;

}



MainWindow::~MainWindow()
{
    delete ui;
}
