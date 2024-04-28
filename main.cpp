#include "mainwindow.h"
#include "mainmemory.h"
#include "mainmemory.cpp"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    return a.exec();
}
