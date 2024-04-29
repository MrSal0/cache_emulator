#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainmemory.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    //===========================================================--MAIN MEMORY--===========================================================
    MainMemory MM(2048, 2, 4);
    MM.show_console();

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

    // Filling the cells
    for (int i = 0; i < MM.get_block_count(); i++){
        string cell_key = cell_keys[i];
        ui->tableWidget_mainMemory->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(cell_key)));
        for (int j = 0; j < MM.get_words_block(); j++){
            vector <int> cell_value_array = MM.get_cells()[cell_key];
            string cell_value = to_string(cell_value_array[j]);
            ui->tableWidget_mainMemory->setItem(i, j + 1, new QTableWidgetItem(QString::fromStdString(cell_value)));
        }
    }
    //===========================================================--Cache --===========================================================




}


MainWindow::~MainWindow()
{
    delete ui;
}
