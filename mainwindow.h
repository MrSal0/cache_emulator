#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include<QMainWindow>
#include "menu.h"
#include "mainmemory.h"
#include "cache.h"

QT_BEGIN_NAMESPACE

namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr, MainMemory *new_MM = new MainMemory(), Cache *new_cache = new Cache());
    ~MainWindow();

private slots:
    void update_tableDC_values();
    void look_throught_cacheClicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;



};
#endif // MAINWINDOW_H
