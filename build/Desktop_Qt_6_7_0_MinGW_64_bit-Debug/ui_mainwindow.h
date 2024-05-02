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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
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
    QPushButton *pushB_generateInstruction;
    QPushButton *pushB_nextStep;
    QWidget *formLayoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_7;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider_3;
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_6;
    QLabel *label_9;
    QLineEdit *lineEdit_4;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_2;
    QPushButton *pushButton;
    QRadioButton *radioButton;
    QLabel *label_8;
    QLabel *label_10;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QTextEdit *textEdit;
    QLabel *label_12;
    QLabel *label_13;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_12;
    QRadioButton *radioButton_11;
    QRadioButton *radioButton_10;
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
        pushB_generateInstruction = new QPushButton(centralwidget);
        pushB_generateInstruction->setObjectName("pushB_generateInstruction");
        pushB_generateInstruction->setGeometry(QRect(0, 740, 700, 29));
        pushB_nextStep = new QPushButton(centralwidget);
        pushB_nextStep->setObjectName("pushB_nextStep");
        pushB_nextStep->setEnabled(true);
        pushB_nextStep->setGeometry(QRect(700, 740, 700, 29));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 30, 303, 111));
        gridLayout_2 = new QGridLayout(formLayoutWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setHorizontalSpacing(3);
        gridLayout_2->setVerticalSpacing(2);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName("label_7");

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        horizontalSlider = new QSlider(formLayoutWidget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSlider, 0, 1, 1, 1);

        horizontalSlider_2 = new QSlider(formLayoutWidget);
        horizontalSlider_2->setObjectName("horizontalSlider_2");
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSlider_2, 1, 1, 1, 1);

        horizontalSlider_3 = new QSlider(formLayoutWidget);
        horizontalSlider_3->setObjectName("horizontalSlider_3");
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSlider_3, 2, 1, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 10, 121, 21));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(20, 180, 291, 167));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_6 = new QLineEdit(gridLayoutWidget);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setReadOnly(true);

        gridLayout->addWidget(lineEdit_6, 3, 0, 1, 3);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 2, 0, 1, 2);

        lineEdit_4 = new QLineEdit(gridLayoutWidget);
        lineEdit_4->setObjectName("lineEdit_4");

        gridLayout->addWidget(lineEdit_4, 2, 2, 1, 1);

        radioButton_8 = new QRadioButton(gridLayoutWidget);
        radioButton_8->setObjectName("radioButton_8");
        radioButton_8->setContextMenuPolicy(Qt::PreventContextMenu);

        gridLayout->addWidget(radioButton_8, 0, 2, 1, 1);

        radioButton_2 = new QRadioButton(gridLayoutWidget);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setContextMenuPolicy(Qt::PreventContextMenu);

        gridLayout->addWidget(radioButton_2, 0, 1, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 4, 0, 1, 3);

        radioButton = new QRadioButton(gridLayoutWidget);
        radioButton->setObjectName("radioButton");
        radioButton->setContextMenuPolicy(Qt::PreventContextMenu);

        gridLayout->addWidget(radioButton, 0, 0, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(80, 160, 191, 20));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(120, 360, 101, 20));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 380, 291, 81));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_5 = new QRadioButton(verticalLayoutWidget);
        radioButton_5->setObjectName("radioButton_5");

        verticalLayout->addWidget(radioButton_5);

        radioButton_6 = new QRadioButton(verticalLayoutWidget);
        radioButton_6->setObjectName("radioButton_6");

        verticalLayout->addWidget(radioButton_6);

        radioButton_7 = new QRadioButton(verticalLayoutWidget);
        radioButton_7->setObjectName("radioButton_7");

        verticalLayout->addWidget(radioButton_7);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(20, 630, 291, 81));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(130, 610, 81, 20));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(100, 480, 131, 20));
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(20, 500, 291, 101));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButton_9 = new QRadioButton(verticalLayoutWidget_2);
        radioButton_9->setObjectName("radioButton_9");

        verticalLayout_2->addWidget(radioButton_9);

        radioButton_12 = new QRadioButton(verticalLayoutWidget_2);
        radioButton_12->setObjectName("radioButton_12");

        verticalLayout_2->addWidget(radioButton_12);

        radioButton_11 = new QRadioButton(verticalLayoutWidget_2);
        radioButton_11->setObjectName("radioButton_11");

        verticalLayout_2->addWidget(radioButton_11);

        radioButton_10 = new QRadioButton(verticalLayoutWidget_2);
        radioButton_10->setObjectName("radioButton_10");

        verticalLayout_2->addWidget(radioButton_10);

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
        pushB_generateInstruction->setText(QCoreApplication::translate("MainWindow", "Generate instuction", nullptr));
        pushB_nextStep->setText(QCoreApplication::translate("MainWindow", "Look for data in the cache", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\240\320\276\320\267\320\274\321\226\321\200 \320\276\321\201\320\275\320\276\320\262\320\275\320\276\321\227 \320\277\320\260\320\274'\321\217\321\202\321\226:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\240\320\276\320\267\320\274\321\226\321\200 \320\272\320\265\321\210-\320\277\320\260\320\274'\321\217\321\202\321\226:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\227\320\274\321\226\321\211\320\265\320\275\320\275\321\217 \320\262\321\226\320\264 \320\260\320\264\321\200\320\265\321\201\320\270:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\272\320\265\321\210-\320\277\320\260\320\274'\321\217\321\202\321\226", nullptr));
        lineEdit_6->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\273\321\226\320\272 \320\267\320\260\320\277\320\270\321\202\321\226\320\262", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\202 (HEX):", nullptr));
        radioButton_8->setText(QCoreApplication::translate("MainWindow", "\320\222 \320\277\320\265\321\200\320\265\320\274\321\226\321\210\320\272\321\203", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "\320\247\320\270\321\202\320\260\320\275\320\275\321\217", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\263\320\265\320\275\320\265\321\200\321\203\320\262\320\260\321\202\320\270 10 \320\267\320\260\320\277\320\270\321\202\321\226\320\262", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\273\320\260\321\210\321\202\321\203\320\262\320\260\320\275\320\275\321\217 \320\267\320\260\320\277\320\270\321\202\321\226\320\262", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\321\202\320\276\320\264 \320\267\320\260\320\277\320\270\321\201\321\203", nullptr));
        radioButton_5->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\320\272\321\200\321\226\320\267\320\275\320\270\320\271 \320\267\320\260\320\277\320\270\321\201", nullptr));
        radioButton_6->setText(QCoreApplication::translate("MainWindow", "\320\227\320\262\320\276\321\200\320\276\321\202\320\275\321\226\320\271 \320\267\320\260\320\277\320\270\321\201", nullptr));
        radioButton_7->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\205\321\226\320\264\320\275\320\270\320\271 \320\267\320\260\320\277\320\270\321\201 (??)", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\206\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\217 ", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\321\202\320\276\320\264 \320\262\320\270\320\264\320\260\320\273\320\265\320\275\320\275\321\217", nullptr));
        radioButton_9->setText(QCoreApplication::translate("MainWindow", "LRU", nullptr));
        radioButton_12->setText(QCoreApplication::translate("MainWindow", "LMU", nullptr));
        radioButton_11->setText(QCoreApplication::translate("MainWindow", "FIFO", nullptr));
        radioButton_10->setText(QCoreApplication::translate("MainWindow", "RadioButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
