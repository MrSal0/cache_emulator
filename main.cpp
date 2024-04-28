#include "mainwindow.h"
#include "mainmemory.h"
#include "mainmemory.cpp"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainMemory c(16, 8, 1);

    MainWindow w;
    w.show();

    return a.exec();
}
