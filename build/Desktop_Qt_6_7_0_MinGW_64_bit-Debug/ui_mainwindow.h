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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QWidget *centralwidget;
    QTableWidget *tableW_MM;
    QTabWidget *tabW_caches;
    QWidget *tab_DC;
    QLabel *label_2;
    QTableWidget *tableW_DC;
    QLabel *label_3;
    QLineEdit *lineE_bin_intr;
    QLabel *label_1;
    QLineEdit *lineE_hex_intr;
    QTableWidget *tableW_instr_breakdown;
    QLabel *label_4;
    QWidget *tab_FA;
    QWidget *tab_SA;
    QPushButton *pushB_nextStep;
    QPushButton *pushButton;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label_13;
    QTextEdit *tEdit_info;
    QLabel *label_16;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_mm_size;
    QLabel *label_cache_size;
    QLabel *label_word_size;
    QLabel *label_offset;
    QLabel *label_17;
    QTextEdit *tEdit_list_instr;
    QLabel *label_18;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(1400, 800);
        action = new QAction(MainWindow);
        action->setObjectName("action");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tableW_MM = new QTableWidget(centralwidget);
        if (tableW_MM->columnCount() < 2)
            tableW_MM->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableW_MM->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableW_MM->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableW_MM->rowCount() < 1)
            tableW_MM->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableW_MM->setVerticalHeaderItem(0, __qtablewidgetitem2);
        tableW_MM->setObjectName("tableW_MM");
        tableW_MM->setGeometry(QRect(1030, 30, 350, 700));
        tableW_MM->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableW_MM->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableW_MM->horizontalHeader()->setStretchLastSection(true);
        tableW_MM->verticalHeader()->setVisible(false);
        tabW_caches = new QTabWidget(centralwidget);
        tabW_caches->setObjectName("tabW_caches");
        tabW_caches->setEnabled(true);
        tabW_caches->setGeometry(QRect(320, 30, 701, 701));
        tabW_caches->setAcceptDrops(false);
        tabW_caches->setDocumentMode(false);
        tabW_caches->setTabsClosable(false);
        tabW_caches->setMovable(false);
        tabW_caches->setTabBarAutoHide(false);
        tab_DC = new QWidget();
        tab_DC->setObjectName("tab_DC");
        label_2 = new QLabel(tab_DC);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(130, 80, 41, 21));
        tableW_DC = new QTableWidget(tab_DC);
        if (tableW_DC->columnCount() < 4)
            tableW_DC->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableW_DC->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableW_DC->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableW_DC->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableW_DC->setHorizontalHeaderItem(3, __qtablewidgetitem6);
        if (tableW_DC->rowCount() < 2)
            tableW_DC->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableW_DC->setVerticalHeaderItem(0, __qtablewidgetitem7);
        tableW_DC->setObjectName("tableW_DC");
        tableW_DC->setGeometry(QRect(10, 259, 680, 401));
        tableW_DC->setAutoFillBackground(false);
        tableW_DC->setLineWidth(1);
        tableW_DC->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableW_DC->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableW_DC->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        tableW_DC->setProperty("showDropIndicator", QVariant(true));
        tableW_DC->setDragDropOverwriteMode(true);
        tableW_DC->setShowGrid(true);
        tableW_DC->setGridStyle(Qt::SolidLine);
        tableW_DC->setRowCount(2);
        tableW_DC->setColumnCount(4);
        tableW_DC->horizontalHeader()->setVisible(true);
        tableW_DC->horizontalHeader()->setCascadingSectionResizes(false);
        tableW_DC->horizontalHeader()->setDefaultSectionSize(110);
        tableW_DC->verticalHeader()->setVisible(false);
        tableW_DC->verticalHeader()->setHighlightSections(true);
        label_3 = new QLabel(tab_DC);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 230, 91, 20));
        lineE_bin_intr = new QLineEdit(tab_DC);
        lineE_bin_intr->setObjectName("lineE_bin_intr");
        lineE_bin_intr->setEnabled(true);
        lineE_bin_intr->setGeometry(QRect(170, 80, 381, 28));
        lineE_bin_intr->setAlignment(Qt::AlignCenter);
        lineE_bin_intr->setReadOnly(true);
        label_1 = new QLabel(tab_DC);
        label_1->setObjectName("label_1");
        label_1->setGeometry(QRect(300, 10, 281, 20));
        lineE_hex_intr = new QLineEdit(tab_DC);
        lineE_hex_intr->setObjectName("lineE_hex_intr");
        lineE_hex_intr->setEnabled(true);
        lineE_hex_intr->setGeometry(QRect(170, 40, 381, 28));
        lineE_hex_intr->setAlignment(Qt::AlignCenter);
        lineE_hex_intr->setReadOnly(true);
        tableW_instr_breakdown = new QTableWidget(tab_DC);
        if (tableW_instr_breakdown->columnCount() < 3)
            tableW_instr_breakdown->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableW_instr_breakdown->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableW_instr_breakdown->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableW_instr_breakdown->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        if (tableW_instr_breakdown->rowCount() < 2)
            tableW_instr_breakdown->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableW_instr_breakdown->setVerticalHeaderItem(0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableW_instr_breakdown->setVerticalHeaderItem(1, __qtablewidgetitem12);
        tableW_instr_breakdown->setObjectName("tableW_instr_breakdown");
        tableW_instr_breakdown->setGeometry(QRect(170, 130, 381, 90));
        tableW_instr_breakdown->setAutoFillBackground(false);
        tableW_instr_breakdown->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableW_instr_breakdown->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        tableW_instr_breakdown->horizontalHeader()->setHighlightSections(true);
        tableW_instr_breakdown->verticalHeader()->setVisible(false);
        label_4 = new QLabel(tab_DC);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(130, 40, 31, 21));
        tabW_caches->addTab(tab_DC, QString());
        tab_FA = new QWidget();
        tab_FA->setObjectName("tab_FA");
        tabW_caches->addTab(tab_FA, QString());
        tab_SA = new QWidget();
        tab_SA->setObjectName("tab_SA");
        tabW_caches->addTab(tab_SA, QString());
        pushB_nextStep = new QPushButton(centralwidget);
        pushB_nextStep->setObjectName("pushB_nextStep");
        pushB_nextStep->setEnabled(true);
        pushB_nextStep->setGeometry(QRect(700, 740, 700, 29));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 601, 281, 29));
        formLayoutWidget_2 = new QWidget(centralwidget);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(20, 521, 281, 71));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(formLayoutWidget_2);
        label_14->setObjectName("label_14");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_14);

        label_15 = new QLabel(formLayoutWidget_2);
        label_15->setObjectName("label_15");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_15);

        lineEdit_3 = new QLineEdit(formLayoutWidget_2);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setReadOnly(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_3);

        lineEdit_4 = new QLineEdit(formLayoutWidget_2);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setReadOnly(true);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_4);

        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(130, 500, 81, 21));
        tEdit_info = new QTextEdit(centralwidget);
        tEdit_info->setObjectName("tEdit_info");
        tEdit_info->setGeometry(QRect(20, 200, 281, 171));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(120, 180, 81, 20));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(30, 60, 271, 101));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName("label_7");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_7);

        label_mm_size = new QLabel(formLayoutWidget);
        label_mm_size->setObjectName("label_mm_size");

        formLayout->setWidget(0, QFormLayout::FieldRole, label_mm_size);

        label_cache_size = new QLabel(formLayoutWidget);
        label_cache_size->setObjectName("label_cache_size");

        formLayout->setWidget(1, QFormLayout::FieldRole, label_cache_size);

        label_word_size = new QLabel(formLayoutWidget);
        label_word_size->setObjectName("label_word_size");

        formLayout->setWidget(2, QFormLayout::FieldRole, label_word_size);

        label_offset = new QLabel(formLayoutWidget);
        label_offset->setObjectName("label_offset");

        formLayout->setWidget(3, QFormLayout::FieldRole, label_offset);

        label_17 = new QLabel(centralwidget);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(100, 40, 151, 20));
        tEdit_list_instr = new QTextEdit(centralwidget);
        tEdit_list_instr->setObjectName("tEdit_list_instr");
        tEdit_list_instr->setGeometry(QRect(20, 410, 281, 81));
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(110, 390, 111, 20));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabW_caches->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\227\320\274\321\226\320\275\320\270\321\202\320\270 \320\275\320\260\320\273\320\260\321\210\321\202\321\203\320\262\320\260\320\275\320\275\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableW_MM->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Block", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableW_MM->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "1 word", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableW_MM->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\320\270\320\271 \321\200\321\217\320\264\320\276\320\272", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "BIN:", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableW_DC->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Index", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableW_DC->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Valid bit", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableW_DC->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Tag", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableW_DC->horizontalHeaderItem(3);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Data", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableW_DC->verticalHeaderItem(0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\320\270\320\271 \321\200\321\217\320\264\320\276\320\272", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Cache table:", nullptr));
        label_1->setText(QCoreApplication::translate("MainWindow", "\320\222\321\205\321\226\320\264\320\275\320\270\320\271 \320\267\320\260\320\277\320\270\321\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableW_instr_breakdown->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "index", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableW_instr_breakdown->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "tag", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableW_instr_breakdown->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "offset", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableW_instr_breakdown->verticalHeaderItem(0);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "number of bits", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableW_instr_breakdown->verticalHeaderItem(1);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "BIN value", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "HEX", nullptr));
        tabW_caches->setTabText(tabW_caches->indexOf(tab_DC), QCoreApplication::translate("MainWindow", "Direct maping", nullptr));
        tabW_caches->setTabText(tabW_caches->indexOf(tab_FA), QCoreApplication::translate("MainWindow", "Fully Accosiative", nullptr));
        tabW_caches->setTabText(tabW_caches->indexOf(tab_SA), QCoreApplication::translate("MainWindow", "N-way Set Accosiative", nullptr));
        pushB_nextStep->setText(QCoreApplication::translate("MainWindow", "Look for data in the cache", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\274\321\226\320\275\321\202\320\270 \320\275\320\260\320\273\320\260\321\210\321\202\321\203\320\262\320\260\320\275\320\275\321\217", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202 \320\277\320\276\320\277\320\260\320\264\320\260\320\275\321\214: ", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \320\267\320\262\320\265\321\200\320\275\320\265\320\275\321\214", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260:", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\320\206\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\217", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\240\320\276\320\267\320\274\321\226\321\200 \320\277\320\260\320\274'\321\217\321\202\321\226:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\240\320\276\320\267\320\274\321\226\321\200 \320\272\320\265\321\210\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\240\320\276\320\267\320\274\321\226\321\200 1 \321\201\320\273\320\276\320\262\320\260: ", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\236\321\204\321\201\320\265\321\202:", nullptr));
        label_mm_size->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_cache_size->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_word_size->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_offset->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\320\260\320\273\321\214\320\275\320\260 \321\226\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\217", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\273\321\226\320\272 \320\267\320\260\320\277\320\270\321\202\321\226\320\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
