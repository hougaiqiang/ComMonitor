/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionsaver;
    QAction *actionSave_as;
    QAction *actionASIIC;
    QAction *actionHex;
    QAction *actionZTE_V1;
    QAction *actionZTE_V2;
    QAction *actionHJ212;
    QAction *actionHJ212_2017;
    QAction *actionHelp;
    QAction *actionAbout;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QComboBox *comboBox_COM;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QComboBox *comboBox_Baud;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QComboBox *comboBox_Data;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QComboBox *comboBox_Stop;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QComboBox *comboBox_Parity;
    QPushButton *pushButton_Open_COM;
    QPushButton *pushButton_Monitor_COM;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_8;
    QPushButton *pushButton_Find_bin;
    QHBoxLayout *horizontalLayout_12;
    QLineEdit *lineEdit_File_bin;
    QPushButton *pushButton_Start_Download;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QLineEdit *lineEdit_Drive_Addr;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLineEdit *lineEdit_Program_Addr;
    QPushButton *pushButton_Get_Program;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QGridLayout *gridLayout_4;
    QTextBrowser *textBrowser;
    QWidget *tab_2;
    QListWidget *listWidget;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_9;
    QLineEdit *lineEdit_Bit;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_10;
    QLineEdit *lineEdit_Int;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_11;
    QLineEdit *lineEdit_Hex;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_12;
    QLineEdit *lineEdit_CRC_in;
    QLineEdit *lineEdit_CRC_out;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_13;
    QLineEdit *lineEdit_Sum_in;
    QLineEdit *lineEdit_Sum_out;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_14;
    QLineEdit *lineEdit_Hex_to_Asiic;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_15;
    QLineEdit *lineEdit_Asiic_to_Hex;
    QGroupBox *groupBox_10;
    QHBoxLayout *horizontalLayout_23;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_16;
    QLineEdit *lineEdit_Hex_to_Float;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_17;
    QLineEdit *lineEdit_float_to_Hex;
    QGroupBox *groupBox_11;
    QVBoxLayout *verticalLayout_11;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QHBoxLayout *horizontalLayout_11;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_9;
    QPlainTextEdit *plainTextEdit_Send;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *radioButton_Send_16;
    QRadioButton *radioButton_Send_Asiic;
    QSpacerItem *verticalSpacer_5;
    QPushButton *pushButton_Send_Clear;
    QPushButton *pushButton_Send;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_10;
    QPlainTextEdit *plainTextEdit_Rcv;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *radioButton_Rcv_16;
    QRadioButton *radioButton_Rcv_Asiic;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_Rcv_Clear;
    QMenuBar *menuBar;
    QMenu *menufile;
    QMenu *menuEdit;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1097, 892);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionsaver = new QAction(MainWindow);
        actionsaver->setObjectName(QStringLiteral("actionsaver"));
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        actionASIIC = new QAction(MainWindow);
        actionASIIC->setObjectName(QStringLiteral("actionASIIC"));
        actionHex = new QAction(MainWindow);
        actionHex->setObjectName(QStringLiteral("actionHex"));
        actionZTE_V1 = new QAction(MainWindow);
        actionZTE_V1->setObjectName(QStringLiteral("actionZTE_V1"));
        actionZTE_V2 = new QAction(MainWindow);
        actionZTE_V2->setObjectName(QStringLiteral("actionZTE_V2"));
        actionHJ212 = new QAction(MainWindow);
        actionHJ212->setObjectName(QStringLiteral("actionHJ212"));
        actionHJ212_2017 = new QAction(MainWindow);
        actionHJ212_2017->setObjectName(QStringLiteral("actionHJ212_2017"));
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setMaximumSize(QSize(215, 16777215));
        verticalLayout_3 = new QVBoxLayout(groupBox_5);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(groupBox_5);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMaximumSize(QSize(200, 16777215));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_4->addWidget(label);

        comboBox_COM = new QComboBox(groupBox);
        comboBox_COM->setObjectName(QStringLiteral("comboBox_COM"));

        horizontalLayout_4->addWidget(comboBox_COM);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_5->addWidget(label_2);

        comboBox_Baud = new QComboBox(groupBox);
        comboBox_Baud->setObjectName(QStringLiteral("comboBox_Baud"));

        horizontalLayout_5->addWidget(comboBox_Baud);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_6->addWidget(label_3);

        comboBox_Data = new QComboBox(groupBox);
        comboBox_Data->setObjectName(QStringLiteral("comboBox_Data"));

        horizontalLayout_6->addWidget(comboBox_Data);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_7->addWidget(label_4);

        comboBox_Stop = new QComboBox(groupBox);
        comboBox_Stop->setObjectName(QStringLiteral("comboBox_Stop"));

        horizontalLayout_7->addWidget(comboBox_Stop);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_8->addWidget(label_5);

        comboBox_Parity = new QComboBox(groupBox);
        comboBox_Parity->setObjectName(QStringLiteral("comboBox_Parity"));

        horizontalLayout_8->addWidget(comboBox_Parity);


        verticalLayout_2->addLayout(horizontalLayout_8);

        pushButton_Open_COM = new QPushButton(groupBox);
        pushButton_Open_COM->setObjectName(QStringLiteral("pushButton_Open_COM"));

        verticalLayout_2->addWidget(pushButton_Open_COM);

        pushButton_Monitor_COM = new QPushButton(groupBox);
        pushButton_Monitor_COM->setObjectName(QStringLiteral("pushButton_Monitor_COM"));

        verticalLayout_2->addWidget(pushButton_Monitor_COM);


        verticalLayout_3->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        groupBox_6 = new QGroupBox(groupBox_5);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        gridLayout_3 = new QGridLayout(groupBox_6);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        progressBar = new QProgressBar(groupBox_6);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        gridLayout_2->addWidget(progressBar, 3, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_8 = new QLabel(groupBox_6);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_13->addWidget(label_8);

        pushButton_Find_bin = new QPushButton(groupBox_6);
        pushButton_Find_bin->setObjectName(QStringLiteral("pushButton_Find_bin"));

        horizontalLayout_13->addWidget(pushButton_Find_bin);


        gridLayout_2->addLayout(horizontalLayout_13, 0, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        lineEdit_File_bin = new QLineEdit(groupBox_6);
        lineEdit_File_bin->setObjectName(QStringLiteral("lineEdit_File_bin"));

        horizontalLayout_12->addWidget(lineEdit_File_bin);


        gridLayout_2->addLayout(horizontalLayout_12, 1, 0, 1, 1);

        pushButton_Start_Download = new QPushButton(groupBox_6);
        pushButton_Start_Download->setObjectName(QStringLiteral("pushButton_Start_Download"));

        gridLayout_2->addWidget(pushButton_Start_Download, 2, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_6);

        groupBox_4 = new QGroupBox(groupBox_5);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setMaximumSize(QSize(200, 16777215));
        verticalLayout = new QVBoxLayout(groupBox_4);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(label_6);

        lineEdit_Drive_Addr = new QLineEdit(groupBox_4);
        lineEdit_Drive_Addr->setObjectName(QStringLiteral("lineEdit_Drive_Addr"));
        lineEdit_Drive_Addr->setMaximumSize(QSize(16777215, 16777215));
        lineEdit_Drive_Addr->setCursorPosition(1);

        horizontalLayout->addWidget(lineEdit_Drive_Addr);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_2->addWidget(label_7);

        lineEdit_Program_Addr = new QLineEdit(groupBox_4);
        lineEdit_Program_Addr->setObjectName(QStringLiteral("lineEdit_Program_Addr"));
        lineEdit_Program_Addr->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_2->addWidget(lineEdit_Program_Addr);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton_Get_Program = new QPushButton(groupBox_4);
        pushButton_Get_Program->setObjectName(QStringLiteral("pushButton_Get_Program"));

        verticalLayout->addWidget(pushButton_Get_Program);


        verticalLayout_3->addWidget(groupBox_4);


        horizontalLayout_3->addWidget(groupBox_5);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_1 = new QWidget();
        tab_1->setObjectName(QStringLiteral("tab_1"));
        gridLayout_4 = new QGridLayout(tab_1);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        textBrowser = new QTextBrowser(tab_1);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        gridLayout_4->addWidget(textBrowser, 0, 0, 1, 1);

        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        listWidget = new QListWidget(tab_2);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(80, 60, 591, 421));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_10 = new QVBoxLayout(tab_3);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        groupBox_7 = new QGroupBox(tab_3);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        verticalLayout_4 = new QVBoxLayout(groupBox_7);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_9 = new QLabel(groupBox_7);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_14->addWidget(label_9);

        lineEdit_Bit = new QLineEdit(groupBox_7);
        lineEdit_Bit->setObjectName(QStringLiteral("lineEdit_Bit"));

        horizontalLayout_14->addWidget(lineEdit_Bit);


        verticalLayout_4->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_10 = new QLabel(groupBox_7);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_15->addWidget(label_10);

        lineEdit_Int = new QLineEdit(groupBox_7);
        lineEdit_Int->setObjectName(QStringLiteral("lineEdit_Int"));

        horizontalLayout_15->addWidget(lineEdit_Int);


        verticalLayout_4->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_11 = new QLabel(groupBox_7);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_16->addWidget(label_11);

        lineEdit_Hex = new QLineEdit(groupBox_7);
        lineEdit_Hex->setObjectName(QStringLiteral("lineEdit_Hex"));

        horizontalLayout_16->addWidget(lineEdit_Hex);


        verticalLayout_4->addLayout(horizontalLayout_16);


        verticalLayout_10->addWidget(groupBox_7);

        groupBox_8 = new QGroupBox(tab_3);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        verticalLayout_7 = new QVBoxLayout(groupBox_8);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_12 = new QLabel(groupBox_8);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_17->addWidget(label_12);

        lineEdit_CRC_in = new QLineEdit(groupBox_8);
        lineEdit_CRC_in->setObjectName(QStringLiteral("lineEdit_CRC_in"));

        horizontalLayout_17->addWidget(lineEdit_CRC_in);

        lineEdit_CRC_out = new QLineEdit(groupBox_8);
        lineEdit_CRC_out->setObjectName(QStringLiteral("lineEdit_CRC_out"));
        lineEdit_CRC_out->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_17->addWidget(lineEdit_CRC_out);


        verticalLayout_7->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        label_13 = new QLabel(groupBox_8);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_18->addWidget(label_13);

        lineEdit_Sum_in = new QLineEdit(groupBox_8);
        lineEdit_Sum_in->setObjectName(QStringLiteral("lineEdit_Sum_in"));

        horizontalLayout_18->addWidget(lineEdit_Sum_in);

        lineEdit_Sum_out = new QLineEdit(groupBox_8);
        lineEdit_Sum_out->setObjectName(QStringLiteral("lineEdit_Sum_out"));
        lineEdit_Sum_out->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_18->addWidget(lineEdit_Sum_out);


        verticalLayout_7->addLayout(horizontalLayout_18);


        verticalLayout_10->addWidget(groupBox_8);

        groupBox_9 = new QGroupBox(tab_3);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        verticalLayout_8 = new QVBoxLayout(groupBox_9);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        label_14 = new QLabel(groupBox_9);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_19->addWidget(label_14);

        lineEdit_Hex_to_Asiic = new QLineEdit(groupBox_9);
        lineEdit_Hex_to_Asiic->setObjectName(QStringLiteral("lineEdit_Hex_to_Asiic"));

        horizontalLayout_19->addWidget(lineEdit_Hex_to_Asiic);


        verticalLayout_8->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        label_15 = new QLabel(groupBox_9);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_20->addWidget(label_15);

        lineEdit_Asiic_to_Hex = new QLineEdit(groupBox_9);
        lineEdit_Asiic_to_Hex->setObjectName(QStringLiteral("lineEdit_Asiic_to_Hex"));

        horizontalLayout_20->addWidget(lineEdit_Asiic_to_Hex);


        verticalLayout_8->addLayout(horizontalLayout_20);


        verticalLayout_10->addWidget(groupBox_9);

        groupBox_10 = new QGroupBox(tab_3);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        horizontalLayout_23 = new QHBoxLayout(groupBox_10);
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        label_16 = new QLabel(groupBox_10);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_21->addWidget(label_16);

        lineEdit_Hex_to_Float = new QLineEdit(groupBox_10);
        lineEdit_Hex_to_Float->setObjectName(QStringLiteral("lineEdit_Hex_to_Float"));

        horizontalLayout_21->addWidget(lineEdit_Hex_to_Float);


        verticalLayout_9->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        label_17 = new QLabel(groupBox_10);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_22->addWidget(label_17);

        lineEdit_float_to_Hex = new QLineEdit(groupBox_10);
        lineEdit_float_to_Hex->setObjectName(QStringLiteral("lineEdit_float_to_Hex"));

        horizontalLayout_22->addWidget(lineEdit_float_to_Hex);


        verticalLayout_9->addLayout(horizontalLayout_22);


        horizontalLayout_23->addLayout(verticalLayout_9);

        groupBox_11 = new QGroupBox(groupBox_10);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        verticalLayout_11 = new QVBoxLayout(groupBox_11);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        radioButton = new QRadioButton(groupBox_11);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        verticalLayout_11->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox_11);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setChecked(true);

        verticalLayout_11->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(groupBox_11);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        verticalLayout_11->addWidget(radioButton_3);


        horizontalLayout_23->addWidget(groupBox_11);


        verticalLayout_10->addWidget(groupBox_10);

        tabWidget->addTab(tab_3, QString());

        horizontalLayout_3->addWidget(tabWidget);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMaximumSize(QSize(16777215, 200));
        horizontalLayout_9 = new QHBoxLayout(groupBox_2);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        plainTextEdit_Send = new QPlainTextEdit(groupBox_2);
        plainTextEdit_Send->setObjectName(QStringLiteral("plainTextEdit_Send"));

        horizontalLayout_9->addWidget(plainTextEdit_Send);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        radioButton_Send_16 = new QRadioButton(groupBox_2);
        radioButton_Send_16->setObjectName(QStringLiteral("radioButton_Send_16"));
        radioButton_Send_16->setChecked(true);

        verticalLayout_5->addWidget(radioButton_Send_16);

        radioButton_Send_Asiic = new QRadioButton(groupBox_2);
        radioButton_Send_Asiic->setObjectName(QStringLiteral("radioButton_Send_Asiic"));

        verticalLayout_5->addWidget(radioButton_Send_Asiic);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_5);

        pushButton_Send_Clear = new QPushButton(groupBox_2);
        pushButton_Send_Clear->setObjectName(QStringLiteral("pushButton_Send_Clear"));

        verticalLayout_5->addWidget(pushButton_Send_Clear);

        pushButton_Send = new QPushButton(groupBox_2);
        pushButton_Send->setObjectName(QStringLiteral("pushButton_Send"));

        verticalLayout_5->addWidget(pushButton_Send);


        horizontalLayout_9->addLayout(verticalLayout_5);


        horizontalLayout_11->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setMaximumSize(QSize(16777215, 200));
        horizontalLayout_10 = new QHBoxLayout(groupBox_3);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        plainTextEdit_Rcv = new QPlainTextEdit(groupBox_3);
        plainTextEdit_Rcv->setObjectName(QStringLiteral("plainTextEdit_Rcv"));

        horizontalLayout_10->addWidget(plainTextEdit_Rcv);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        radioButton_Rcv_16 = new QRadioButton(groupBox_3);
        radioButton_Rcv_16->setObjectName(QStringLiteral("radioButton_Rcv_16"));
        radioButton_Rcv_16->setChecked(true);

        verticalLayout_6->addWidget(radioButton_Rcv_16);

        radioButton_Rcv_Asiic = new QRadioButton(groupBox_3);
        radioButton_Rcv_Asiic->setObjectName(QStringLiteral("radioButton_Rcv_Asiic"));

        verticalLayout_6->addWidget(radioButton_Rcv_Asiic);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);

        pushButton_Rcv_Clear = new QPushButton(groupBox_3);
        pushButton_Rcv_Clear->setObjectName(QStringLiteral("pushButton_Rcv_Clear"));

        verticalLayout_6->addWidget(pushButton_Rcv_Clear);


        horizontalLayout_10->addLayout(verticalLayout_6);


        horizontalLayout_11->addWidget(groupBox_3);


        gridLayout->addLayout(horizontalLayout_11, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1097, 26));
        menufile = new QMenu(menuBar);
        menufile->setObjectName(QStringLiteral("menufile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menufile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menufile->addAction(actionOpen);
        menufile->addAction(actionsaver);
        menufile->addAction(actionSave_as);
        menuEdit->addAction(actionASIIC);
        menuEdit->addAction(actionHex);
        menuEdit->addAction(actionZTE_V1);
        menuEdit->addAction(actionZTE_V2);
        menuEdit->addAction(actionHJ212);
        menuEdit->addAction(actionHJ212_2017);
        menuAbout->addAction(actionHelp);
        menuAbout->addAction(actionAbout);

        retranslateUi(MainWindow);

        comboBox_Baud->setCurrentIndex(3);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        actionsaver->setText(QApplication::translate("MainWindow", "Saver", Q_NULLPTR));
        actionSave_as->setText(QApplication::translate("MainWindow", "Save as", Q_NULLPTR));
        actionASIIC->setText(QApplication::translate("MainWindow", "ASIIC", Q_NULLPTR));
        actionHex->setText(QApplication::translate("MainWindow", "Hex", Q_NULLPTR));
        actionZTE_V1->setText(QApplication::translate("MainWindow", "ZTE_V1", Q_NULLPTR));
        actionZTE_V2->setText(QApplication::translate("MainWindow", "ZTE_V2", Q_NULLPTR));
        actionHJ212->setText(QApplication::translate("MainWindow", "HJ212", Q_NULLPTR));
        actionHJ212_2017->setText(QApplication::translate("MainWindow", "HJ212_2017", Q_NULLPTR));
        actionHelp->setText(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "About", Q_NULLPTR));
        groupBox_5->setTitle(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "\344\270\262\345\217\243\351\205\215\347\275\256", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\345\217\267\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207\357\274\232", Q_NULLPTR));
        comboBox_Baud->clear();
        comboBox_Baud->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1200", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2400", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4800", Q_NULLPTR)
         << QApplication::translate("MainWindow", "9600", Q_NULLPTR)
         << QApplication::translate("MainWindow", "19200", Q_NULLPTR)
         << QApplication::translate("MainWindow", "38400", Q_NULLPTR)
         << QApplication::translate("MainWindow", "57600", Q_NULLPTR)
         << QApplication::translate("MainWindow", "115200", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215\357\274\232", Q_NULLPTR));
        comboBox_Data->clear();
        comboBox_Data->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "8", Q_NULLPTR)
         << QApplication::translate("MainWindow", "7", Q_NULLPTR)
         << QApplication::translate("MainWindow", "6", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215\357\274\232", Q_NULLPTR));
        comboBox_Stop->clear();
        comboBox_Stop->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1.5", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215\357\274\232", Q_NULLPTR));
        comboBox_Parity->clear();
        comboBox_Parity->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "NONE", Q_NULLPTR)
         << QApplication::translate("MainWindow", "EVEN", Q_NULLPTR)
         << QApplication::translate("MainWindow", "ODD", Q_NULLPTR)
        );
        pushButton_Open_COM->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
        pushButton_Monitor_COM->setText(QApplication::translate("MainWindow", "\347\233\221\346\216\247\344\270\262\345\217\243", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "\350\256\276\345\244\207\345\215\207\347\272\247", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\345\215\207\347\272\247\345\214\205\357\274\232", Q_NULLPTR));
        pushButton_Find_bin->setText(QApplication::translate("MainWindow", "\346\265\217\350\247\210", Q_NULLPTR));
        pushButton_Start_Download->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\345\215\207\347\272\247", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\350\256\276\345\244\207\350\277\236\346\216\245", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\350\256\276\345\244\207\345\234\260\345\235\200\357\274\232", Q_NULLPTR));
        lineEdit_Drive_Addr->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\347\250\213\345\272\217\345\234\260\345\235\200\357\274\232", Q_NULLPTR));
        pushButton_Get_Program->setText(QApplication::translate("MainWindow", "\350\216\267\345\217\226\347\250\213\345\272\217\345\234\260\345\235\200", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("MainWindow", "\345\216\206\345\217\262\350\256\260\345\275\225", Q_NULLPTR));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "\346\270\205\346\264\227", Q_NULLPTR));
        listWidget->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\345\270\270\347\224\250\345\215\217\350\256\256", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "\350\277\233\345\210\266\350\275\254\346\215\242", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "\344\272\214 \350\277\233 \345\210\266\357\274\232", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "\345\215\201 \350\277\233 \345\210\266\357\274\232", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "\345\215\201\345\205\255\350\277\233\345\210\266\357\274\232", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "\346\240\241\351\252\214", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "CRC\350\256\241\347\256\227\357\274\232", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", " \347\264\257\345\212\240\345\222\214\357\274\232", Q_NULLPTR));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "\345\255\227\347\254\246\350\275\254\346\215\242", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "  HEX\357\274\232", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "ASIIC\357\274\232", Q_NULLPTR));
        groupBox_10->setTitle(QApplication::translate("MainWindow", "\346\265\256\347\202\271\346\225\260\350\275\254\346\215\242", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "   HEX\357\274\232", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "\346\265\256\347\202\271\346\225\260\357\274\232", Q_NULLPTR));
        groupBox_11->setTitle(QApplication::translate("MainWindow", "\350\247\243\347\240\201\351\241\272\345\272\217", Q_NULLPTR));
        radioButton->setText(QApplication::translate("MainWindow", "0123", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("MainWindow", "1032", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("MainWindow", "3210", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\345\270\270\347\224\250\345\267\245\345\205\267", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\345\217\221\351\200\201", Q_NULLPTR));
        radioButton_Send_16->setText(QApplication::translate("MainWindow", "\345\215\201\345\205\255\350\277\233\345\210\266", Q_NULLPTR));
        radioButton_Send_Asiic->setText(QApplication::translate("MainWindow", "\346\226\207\346\234\254\346\250\241\345\274\217", Q_NULLPTR));
        pushButton_Send_Clear->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244", Q_NULLPTR));
        pushButton_Send->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\346\216\245\346\224\266", Q_NULLPTR));
        radioButton_Rcv_16->setText(QApplication::translate("MainWindow", "\345\215\201\345\205\255\350\277\233\345\210\266", Q_NULLPTR));
        radioButton_Rcv_Asiic->setText(QApplication::translate("MainWindow", "\346\226\207\346\234\254\346\250\241\345\274\217", Q_NULLPTR));
        pushButton_Rcv_Clear->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244", Q_NULLPTR));
        menufile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
