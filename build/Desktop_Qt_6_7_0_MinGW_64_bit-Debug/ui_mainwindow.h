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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBox>
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
    QToolBox *toolB_info;
    QWidget *page_cache_settings;
    QWidget *formLayoutWidget;
    QFormLayout *fLayout_mem_settings;
    QLabel *label;
    QSlider *horizontalSlider;
    QLabel *label_5;
    QSlider *horizontalSlider_2;
    QLabel *label_7;
    QSlider *horizontalSlider_3;
    QLabel *label_6;
    QSlider *horizontalSlider_4;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *gridLayoutWidget;
    QGridLayout *gLayout_instr_settings;
    QLineEdit *lineEdit;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;
    QLabel *label_10;
    QRadioButton *radioButton_3;
    QLabel *label_11;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *vLayout_record_methods;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QLabel *label_12;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *vLayout_del_methods;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_7;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QWidget *page_proccess_info;
    QTextEdit *textEdit;
    QLabel *label_13;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
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
        toolB_info = new QToolBox(centralwidget);
        toolB_info->setObjectName("toolB_info");
        toolB_info->setGeometry(QRect(10, 40, 291, 681));
        page_cache_settings = new QWidget();
        page_cache_settings->setObjectName("page_cache_settings");
        page_cache_settings->setGeometry(QRect(0, 0, 291, 611));
        formLayoutWidget = new QWidget(page_cache_settings);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(0, 20, 318, 113));
        fLayout_mem_settings = new QFormLayout(formLayoutWidget);
        fLayout_mem_settings->setObjectName("fLayout_mem_settings");
        fLayout_mem_settings->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        fLayout_mem_settings->setWidget(0, QFormLayout::LabelRole, label);

        horizontalSlider = new QSlider(formLayoutWidget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setOrientation(Qt::Horizontal);

        fLayout_mem_settings->setWidget(0, QFormLayout::FieldRole, horizontalSlider);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        fLayout_mem_settings->setWidget(1, QFormLayout::LabelRole, label_5);

        horizontalSlider_2 = new QSlider(formLayoutWidget);
        horizontalSlider_2->setObjectName("horizontalSlider_2");
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        fLayout_mem_settings->setWidget(1, QFormLayout::FieldRole, horizontalSlider_2);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName("label_7");

        fLayout_mem_settings->setWidget(2, QFormLayout::LabelRole, label_7);

        horizontalSlider_3 = new QSlider(formLayoutWidget);
        horizontalSlider_3->setObjectName("horizontalSlider_3");
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        fLayout_mem_settings->setWidget(2, QFormLayout::FieldRole, horizontalSlider_3);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");

        fLayout_mem_settings->setWidget(3, QFormLayout::LabelRole, label_6);

        horizontalSlider_4 = new QSlider(formLayoutWidget);
        horizontalSlider_4->setObjectName("horizontalSlider_4");
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        fLayout_mem_settings->setWidget(3, QFormLayout::FieldRole, horizontalSlider_4);

        label_8 = new QLabel(page_cache_settings);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(110, 0, 55, 20));
        label_9 = new QLabel(page_cache_settings);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(120, 150, 63, 20));
        gridLayoutWidget = new QWidget(page_cache_settings);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 170, 291, 144));
        gLayout_instr_settings = new QGridLayout(gridLayoutWidget);
        gLayout_instr_settings->setObjectName("gLayout_instr_settings");
        gLayout_instr_settings->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        gLayout_instr_settings->addWidget(lineEdit, 1, 1, 1, 2);

        radioButton_2 = new QRadioButton(gridLayoutWidget);
        radioButton_2->setObjectName("radioButton_2");

        gLayout_instr_settings->addWidget(radioButton_2, 0, 1, 1, 1);

        radioButton = new QRadioButton(gridLayoutWidget);
        radioButton->setObjectName("radioButton");

        gLayout_instr_settings->addWidget(radioButton, 0, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");

        gLayout_instr_settings->addWidget(pushButton, 3, 0, 1, 3);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setReadOnly(false);

        gLayout_instr_settings->addWidget(lineEdit_2, 2, 0, 1, 3);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName("label_10");

        gLayout_instr_settings->addWidget(label_10, 1, 0, 1, 1);

        radioButton_3 = new QRadioButton(gridLayoutWidget);
        radioButton_3->setObjectName("radioButton_3");

        gLayout_instr_settings->addWidget(radioButton_3, 0, 2, 1, 1);

        label_11 = new QLabel(page_cache_settings);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(100, 330, 111, 20));
        verticalLayoutWidget = new QWidget(page_cache_settings);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 350, 291, 94));
        vLayout_record_methods = new QVBoxLayout(verticalLayoutWidget);
        vLayout_record_methods->setObjectName("vLayout_record_methods");
        vLayout_record_methods->setContentsMargins(0, 0, 0, 0);
        radioButton_4 = new QRadioButton(verticalLayoutWidget);
        radioButton_4->setObjectName("radioButton_4");

        vLayout_record_methods->addWidget(radioButton_4);

        radioButton_5 = new QRadioButton(verticalLayoutWidget);
        radioButton_5->setObjectName("radioButton_5");

        vLayout_record_methods->addWidget(radioButton_5);

        radioButton_6 = new QRadioButton(verticalLayoutWidget);
        radioButton_6->setObjectName("radioButton_6");

        vLayout_record_methods->addWidget(radioButton_6);

        label_12 = new QLabel(page_cache_settings);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(100, 460, 131, 20));
        verticalLayoutWidget_2 = new QWidget(page_cache_settings);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(0, 480, 291, 127));
        vLayout_del_methods = new QVBoxLayout(verticalLayoutWidget_2);
        vLayout_del_methods->setObjectName("vLayout_del_methods");
        vLayout_del_methods->setContentsMargins(0, 0, 0, 0);
        radioButton_8 = new QRadioButton(verticalLayoutWidget_2);
        radioButton_8->setObjectName("radioButton_8");

        vLayout_del_methods->addWidget(radioButton_8);

        radioButton_9 = new QRadioButton(verticalLayoutWidget_2);
        radioButton_9->setObjectName("radioButton_9");

        vLayout_del_methods->addWidget(radioButton_9);

        radioButton_10 = new QRadioButton(verticalLayoutWidget_2);
        radioButton_10->setObjectName("radioButton_10");

        vLayout_del_methods->addWidget(radioButton_10);

        radioButton_7 = new QRadioButton(verticalLayoutWidget_2);
        radioButton_7->setObjectName("radioButton_7");

        vLayout_del_methods->addWidget(radioButton_7);

        line = new QFrame(page_cache_settings);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 130, 291, 16));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(page_cache_settings);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(0, 310, 291, 16));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        line_3 = new QFrame(page_cache_settings);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(0, 440, 291, 16));
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        toolB_info->addItem(page_cache_settings, QString::fromUtf8("\320\235\320\260\320\273\320\260\321\210\321\202\321\203\320\262\320\260\320\275\320\275\321\217"));
        page_proccess_info = new QWidget();
        page_proccess_info->setObjectName("page_proccess_info");
        page_proccess_info->setGeometry(QRect(0, 0, 291, 611));
        textEdit = new QTextEdit(page_proccess_info);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(0, 0, 281, 171));
        label_13 = new QLabel(page_proccess_info);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(110, 190, 81, 20));
        formLayoutWidget_2 = new QWidget(page_proccess_info);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(0, 210, 281, 71));
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

        toolB_info->addItem(page_proccess_info, QString::fromUtf8("\320\206\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\217"));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabW_caches->setCurrentIndex(0);
        toolB_info->setCurrentIndex(0);


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
        label->setText(QCoreApplication::translate("MainWindow", "\320\240\320\276\320\267\320\274\321\226\321\200 \320\276\321\201\320\275\320\276\320\262\320\275\320\276\321\227 \320\277\320\260\320\274'\321\217\321\202\321\226:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\240\320\276\320\267\320\274\321\226\321\200 \320\272\320\265\321\210-\320\277\320\260\320\274'\321\217\321\202\321\226:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\240\320\276\320\267\320\274\321\226\321\200 1 \321\201\320\273\320\276\320\262\320\260:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\236\321\204\321\201\320\265\321\202:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\320\274'\321\217\321\202\321\214", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\202", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "\320\247\320\270\321\202\320\260\320\275\320\275\321\217", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\263\320\265\320\275\320\265\321\200\321\203\320\262\320\260\321\202\320\270 10 \320\267\320\260\320\277\320\270\321\202\321\226\320\262", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\273\321\226\320\272 \320\275\320\260\321\201\321\202\321\203\320\277\320\275\320\270\321\205 \320\267\320\260\320\277\320\270\321\202\321\226\320\262", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\202 (HEX):", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "\320\222 \320\277\320\265\321\200\320\265\320\274\321\226\321\210\320\272\321\203", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\321\202\320\276\320\264 \320\267\320\260\320\277\320\270\321\201\321\203", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\320\272\321\200\321\226\320\267\320\275\320\270\320\271 \320\267\320\260\320\277\320\270\321\201", nullptr));
        radioButton_5->setText(QCoreApplication::translate("MainWindow", "\320\227\320\262\320\276\321\200\320\276\321\202\320\275\321\226\320\271 \320\267\320\260\320\277\320\270\321\201", nullptr));
        radioButton_6->setText(QCoreApplication::translate("MainWindow", "RadioButton", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\321\202\320\276\320\264 \320\262\320\270\320\264\320\260\320\273\320\265\320\275\320\275\321\217", nullptr));
        radioButton_8->setText(QCoreApplication::translate("MainWindow", "LRU", nullptr));
        radioButton_9->setText(QCoreApplication::translate("MainWindow", "LFU", nullptr));
        radioButton_10->setText(QCoreApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_7->setText(QCoreApplication::translate("MainWindow", "FIFO", nullptr));
        toolB_info->setItemText(toolB_info->indexOf(page_cache_settings), QCoreApplication::translate("MainWindow", "\320\235\320\260\320\273\320\260\321\210\321\202\321\203\320\262\320\260\320\275\320\275\321\217", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260:", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202 \320\277\320\276\320\277\320\260\320\264\320\260\320\275\321\214: ", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \320\267\320\262\320\265\321\200\320\275\320\265\320\275\321\214", nullptr));
        toolB_info->setItemText(toolB_info->indexOf(page_proccess_info), QCoreApplication::translate("MainWindow", "\320\206\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
