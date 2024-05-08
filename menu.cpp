#include "menu.h"
#include "ui_menu.h"


MainWindow *mainw;

MainMemory new_MM;
Cache new_cache(new_MM);


Menu::Menu(QWidget *parent, MainMemory *MM, Cache *cache)
    : QDialog(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);


    ui->lEdit_mm_size->setText(QString::number(MM->get_size()));
    ui->lEdit_cache_size->setText(QString::number(cache->get_cache_size()));
    ui->lEdit_word_size->setText(QString::number(MM->get_word_size()));
    ui->lEdit_offset->setText(QString::number(MM->get_offset()));
    ui->rBut_read->setChecked(true);
}

Menu::~Menu()
{
    delete ui;
}


void Menu::on_pushB_generate_instr_clicked(){

    if (ui->rBut_mixed->isChecked())
        new_cache.generate_list_Binstr();
    else if (ui->rBut_read->isChecked())
        new_cache.generate_list_Rinstr();
    else
        new_cache.generate_list_Linstr();

    for (auto a: new_cache.get_list_instr()){
        cout << a << " ";
    }
    cout << endl;

    string str_list_instr = "";
    for (int i = 0; i < new_cache.get_list_instr_size() - 1; i++) {
        str_list_instr += new_cache.get_instr(i) + ", ";
    }
    str_list_instr += new_cache.get_instr(new_cache.get_list_instr_size() - 1);

    ui->textE_list_intr->clear();
    ui->textE_list_intr->insertPlainText(QString::fromStdString(str_list_instr));
}

void Menu::on_lEdit_num_instr_textEdited(const QString &input_size)
{
    new_cache.set_list_instr_size(input_size.toInt());
    string butt_text = "Згенерувати " + to_string(new_cache.get_list_instr_size()) + " запитів";
    ui->pushB_generate_instr->setText(QString::fromStdString(butt_text));

}

void Menu::on_pushButton_clicked()
{
    hide();

    int new_mm_size = (ui->lEdit_mm_size->text()).toInt();
    int new_cache_size = (ui->lEdit_cache_size->text()).toInt();
    int new_word_size = (ui->lEdit_word_size->text().toInt());
    int new_offset = (ui->lEdit_offset->text()).toInt();

    new_MM = *new MainMemory(new_mm_size, new_word_size, new_offset);
    new_cache = *new Cache(new_cache_size, new_MM);

    mainw = new MainWindow(this, &new_MM, &new_cache);
    mainw->show();
}


