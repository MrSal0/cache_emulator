#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainmemory.h"
#include "mainmemory.cpp"
#include "cache.h"

using namespace std;

MainMemory MM(2048, 2, 2);                  // (Size in bites, bites per word, offset)
DirectMappedCache direct_cache(32, MM);         // (Size in bites, mainmemory)

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    //===========================================================--MAIN MEMORY--===========================================================

    MM.show_console();
    direct_cache.show_all_console();
    // Setting numebr of cols, rows

    int main_memory_width = 400;
    int main_memory_height = 600;
    ui->tableWidget_mainMemory->setRowCount(MM.get_block_count());
    ui->tableWidget_mainMemory->setColumnCount(MM.get_words_block() + 1);
    ui->tableWidget_mainMemory->resize(main_memory_width, main_memory_height);
    // Setting column size
    int block_col_width = 100;
    int other_col_width = main_memory_width - block_col_width - 30;
    string memory_col_str = "Word ";
    if (MM.get_offset() > 2){
        block_col_width = 50;
        memory_col_str = "W";
        other_col_width = main_memory_width - block_col_width - 30;
    }

    ui->tableWidget_mainMemory->setColumnWidth(0, block_col_width);
    for (int i = 1; i < MM.get_words_block() + 1; i++){
        ui->tableWidget_mainMemory->setColumnWidth(i, other_col_width / (MM.get_words_block()) );
    }

    // Setting column headers
    QStringList title_columns = {"Block"};
    for (int i = 0; i < MM.get_words_block(); i++){
        string col_title = memory_col_str + to_string(i);
        title_columns << QString::fromStdString(col_title);
    }
    ui->tableWidget_mainMemory->setHorizontalHeaderLabels(title_columns);

    // Getting all keys
    vector<string> cell_keys = MM.get_keys();

    // Filling the cells with random numbers
    for (int i = 0; i < MM.get_block_count(); i++){
        string cell_key = cell_keys[i];
        ui->tableWidget_mainMemory->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(cell_key)));
        for (int j = 0; j < MM.get_words_block(); j++){
            vector <string> cell_value_array = MM.get_cells()[cell_key];
            string cell_value = cell_value_array[j];
            ui->tableWidget_mainMemory->setItem(i, j + 1, new QTableWidgetItem(QString::fromStdString(cell_value)));
        }
    }
    //===========================================================--Cache --===========================================================
    connect(ui->pushB_generateInstruction, SIGNAL(released()), this, SLOT(generate_instructionClicked()));
    connect(ui->pushB_nextStep, SIGNAL(released()), this, SLOT(look_throught_cacheClicked()));
    //connect(ui->pushB_generateInstruction, &QPushButton::released, this, &MainWindow::event_generate_intruction);
    ui->pushB_nextStep->setEnabled(false);

}

void MainWindow::generate_instructionClicked(){
    int random_cell = rand() % MM.get_size();
    ui->lineEdit_hex_intruction->clear();
    ui->lineEdit_hex_intruction->insert(QString::fromStdString(MainMemory::DEC_to_HEX(random_cell)));
    ui->pushB_nextStep->setEnabled(true);

}

void MainWindow::look_throught_cacheClicked(){
    string input_HEX = (ui->lineEdit_hex_intruction->text()).toStdString();
    string input_BIN = MainMemory::HEX_to_BIN(input_HEX);
    cout << input_HEX << "\t"<< input_BIN << endl;

    string temp = input_BIN;
    for(int i = 4; i < temp.length(); i+=4){
        temp.insert(i, " ");
        i++;
    }
    ui->lineEdit_bin_intruction->clear();
    ui->lineEdit_bin_intruction->insert(QString::fromStdString(temp));


}

MainWindow::~MainWindow()
{
    delete ui;
}
