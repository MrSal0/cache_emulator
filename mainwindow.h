#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include <QStringList>
#include <QString>
#include <QPushButton>
#include "mainmemory.h"

QT_BEGIN_NAMESPACE

namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void generate_instructionClicked();        // Argument... how to make MakeMemory global variable, so i can delete this arg here

    // Check in cache ->
    void look_throught_cacheClicked();
private:
    Ui::MainWindow *ui;
    //QTableWidget *tableWidget_mainMemory;
    //QPushButton *pushB_generateInstruction;


};
#endif // MAINWINDOW_H
