
#include <QTableWidget>
#include <QStringList>
#include <QString>
#include <QPushButton>
#include <QTabWidget>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainmemory.h"
#include "dmCache.h"
#include "menu.h"

using namespace std;

Menu *menu;

MainMemory MM;                  // (Size in bites, bites per word, offset)
Cache cache;
DirectMappedCache DC(cache);         // (Size in bites, mainmemory)

MainWindow::MainWindow(QWidget *parent, MainMemory *new_MM, Cache *new_cache)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    MM = *new_MM;
    cache = *new_cache;
    DC = *new DirectMappedCache(cache);

    MM.show_console();
    DC.show_all_console();
    //--------------------------------------------------------- Info page --------------------------------------------------------

    ui->label_mm_size->setText(QString::number(MM.get_size()));
    ui->label_cache_size->setText(QString::number(cache.get_cache_size()));
    ui->label_word_size->setText(QString::number(MM.get_word_size()));
    ui->label_offset->setText(QString::number(MM.get_offset()));

    string str_list_instr = "";
    for (int i = 0; i < cache.get_list_instr_size() - 1; i++) {
       str_list_instr += cache.get_instr(i) + ", ";
    }
    str_list_instr += cache.get_instr(cache.get_list_instr_size() - 1);
    ui->tEdit_list_instr->clear();
    ui->tEdit_list_instr->insertPlainText(QString::fromStdString(str_list_instr));

    ui->lineE_hex_intr->clear();
    ui->lineE_hex_intr->setText(QString::fromStdString(cache.get_instr(0)));
    ui->pushB_nextStep->setEnabled(true);
    // ------------------------------------------------------------- MAIN MEMORY  -------------------------------------------------------------

    // Setting numebr of cols, rows
    int MM_width = 350;
    int MM_height = 700;
    ui->tableW_MM->resize(MM_width, MM_height);
    ui->tableW_MM->setRowCount(MM.get_block_count());
    ui->tableW_MM->setColumnCount(MM.get_words_block() + 1);


    cout << "ok" << endl;

    // Setting col size, depending on the num of cols
    int block_col_width = 100;
    int other_col_width = MM_width - block_col_width - 30;
    string memory_col_str = "Word ";
    if (MM.get_offset() > 2){
        block_col_width = 50;
        memory_col_str = "W";
        other_col_width = MM_width - block_col_width - 30;
    }


    cout << "ok" << endl;

    ui->tableW_MM->setColumnWidth(0, block_col_width);
    for (int i = 1; i < MM.get_words_block() + 1; i++){
        ui->tableW_MM->setColumnWidth(i, other_col_width / (MM.get_words_block()) );
    }


    cout << "ok" << endl;

    // Setting column titles (mm - main memory)
    QStringList MM_title_columns = {"Block"};
    for (int i = 0; i < MM.get_words_block(); i++){
        string col_title = memory_col_str + to_string(i);
        MM_title_columns << QString::fromStdString(col_title);
    }
    ui->tableW_MM->setHorizontalHeaderLabels(MM_title_columns);


    cout << "ok" << endl;

    // Filling the cells
    vector<string> cell_keys = MM.get_keys();
    for (int i = 0; i < MM.get_block_count(); i++){
        string cell_key = cell_keys[i];

        cout << cell_key << ": ";
        ui->tableW_MM->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(cell_key)));
        for (int j = 0; j < MM.get_words_block(); j++){
            vector <string> cell_value_array = MM.get_cells()[cell_key];
            string cell_value = cell_value_array[j];
            cout << cell_value << ", ";
            ui->tableW_MM->setItem(i, j + 1, new QTableWidgetItem(QString::fromStdString(cell_value)));
        }
        cout << endl;
    }
    //----------------------------------------------------------- Tabs  -------------------------------------------------------------

    //------------------------------------------------------------ DC -------------------------------------------------------------
    // dc - direct cache


    cout << "ok5" << endl;

    int DC_width = 680;
    int DC_height = 500;
    ui->tableW_DC->resize(DC_width, DC_height);
    ui->tableW_DC->setRowCount(DC.get_line_count());

    QStringList DC_title_columns = {"Index", "Valid bit", "Tag", "Data", "Dirty bit"};
    ui->tableW_DC->setColumnCount(DC_title_columns.length());
    ui->tableW_DC->setHorizontalHeaderLabels(DC_title_columns);

    ui->tableW_DC->setColumnWidth(0, 100);
    ui->tableW_DC->setColumnWidth(1, 70);
    ui->tableW_DC->setColumnWidth(2, DC_width - 360);
    ui->tableW_DC->setColumnWidth(3, 100);
    ui->tableW_DC->setColumnWidth(4, 70);

    // Filling init value of cells (can be optimized)
    // Filling: index
    for (int i = 0; i < DC.get_line_count(); i++){
        QTableWidgetItem *cache_cell = new QTableWidgetItem(QString::fromStdString(MainMemory::BIN_addSpaces(MainMemory::DEC_to_BIN(i)) + " (" + to_string(i) + ")"));
        cache_cell->setTextAlignment(Qt::AlignCenter);
        ui->tableW_DC->setItem(i, 0, cache_cell);
    }
    // Filing: init valid bit, tag, data
    update_tableDC_values();

    // Table for BIN breakdown (row with number of bits)
    int breakdownTable_width = 380;
    int breakdownTable_height = 90;
    ui->tableW_instr_breakdown->resize(breakdownTable_width, breakdownTable_height);

    QTableWidgetItem *breakdown_cell_index = new QTableWidgetItem(QString::fromStdString(to_string(int(log(DC.get_line_count()) / log(2)))) + " bits");      // Index
    breakdown_cell_index->setTextAlignment(Qt::AlignCenter);
    ui->tableW_instr_breakdown->setItem(0, 0, breakdown_cell_index);
    ui->tableW_instr_breakdown->setColumnWidth(0, breakdownTable_width / 3);

    QTableWidgetItem *breakdown_cell_tag = new QTableWidgetItem(QString::fromStdString(to_string(DC.get_tag_length())) + " bits");                     // Tag
    breakdown_cell_tag->setTextAlignment(Qt::AlignCenter);
    ui->tableW_instr_breakdown->setItem(0, 1, breakdown_cell_tag);
    ui->tableW_instr_breakdown->setColumnWidth(1, breakdownTable_width / 3);

    QTableWidgetItem *breakdown_cell_offset = new QTableWidgetItem(QString::fromStdString(to_string(DC.get_offset())) + " bits");                        // Offset
    breakdown_cell_offset->setTextAlignment(Qt::AlignCenter);
    ui->tableW_instr_breakdown->setItem(0, 2, breakdown_cell_offset);
    ui->tableW_instr_breakdown->setColumnWidth(2, breakdownTable_width / 3);

    //------------------------------------------------------------- FA -------------------------------------------------------------

    //------------------------------------------------------------- SA -------------------------------------------------------------



    //-------------------------------------------------------- Bottom buttons --------------------------------------------------------
    connect(ui->pushB_nextStep, SIGNAL(released()), this, SLOT(look_throught_cacheClicked()));

    //connect(ui->pushB_generateInstruction, &QPushButton::released, this, &MainWindow::event_generate_intruction);
    ui->pushB_nextStep->setEnabled(false);

}

