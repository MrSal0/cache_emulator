#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include "mainwindow.h"
#include "mainmemory.h"
#include "cache.h"

namespace Ui {
class Menu;
}

class Menu : public QDialog
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr, MainMemory *MM = new MainMemory(), Cache *cache = new Cache());
    ~Menu();

private slots:

    void on_lEdit_num_instr_textEdited(const QString &arg1);

    void on_pushButton_clicked();

    void on_pushB_generate_instr_clicked();

private:
    Ui::Menu *ui;
};

#endif // MENU_H
