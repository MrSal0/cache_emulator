#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include<QMainWindow>


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
    void update_tableDC_values();
    void generate_instructionClicked();
    void look_throught_cacheClicked();

private:
    Ui::MainWindow *ui;
    //QTableWidget *tableWidget_mainMemory;
    //QPushButton *pushB_generateInstruction;


};
#endif // MAINWINDOW_H
