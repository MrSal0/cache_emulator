#include "mainwindow.h"
#include "mainmemory.h"
#include "menu.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Menu w;
    w.show();

    return app.exec();
}
