/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QWidget *centralwidget;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QTableWidget *tableWidget_mainMemory;
    QTabWidget *tabW_cache_maping;
    QWidget *widget;
    QLabel *label;
    QTableWidget *tableWidget;
    QTableWidget *tableWidget_2;
    QLabel *label_3;
    QFrame *line;
    QWidget *widget1;
    QWidget *tab;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1199, 699);
        action = new QAction(MainWindow);
        action->setObjectName("action");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(210, 70, 261, 28));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 40, 281, 20));
        tableWidget_mainMemory = new QTableWidget(centralwidget);
        if (tableWidget_mainMemory->columnCount() < 2)
            tableWidget_mainMemory->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_mainMemory->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_mainMemory->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget_mainMemory->rowCount() < 1)
            tableWidget_mainMemory->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_mainMemory->setVerticalHeaderItem(0, __qtablewidgetitem2);
        tableWidget_mainMemory->setObjectName("tableWidget_mainMemory");
        tableWidget_mainMemory->setGeometry(QRect(779, 20, 401, 651));
        tableWidget_mainMemory->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget_mainMemory->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_mainMemory->horizontalHeader()->setStretchLastSection(true);
        tableWidget_mainMemory->verticalHeader()->setVisible(false);
        tabW_cache_maping = new QTabWidget(centralwidget);
        tabW_cache_maping->setObjectName("tabW_cache_maping");
        tabW_cache_maping->setEnabled(true);
        tabW_cache_maping->setGeometry(QRect(50, 160, 701, 511));
        widget = new QWidget();
        widget->setObjectName("widget");
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 20, 91, 20));
        tableWidget = new QTableWidget(widget);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(90, 50, 371, 61));
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget->setProperty("showDropIndicator", QVariant(true));
        tableWidget->setDragDropOverwriteMode(true);
        tableWidget->setShowGrid(true);
        tableWidget->setRowCount(1);
        tableWidget->setColumnCount(3);
        tableWidget->horizontalHeader()->setVisible(true);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setHighlightSections(true);
        tableWidget_2 = new QTableWidget(widget);
        if (tableWidget_2->columnCount() < 5)
            tableWidget_2->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem10);
        if (tableWidget_2->rowCount() < 1)
            tableWidget_2->setRowCount(1);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->setGeometry(QRect(60, 180, 551, 50));
        tableWidget_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_2->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget_2->setProperty("showDropIndicator", QVariant(true));
        tableWidget_2->setDragDropOverwriteMode(true);
        tableWidget_2->setShowGrid(true);
        tableWidget_2->setRowCount(1);
        tableWidget_2->setColumnCount(5);
        tableWidget_2->horizontalHeader()->setVisible(true);
        tableWidget_2->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_2->horizontalHeader()->setDefaultSectionSize(110);
        tableWidget_2->verticalHeader()->setVisible(false);
        tableWidget_2->verticalHeader()->setHighlightSections(true);
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 150, 91, 20));
        line = new QFrame(widget);
        line->setObjectName("line");
        line->setGeometry(QRect(90, 120, 611, 21));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        tabW_cache_maping->addTab(widget, QString());
        widget1 = new QWidget();
        widget1->setObjectName("widget1");
        tabW_cache_maping->addTab(widget1, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        tabW_cache_maping->addTab(tab, QString());
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabW_cache_maping->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\227\320\274\321\226\320\275\320\270\321\202\320\270 \320\275\320\260\320\273\320\260\321\210\321\202\321\203\320\262\320\260\320\275\320\275\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\262\320\265\321\200\320\275\320\265\320\275\320\275\321\217 \320\264\320\276 \320\272\320\276\320\274\321\226\321\200\320\272\320\270 \320\277\320\260\320\274'\321\217\321\202\321\226 (HEX)", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_mainMemory->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Block", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_mainMemory->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "1 word", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_mainMemory->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\320\270\320\271 \321\200\321\217\320\264\320\276\320\272", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Instruction:", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Tag", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Index", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Offset", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Index", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "Valid bit", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "Tag", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "Data", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "Dirty bit", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Cache table:", nullptr));
        tabW_cache_maping->setTabText(tabW_cache_maping->indexOf(widget), QCoreApplication::translate("MainWindow", "Direct maping", nullptr));
        tabW_cache_maping->setTabText(tabW_cache_maping->indexOf(widget1), QCoreApplication::translate("MainWindow", "Fully Accosiative", nullptr));
        tabW_cache_maping->setTabText(tabW_cache_maping->indexOf(tab), QCoreApplication::translate("MainWindow", "N-way Set Accosiative", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