void MainWindow::update_tableDC_values(){
    for (int i = 0; i < DC.get_line_count(); i++){
        vector <string> cache_line = DC.get_line(i);
        for (int j = 0; j < cache_line.size(); j += 2){                                 // j += 2!!!! To avoid tag. I will use for it BIN_addSpaces below cycle
            QTableWidgetItem *cache_cell = new QTableWidgetItem(QString::fromStdString(cache_line[j]));
            cache_cell->setTextAlignment(Qt::AlignCenter);
            ui->tableW_DC->setItem(i, j + 1, cache_cell);               // j + 1 cuz 0 col in busy with index, which equals "i"
        }
        QTableWidgetItem *cell_tag = new QTableWidgetItem(QString::fromStdString(MainMemory::BIN_addSpaces(cache_line[1])));
        cell_tag->setTextAlignment(Qt::AlignCenter);
        ui->tableW_DC->setItem(i, 2, cell_tag);
    }
}

// Button that looks the instruction in cache and then in MM
void MainWindow::look_throught_cacheClicked(){
    cout << "[Button] Looking throught cache for random HEX instruction" << endl;

    // HEX to BIN
    string input_HEX = (ui->lineE_hex_intr->text()).toStdString();
    string input_BIN = MainMemory::HEX_to_BIN(input_HEX);
    string max_HEX = MainMemory::DEC_to_HEX(MM.get_size() - 1);          // Max HEX number in the memory
    string max_BIN = MainMemory::HEX_to_BIN(max_HEX);                   // Max BIN number in the memory
    while (input_BIN.length() < max_BIN.length()){                      // For cases like this: 2A and 34D. Tag length will be completely different
        input_BIN = "0000" + input_BIN;
    }

    cout << "HEX:\t" << input_HEX << endl
         << "BIN:\t" << input_BIN << endl;

    // Cache search
    cout << "[Function][search_cache] " << endl;
    int index_line_DEC = DC.search_cache(input_BIN);
    vector<string> cache_line = DC.get_line(index_line_DEC);

    // Showing BIN value
    ui->lineE_bin_intr->clear();
    ui->lineE_bin_intr->insert(QString::fromStdString(MainMemory::BIN_addSpaces(input_BIN)));

    // Showing BIN breakdown table: index, tag, offset
    QTableWidgetItem *breakdown_cell_index = new QTableWidgetItem(QString::fromStdString(MainMemory::BIN_addSpaces(MainMemory::DEC_to_BIN(index_line_DEC)) + " (" + to_string(index_line_DEC) + ")"));
    breakdown_cell_index->setTextAlignment(Qt::AlignCenter);
    ui->tableW_instr_breakdown->setItem(1, 0, breakdown_cell_index);

    QTableWidgetItem *breakdown_cell_tag = new QTableWidgetItem(QString::fromStdString(MainMemory::BIN_addSpaces(cache_line[1])));     // Tag
    breakdown_cell_tag->setTextAlignment(Qt::AlignCenter);
    ui->tableW_instr_breakdown->setItem(1, 1, breakdown_cell_tag);

    QTableWidgetItem *breakdown_cell_offset = new QTableWidgetItem(QString::fromStdString(MainMemory::BIN_addSpaces(input_BIN.substr(DC.get_tag_length() + 1))));          // Offset
    breakdown_cell_offset->setTextAlignment(Qt::AlignCenter);
    ui->tableW_instr_breakdown->setItem(1, 2, breakdown_cell_offset);

    // Updating the cache table
    cout << "[Funtion][updata_tableDc_values]" << endl;
    update_tableDC_values();
    ui->pushB_nextStep->setEnabled(false);
    cout << "Hit rate: " << DC.get_hit_rate() << endl;
    cout << "----------------------------------------------------------------" << endl;

}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    hide();
    menu = new Menu(this, &MM, &cache);
    menu->show();
}

