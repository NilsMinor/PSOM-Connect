/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionAboutQt;
    QAction *actionConnect;
    QAction *actionDisconnect;
    QAction *actionConfigure;
    QAction *actionClear;
    QAction *actionQuit;
    QAction *actionStart;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabMenu;
    QGridLayout *gridLayout_5;
    QGridLayout *testLayout1;
    QPushButton *pushButtonPanel;
    QPushButton *pushButtonInformation;
    QPushButton *pushButtonHarmonics;
    QPushButton *pushButtonCalibration;
    QPushButton *pushButtonEVSE;
    QPushButton *pushButtonLogging;
    QPushButton *pushButtonQWT500;
    QPushButton *pushButtonScope;
    QPushButton *pushButtonExit;
    QWidget *tabPanel;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBoxL1;
    QGridLayout *gridLayout_2;
    QHBoxLayout *layoutPhaseL1;
    QPushButton *pBClearEnergyL1;
    QGroupBox *groupBoxL2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *layoutPhaseL2;
    QPushButton *pBClearEnergyL2;
    QGroupBox *groupBoxL3;
    QGridLayout *gridLayout_6;
    QVBoxLayout *layoutPhaseL3;
    QPushButton *pBClearEnergyL3;
    QGroupBox *groupBoxLT;
    QGridLayout *gridLayout_7;
    QVBoxLayout *layoutPhaseLT;
    QPushButton *pBClearEnergyLT;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QHBoxLayout *layoutCommonPanelData;
    QGridLayout *gridLayout;
    QPushButton *pushButtonStartMeasurment;
    QPushButton *pushButtonStopMeasurment;
    QComboBox *comboBoxErrorStyle;
    QPushButton *pushButtonPanelHome;
    QComboBox *comboBoxCirculationFreq;
    QWidget *tabTerminal;
    QSpacerItem *horizontalSpacer;
    QWidget *tabScope;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_9;
    QLabel *label;
    QPushButton *pushButtonOsciStart;
    QPushButton *pushButtonOsciStop;
    QPushButton *pushButtonOsciReset;
    QPushButton *pushButtonScopeHome;
    QCheckBox *checkBoxOsciEnableL3;
    QSpacerItem *verticalSpacer;
    QCheckBox *checkBoxOsciEnableL1;
    QCheckBox *checkBoxOsciEnableL2;
    QCheckBox *checkBoxOsciEnableLT;
    QComboBox *comboBoxOsci;
    QVBoxLayout *layoutOscilloscope;
    QWidget *tabHarmonics;
    QGridLayout *gridLayout_10;
    QGroupBox *groupBoxHarmonicsData;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *harmonicsDataLayout;
    QGridLayout *gridLayout_14;
    QLabel *label_70;
    QComboBox *comboBox_5;
    QLabel *label_69;
    QComboBox *cBHarmonicsAxisStyle;
    QLabel *label_5;
    QComboBox *cBHarmonicsCount;
    QPushButton *pBSetHarmonicsCount;
    QLabel *label_3;
    QComboBox *cBHarmonicsType;
    QPushButton *pBTriggerHarmonics;
    QPushButton *pBStartHarmonics;
    QLabel *label_71;
    QCheckBox *checkBoxDisplayL1;
    QCheckBox *checkBoxDisplayL2;
    QCheckBox *checkBoxDisplayL3;
    QPushButton *pushButtonHarmonicsHome;
    QVBoxLayout *harmonicsGraphLayout;
    QWidget *tabLogging;
    QFormLayout *formLayout;
    QGridLayout *gridLayout_11;
    QLabel *label_13;
    QLabel *labelFileSize;
    QPushButton *pushButtonLoggingHome;
    QLabel *label_12;
    QLineEdit *lineEditLogFileName;
    QLabel *labelLoggingLine;
    QComboBox *comboBoxLoggingIntervall;
    QPushButton *pushButtonStartLogging;
    QPushButton *pushButtonSingleLog;
    QFrame *line;
    QGridLayout *gridLayout_18;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_4;
    QWidget *tabWT500;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *wt500Layout;
    QPushButton *pushButtonQWT500Home;
    QWidget *tabEVSE;
    QGridLayout *gridLayout_13;
    QWidget *evseImageWidget;
    QLCDNumber *lcdNumber;
    QPushButton *pushButtonStartCharging;
    QPushButton *pushButtonStopCharging;
    QPushButton *pushButtonEVSEHome;
    QWidget *tabCalibration;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_17;
    QPushButton *pushButtonLoadCalibration;
    QPushButton *pushButtonCalibrationHome;
    QGridLayout *gridLayout_15;
    QComboBox *comboBoxCalPhase;
    QLabel *label_6;
    QComboBox *comboBoxCalType;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButtonCalibrateOffset;
    QPushButton *pushButtonCalibrateGain;
    QGridLayout *gridLayout_16;
    QLabel *labelCurrentCalUnit;
    QLabel *labelVoltageCalUnit;
    QLabel *label_10;
    QComboBox *comboBoxVoltageCalValue;
    QComboBox *comboBoxCurrentCalValue;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_12;
    QTableWidget *tableWidget;
    QMenuBar *menuBar;
    QMenu *menuCalls;
    QMenu *menuTools;
    QMenu *menuHelp;
    QMenu *menuTest;
    QMenu *menuSystem;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setWindowOpacity(1);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QStringLiteral("actionAboutQt"));
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName(QStringLiteral("actionConnect"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/connect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConnect->setIcon(icon);
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName(QStringLiteral("actionDisconnect"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/disconnect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisconnect->setIcon(icon1);
        actionConfigure = new QAction(MainWindow);
        actionConfigure->setObjectName(QStringLiteral("actionConfigure"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConfigure->setIcon(icon2);
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QStringLiteral("actionClear"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear->setIcon(icon3);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/application-exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon4);
        actionStart = new QAction(MainWindow);
        actionStart->setObjectName(QStringLiteral("actionStart"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStart->setIcon(icon5);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMinimumSize(QSize(100, 100));
        QFont font;
        font.setPointSize(10);
        tabWidget->setFont(font);
        tabWidget->setIconSize(QSize(16, 16));
        tabMenu = new QWidget();
        tabMenu->setObjectName(QStringLiteral("tabMenu"));
        gridLayout_5 = new QGridLayout(tabMenu);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        testLayout1 = new QGridLayout();
        testLayout1->setSpacing(6);
        testLayout1->setObjectName(QStringLiteral("testLayout1"));
        testLayout1->setSizeConstraint(QLayout::SetMaximumSize);
        pushButtonPanel = new QPushButton(tabMenu);
        pushButtonPanel->setObjectName(QStringLiteral("pushButtonPanel"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonPanel->sizePolicy().hasHeightForWidth());
        pushButtonPanel->setSizePolicy(sizePolicy1);
        pushButtonPanel->setAutoFillBackground(false);
        pushButtonPanel->setInputMethodHints(Qt::ImhNone);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/pie-chart.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPanel->setIcon(icon6);
        pushButtonPanel->setIconSize(QSize(100, 100));
        pushButtonPanel->setAutoDefault(false);
        pushButtonPanel->setFlat(true);

        testLayout1->addWidget(pushButtonPanel, 0, 0, 1, 1);

        pushButtonInformation = new QPushButton(tabMenu);
        pushButtonInformation->setObjectName(QStringLiteral("pushButtonInformation"));
        sizePolicy1.setHeightForWidth(pushButtonInformation->sizePolicy().hasHeightForWidth());
        pushButtonInformation->setSizePolicy(sizePolicy1);
        pushButtonInformation->setAutoFillBackground(false);
        pushButtonInformation->setInputMethodHints(Qt::ImhNone);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/information.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonInformation->setIcon(icon7);
        pushButtonInformation->setIconSize(QSize(100, 100));
        pushButtonInformation->setAutoDefault(false);
        pushButtonInformation->setFlat(true);

        testLayout1->addWidget(pushButtonInformation, 3, 1, 1, 1);

        pushButtonHarmonics = new QPushButton(tabMenu);
        pushButtonHarmonics->setObjectName(QStringLiteral("pushButtonHarmonics"));
        sizePolicy1.setHeightForWidth(pushButtonHarmonics->sizePolicy().hasHeightForWidth());
        pushButtonHarmonics->setSizePolicy(sizePolicy1);
        pushButtonHarmonics->setAutoFillBackground(false);
        pushButtonHarmonics->setInputMethodHints(Qt::ImhNone);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/bar-chart.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonHarmonics->setIcon(icon8);
        pushButtonHarmonics->setIconSize(QSize(100, 100));
        pushButtonHarmonics->setAutoDefault(false);
        pushButtonHarmonics->setFlat(true);

        testLayout1->addWidget(pushButtonHarmonics, 0, 2, 1, 1);

        pushButtonCalibration = new QPushButton(tabMenu);
        pushButtonCalibration->setObjectName(QStringLiteral("pushButtonCalibration"));
        sizePolicy1.setHeightForWidth(pushButtonCalibration->sizePolicy().hasHeightForWidth());
        pushButtonCalibration->setSizePolicy(sizePolicy1);
        pushButtonCalibration->setAutoFillBackground(false);
        pushButtonCalibration->setInputMethodHints(Qt::ImhNone);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/calibre.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonCalibration->setIcon(icon9);
        pushButtonCalibration->setIconSize(QSize(100, 100));
        pushButtonCalibration->setCheckable(false);
        pushButtonCalibration->setAutoDefault(false);
        pushButtonCalibration->setFlat(true);

        testLayout1->addWidget(pushButtonCalibration, 2, 2, 1, 1);

        pushButtonEVSE = new QPushButton(tabMenu);
        pushButtonEVSE->setObjectName(QStringLiteral("pushButtonEVSE"));
        sizePolicy1.setHeightForWidth(pushButtonEVSE->sizePolicy().hasHeightForWidth());
        pushButtonEVSE->setSizePolicy(sizePolicy1);
        pushButtonEVSE->setAutoFillBackground(false);
        pushButtonEVSE->setInputMethodHints(Qt::ImhNone);
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/electric-car.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonEVSE->setIcon(icon10);
        pushButtonEVSE->setIconSize(QSize(100, 100));
        pushButtonEVSE->setAutoDefault(false);
        pushButtonEVSE->setFlat(true);

        testLayout1->addWidget(pushButtonEVSE, 3, 0, 1, 1);

        pushButtonLogging = new QPushButton(tabMenu);
        pushButtonLogging->setObjectName(QStringLiteral("pushButtonLogging"));
        sizePolicy1.setHeightForWidth(pushButtonLogging->sizePolicy().hasHeightForWidth());
        pushButtonLogging->setSizePolicy(sizePolicy1);
        pushButtonLogging->setAutoFillBackground(false);
        pushButtonLogging->setInputMethodHints(Qt::ImhNone);
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/diskette.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonLogging->setIcon(icon11);
        pushButtonLogging->setIconSize(QSize(100, 100));
        pushButtonLogging->setAutoDefault(false);
        pushButtonLogging->setFlat(true);

        testLayout1->addWidget(pushButtonLogging, 2, 0, 1, 1);

        pushButtonQWT500 = new QPushButton(tabMenu);
        pushButtonQWT500->setObjectName(QStringLiteral("pushButtonQWT500"));
        sizePolicy1.setHeightForWidth(pushButtonQWT500->sizePolicy().hasHeightForWidth());
        pushButtonQWT500->setSizePolicy(sizePolicy1);
        pushButtonQWT500->setAutoFillBackground(false);
        pushButtonQWT500->setInputMethodHints(Qt::ImhNone);
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/images/wt500.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonQWT500->setIcon(icon12);
        pushButtonQWT500->setIconSize(QSize(100, 100));
        pushButtonQWT500->setAutoDefault(false);
        pushButtonQWT500->setFlat(true);

        testLayout1->addWidget(pushButtonQWT500, 2, 1, 1, 1);

        pushButtonScope = new QPushButton(tabMenu);
        pushButtonScope->setObjectName(QStringLiteral("pushButtonScope"));
        sizePolicy1.setHeightForWidth(pushButtonScope->sizePolicy().hasHeightForWidth());
        pushButtonScope->setSizePolicy(sizePolicy1);
        pushButtonScope->setAutoFillBackground(false);
        pushButtonScope->setInputMethodHints(Qt::ImhNone);
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/images/analytics.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonScope->setIcon(icon13);
        pushButtonScope->setIconSize(QSize(100, 100));
        pushButtonScope->setAutoDefault(false);
        pushButtonScope->setFlat(true);

        testLayout1->addWidget(pushButtonScope, 0, 1, 1, 1);

        pushButtonExit = new QPushButton(tabMenu);
        pushButtonExit->setObjectName(QStringLiteral("pushButtonExit"));
        sizePolicy.setHeightForWidth(pushButtonExit->sizePolicy().hasHeightForWidth());
        pushButtonExit->setSizePolicy(sizePolicy);
        pushButtonExit->setAutoFillBackground(false);
        pushButtonExit->setInputMethodHints(Qt::ImhNone);
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/images/exit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonExit->setIcon(icon14);
        pushButtonExit->setIconSize(QSize(100, 100));
        pushButtonExit->setAutoDefault(false);
        pushButtonExit->setFlat(true);

        testLayout1->addWidget(pushButtonExit, 3, 2, 1, 1);


        gridLayout_5->addLayout(testLayout1, 0, 0, 1, 1);

        tabWidget->addTab(tabMenu, QString());
        tabPanel = new QWidget();
        tabPanel->setObjectName(QStringLiteral("tabPanel"));
        tabPanel->setFont(font);
        verticalLayout_3 = new QVBoxLayout(tabPanel);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        groupBoxL1 = new QGroupBox(tabPanel);
        groupBoxL1->setObjectName(QStringLiteral("groupBoxL1"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBoxL1->sizePolicy().hasHeightForWidth());
        groupBoxL1->setSizePolicy(sizePolicy2);
        gridLayout_2 = new QGridLayout(groupBoxL1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(9, -1, 9, -1);
        layoutPhaseL1 = new QHBoxLayout();
        layoutPhaseL1->setSpacing(6);
        layoutPhaseL1->setObjectName(QStringLiteral("layoutPhaseL1"));
        layoutPhaseL1->setSizeConstraint(QLayout::SetMinimumSize);

        gridLayout_2->addLayout(layoutPhaseL1, 0, 0, 1, 1);

        pBClearEnergyL1 = new QPushButton(groupBoxL1);
        pBClearEnergyL1->setObjectName(QStringLiteral("pBClearEnergyL1"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pBClearEnergyL1->sizePolicy().hasHeightForWidth());
        pBClearEnergyL1->setSizePolicy(sizePolicy3);
        pBClearEnergyL1->setFont(font);

        gridLayout_2->addWidget(pBClearEnergyL1, 1, 0, 1, 1);


        horizontalLayout_2->addWidget(groupBoxL1);

        groupBoxL2 = new QGroupBox(tabPanel);
        groupBoxL2->setObjectName(QStringLiteral("groupBoxL2"));
        verticalLayout_4 = new QVBoxLayout(groupBoxL2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(9, -1, 9, -1);
        layoutPhaseL2 = new QHBoxLayout();
        layoutPhaseL2->setSpacing(6);
        layoutPhaseL2->setObjectName(QStringLiteral("layoutPhaseL2"));
        layoutPhaseL2->setSizeConstraint(QLayout::SetMinimumSize);

        verticalLayout_4->addLayout(layoutPhaseL2);

        pBClearEnergyL2 = new QPushButton(groupBoxL2);
        pBClearEnergyL2->setObjectName(QStringLiteral("pBClearEnergyL2"));
        pBClearEnergyL2->setFont(font);

        verticalLayout_4->addWidget(pBClearEnergyL2);


        horizontalLayout_2->addWidget(groupBoxL2);

        groupBoxL3 = new QGroupBox(tabPanel);
        groupBoxL3->setObjectName(QStringLiteral("groupBoxL3"));
        gridLayout_6 = new QGridLayout(groupBoxL3);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(9, -1, 9, -1);
        layoutPhaseL3 = new QVBoxLayout();
        layoutPhaseL3->setSpacing(6);
        layoutPhaseL3->setObjectName(QStringLiteral("layoutPhaseL3"));
        layoutPhaseL3->setSizeConstraint(QLayout::SetMinimumSize);

        gridLayout_6->addLayout(layoutPhaseL3, 0, 0, 1, 1);

        pBClearEnergyL3 = new QPushButton(groupBoxL3);
        pBClearEnergyL3->setObjectName(QStringLiteral("pBClearEnergyL3"));
        pBClearEnergyL3->setFont(font);

        gridLayout_6->addWidget(pBClearEnergyL3, 1, 0, 1, 1);


        horizontalLayout_2->addWidget(groupBoxL3);

        groupBoxLT = new QGroupBox(tabPanel);
        groupBoxLT->setObjectName(QStringLiteral("groupBoxLT"));
        gridLayout_7 = new QGridLayout(groupBoxLT);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(9, -1, 9, -1);
        layoutPhaseLT = new QVBoxLayout();
        layoutPhaseLT->setSpacing(6);
        layoutPhaseLT->setObjectName(QStringLiteral("layoutPhaseLT"));
        layoutPhaseLT->setSizeConstraint(QLayout::SetMinimumSize);

        gridLayout_7->addLayout(layoutPhaseLT, 0, 0, 1, 1);

        pBClearEnergyLT = new QPushButton(groupBoxLT);
        pBClearEnergyLT->setObjectName(QStringLiteral("pBClearEnergyLT"));
        pBClearEnergyLT->setFont(font);

        gridLayout_7->addWidget(pBClearEnergyLT, 1, 0, 1, 1);


        horizontalLayout_2->addWidget(groupBoxLT);


        verticalLayout_3->addLayout(horizontalLayout_2);

        groupBox = new QGroupBox(tabPanel);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(0, 100));
        QFont font1;
        font1.setPointSize(8);
        groupBox->setFont(font1);
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        layoutCommonPanelData = new QHBoxLayout();
        layoutCommonPanelData->setSpacing(6);
        layoutCommonPanelData->setObjectName(QStringLiteral("layoutCommonPanelData"));
        layoutCommonPanelData->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        pushButtonStartMeasurment = new QPushButton(groupBox);
        pushButtonStartMeasurment->setObjectName(QStringLiteral("pushButtonStartMeasurment"));
        sizePolicy1.setHeightForWidth(pushButtonStartMeasurment->sizePolicy().hasHeightForWidth());
        pushButtonStartMeasurment->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(12);
        pushButtonStartMeasurment->setFont(font2);

        gridLayout->addWidget(pushButtonStartMeasurment, 0, 0, 1, 1);

        pushButtonStopMeasurment = new QPushButton(groupBox);
        pushButtonStopMeasurment->setObjectName(QStringLiteral("pushButtonStopMeasurment"));
        sizePolicy1.setHeightForWidth(pushButtonStopMeasurment->sizePolicy().hasHeightForWidth());
        pushButtonStopMeasurment->setSizePolicy(sizePolicy1);
        pushButtonStopMeasurment->setFont(font2);

        gridLayout->addWidget(pushButtonStopMeasurment, 0, 1, 1, 1);

        comboBoxErrorStyle = new QComboBox(groupBox);
        comboBoxErrorStyle->setObjectName(QStringLiteral("comboBoxErrorStyle"));
        sizePolicy2.setHeightForWidth(comboBoxErrorStyle->sizePolicy().hasHeightForWidth());
        comboBoxErrorStyle->setSizePolicy(sizePolicy2);
        comboBoxErrorStyle->setFont(font2);

        gridLayout->addWidget(comboBoxErrorStyle, 1, 1, 1, 1);

        pushButtonPanelHome = new QPushButton(groupBox);
        pushButtonPanelHome->setObjectName(QStringLiteral("pushButtonPanelHome"));
        sizePolicy3.setHeightForWidth(pushButtonPanelHome->sizePolicy().hasHeightForWidth());
        pushButtonPanelHome->setSizePolicy(sizePolicy3);
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/images/home.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPanelHome->setIcon(icon15);
        pushButtonPanelHome->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButtonPanelHome, 2, 1, 1, 1);

        comboBoxCirculationFreq = new QComboBox(groupBox);
        comboBoxCirculationFreq->setObjectName(QStringLiteral("comboBoxCirculationFreq"));
        sizePolicy2.setHeightForWidth(comboBoxCirculationFreq->sizePolicy().hasHeightForWidth());
        comboBoxCirculationFreq->setSizePolicy(sizePolicy2);
        comboBoxCirculationFreq->setFont(font2);

        gridLayout->addWidget(comboBoxCirculationFreq, 1, 0, 1, 1);

        tabTerminal = new QWidget(groupBox);
        tabTerminal->setObjectName(QStringLiteral("tabTerminal"));

        gridLayout->addWidget(tabTerminal, 2, 0, 1, 1);


        layoutCommonPanelData->addLayout(gridLayout);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        layoutCommonPanelData->addItem(horizontalSpacer);


        gridLayout_4->addLayout(layoutCommonPanelData, 2, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox);

        tabWidget->addTab(tabPanel, QString());
        tabScope = new QWidget();
        tabScope->setObjectName(QStringLiteral("tabScope"));
        gridLayout_3 = new QGridLayout(tabScope);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox_3 = new QGroupBox(tabScope);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy4);
        groupBox_3->setMinimumSize(QSize(150, 0));
        gridLayout_9 = new QGridLayout(groupBox_3);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFont(font);

        gridLayout_9->addWidget(label, 1, 0, 1, 1);

        pushButtonOsciStart = new QPushButton(groupBox_3);
        pushButtonOsciStart->setObjectName(QStringLiteral("pushButtonOsciStart"));
        pushButtonOsciStart->setFont(font);

        gridLayout_9->addWidget(pushButtonOsciStart, 8, 0, 1, 2);

        pushButtonOsciStop = new QPushButton(groupBox_3);
        pushButtonOsciStop->setObjectName(QStringLiteral("pushButtonOsciStop"));
        pushButtonOsciStop->setEnabled(false);
        pushButtonOsciStop->setFont(font);

        gridLayout_9->addWidget(pushButtonOsciStop, 9, 0, 1, 2);

        pushButtonOsciReset = new QPushButton(groupBox_3);
        pushButtonOsciReset->setObjectName(QStringLiteral("pushButtonOsciReset"));
        pushButtonOsciReset->setFont(font);

        gridLayout_9->addWidget(pushButtonOsciReset, 10, 0, 1, 2);

        pushButtonScopeHome = new QPushButton(groupBox_3);
        pushButtonScopeHome->setObjectName(QStringLiteral("pushButtonScopeHome"));
        pushButtonScopeHome->setMinimumSize(QSize(0, 0));
        pushButtonScopeHome->setIcon(icon15);
        pushButtonScopeHome->setIconSize(QSize(32, 32));

        gridLayout_9->addWidget(pushButtonScopeHome, 11, 0, 1, 2);

        checkBoxOsciEnableL3 = new QCheckBox(groupBox_3);
        checkBoxOsciEnableL3->setObjectName(QStringLiteral("checkBoxOsciEnableL3"));
        QFont font3;
        font3.setPointSize(18);
        checkBoxOsciEnableL3->setFont(font3);
        checkBoxOsciEnableL3->setTristate(false);

        gridLayout_9->addWidget(checkBoxOsciEnableL3, 5, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer, 7, 0, 1, 1);

        checkBoxOsciEnableL1 = new QCheckBox(groupBox_3);
        checkBoxOsciEnableL1->setObjectName(QStringLiteral("checkBoxOsciEnableL1"));
        checkBoxOsciEnableL1->setFont(font3);
        checkBoxOsciEnableL1->setChecked(true);
        checkBoxOsciEnableL1->setTristate(false);

        gridLayout_9->addWidget(checkBoxOsciEnableL1, 3, 0, 1, 1);

        checkBoxOsciEnableL2 = new QCheckBox(groupBox_3);
        checkBoxOsciEnableL2->setObjectName(QStringLiteral("checkBoxOsciEnableL2"));
        checkBoxOsciEnableL2->setFont(font3);
        checkBoxOsciEnableL2->setTristate(false);

        gridLayout_9->addWidget(checkBoxOsciEnableL2, 3, 1, 1, 1);

        checkBoxOsciEnableLT = new QCheckBox(groupBox_3);
        checkBoxOsciEnableLT->setObjectName(QStringLiteral("checkBoxOsciEnableLT"));
        checkBoxOsciEnableLT->setFont(font3);
        checkBoxOsciEnableLT->setTristate(false);

        gridLayout_9->addWidget(checkBoxOsciEnableLT, 5, 1, 1, 1);

        comboBoxOsci = new QComboBox(groupBox_3);
        comboBoxOsci->setObjectName(QStringLiteral("comboBoxOsci"));
        comboBoxOsci->setFont(font);

        gridLayout_9->addWidget(comboBoxOsci, 2, 0, 1, 2);


        gridLayout_3->addWidget(groupBox_3, 0, 0, 1, 1);

        layoutOscilloscope = new QVBoxLayout();
        layoutOscilloscope->setSpacing(6);
        layoutOscilloscope->setObjectName(QStringLiteral("layoutOscilloscope"));

        gridLayout_3->addLayout(layoutOscilloscope, 0, 1, 1, 1);

        tabWidget->addTab(tabScope, QString());
        tabHarmonics = new QWidget();
        tabHarmonics->setObjectName(QStringLiteral("tabHarmonics"));
        gridLayout_10 = new QGridLayout(tabHarmonics);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        groupBoxHarmonicsData = new QGroupBox(tabHarmonics);
        groupBoxHarmonicsData->setObjectName(QStringLiteral("groupBoxHarmonicsData"));
        sizePolicy4.setHeightForWidth(groupBoxHarmonicsData->sizePolicy().hasHeightForWidth());
        groupBoxHarmonicsData->setSizePolicy(sizePolicy4);
        groupBoxHarmonicsData->setMinimumSize(QSize(40, 100));
        verticalLayout_2 = new QVBoxLayout(groupBoxHarmonicsData);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        harmonicsDataLayout = new QGridLayout();
        harmonicsDataLayout->setSpacing(6);
        harmonicsDataLayout->setObjectName(QStringLiteral("harmonicsDataLayout"));
        harmonicsDataLayout->setSizeConstraint(QLayout::SetFixedSize);

        verticalLayout_2->addLayout(harmonicsDataLayout);

        gridLayout_14 = new QGridLayout();
        gridLayout_14->setSpacing(6);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        label_70 = new QLabel(groupBoxHarmonicsData);
        label_70->setObjectName(QStringLiteral("label_70"));

        gridLayout_14->addWidget(label_70, 0, 0, 1, 1);

        comboBox_5 = new QComboBox(groupBoxHarmonicsData);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));

        gridLayout_14->addWidget(comboBox_5, 0, 1, 1, 4);

        label_69 = new QLabel(groupBoxHarmonicsData);
        label_69->setObjectName(QStringLiteral("label_69"));

        gridLayout_14->addWidget(label_69, 1, 0, 1, 1);

        cBHarmonicsAxisStyle = new QComboBox(groupBoxHarmonicsData);
        cBHarmonicsAxisStyle->setObjectName(QStringLiteral("cBHarmonicsAxisStyle"));

        gridLayout_14->addWidget(cBHarmonicsAxisStyle, 1, 1, 1, 4);

        label_5 = new QLabel(groupBoxHarmonicsData);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_14->addWidget(label_5, 2, 0, 1, 1);

        cBHarmonicsCount = new QComboBox(groupBoxHarmonicsData);
        cBHarmonicsCount->setObjectName(QStringLiteral("cBHarmonicsCount"));

        gridLayout_14->addWidget(cBHarmonicsCount, 2, 1, 1, 2);

        pBSetHarmonicsCount = new QPushButton(groupBoxHarmonicsData);
        pBSetHarmonicsCount->setObjectName(QStringLiteral("pBSetHarmonicsCount"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(pBSetHarmonicsCount->sizePolicy().hasHeightForWidth());
        pBSetHarmonicsCount->setSizePolicy(sizePolicy5);

        gridLayout_14->addWidget(pBSetHarmonicsCount, 2, 3, 1, 2);

        label_3 = new QLabel(groupBoxHarmonicsData);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_14->addWidget(label_3, 3, 0, 1, 1);

        cBHarmonicsType = new QComboBox(groupBoxHarmonicsData);
        cBHarmonicsType->setObjectName(QStringLiteral("cBHarmonicsType"));

        gridLayout_14->addWidget(cBHarmonicsType, 3, 1, 1, 4);

        pBTriggerHarmonics = new QPushButton(groupBoxHarmonicsData);
        pBTriggerHarmonics->setObjectName(QStringLiteral("pBTriggerHarmonics"));
        sizePolicy2.setHeightForWidth(pBTriggerHarmonics->sizePolicy().hasHeightForWidth());
        pBTriggerHarmonics->setSizePolicy(sizePolicy2);

        gridLayout_14->addWidget(pBTriggerHarmonics, 4, 0, 1, 5);

        pBStartHarmonics = new QPushButton(groupBoxHarmonicsData);
        pBStartHarmonics->setObjectName(QStringLiteral("pBStartHarmonics"));
        sizePolicy3.setHeightForWidth(pBStartHarmonics->sizePolicy().hasHeightForWidth());
        pBStartHarmonics->setSizePolicy(sizePolicy3);

        gridLayout_14->addWidget(pBStartHarmonics, 5, 0, 1, 5);

        label_71 = new QLabel(groupBoxHarmonicsData);
        label_71->setObjectName(QStringLiteral("label_71"));

        gridLayout_14->addWidget(label_71, 6, 0, 1, 1);

        checkBoxDisplayL1 = new QCheckBox(groupBoxHarmonicsData);
        checkBoxDisplayL1->setObjectName(QStringLiteral("checkBoxDisplayL1"));

        gridLayout_14->addWidget(checkBoxDisplayL1, 6, 1, 1, 1);

        checkBoxDisplayL2 = new QCheckBox(groupBoxHarmonicsData);
        checkBoxDisplayL2->setObjectName(QStringLiteral("checkBoxDisplayL2"));

        gridLayout_14->addWidget(checkBoxDisplayL2, 6, 2, 1, 2);

        checkBoxDisplayL3 = new QCheckBox(groupBoxHarmonicsData);
        checkBoxDisplayL3->setObjectName(QStringLiteral("checkBoxDisplayL3"));

        gridLayout_14->addWidget(checkBoxDisplayL3, 6, 4, 1, 1);

        pushButtonHarmonicsHome = new QPushButton(groupBoxHarmonicsData);
        pushButtonHarmonicsHome->setObjectName(QStringLiteral("pushButtonHarmonicsHome"));
        pushButtonHarmonicsHome->setIcon(icon15);

        gridLayout_14->addWidget(pushButtonHarmonicsHome, 7, 0, 1, 5);


        verticalLayout_2->addLayout(gridLayout_14);


        gridLayout_10->addWidget(groupBoxHarmonicsData, 0, 0, 1, 1);

        harmonicsGraphLayout = new QVBoxLayout();
        harmonicsGraphLayout->setSpacing(6);
        harmonicsGraphLayout->setObjectName(QStringLiteral("harmonicsGraphLayout"));
        harmonicsGraphLayout->setSizeConstraint(QLayout::SetDefaultConstraint);

        gridLayout_10->addLayout(harmonicsGraphLayout, 0, 1, 2, 1);

        tabWidget->addTab(tabHarmonics, QString());
        tabLogging = new QWidget();
        tabLogging->setObjectName(QStringLiteral("tabLogging"));
        formLayout = new QFormLayout(tabLogging);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(6);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setSizeConstraint(QLayout::SetMinimumSize);
        label_13 = new QLabel(tabLogging);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font2);

        gridLayout_11->addWidget(label_13, 2, 0, 1, 1);

        labelFileSize = new QLabel(tabLogging);
        labelFileSize->setObjectName(QStringLiteral("labelFileSize"));
        labelFileSize->setFont(font2);

        gridLayout_11->addWidget(labelFileSize, 2, 1, 1, 1);

        pushButtonLoggingHome = new QPushButton(tabLogging);
        pushButtonLoggingHome->setObjectName(QStringLiteral("pushButtonLoggingHome"));
        sizePolicy.setHeightForWidth(pushButtonLoggingHome->sizePolicy().hasHeightForWidth());
        pushButtonLoggingHome->setSizePolicy(sizePolicy);
        pushButtonLoggingHome->setMinimumSize(QSize(150, 0));
        pushButtonLoggingHome->setIcon(icon15);
        pushButtonLoggingHome->setIconSize(QSize(32, 32));

        gridLayout_11->addWidget(pushButtonLoggingHome, 0, 3, 3, 1);

        label_12 = new QLabel(tabLogging);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font2);

        gridLayout_11->addWidget(label_12, 1, 0, 1, 1);

        lineEditLogFileName = new QLineEdit(tabLogging);
        lineEditLogFileName->setObjectName(QStringLiteral("lineEditLogFileName"));
        lineEditLogFileName->setFont(font2);

        gridLayout_11->addWidget(lineEditLogFileName, 0, 1, 1, 1);

        labelLoggingLine = new QLabel(tabLogging);
        labelLoggingLine->setObjectName(QStringLiteral("labelLoggingLine"));
        labelLoggingLine->setFont(font2);

        gridLayout_11->addWidget(labelLoggingLine, 1, 1, 1, 1);

        comboBoxLoggingIntervall = new QComboBox(tabLogging);
        comboBoxLoggingIntervall->setObjectName(QStringLiteral("comboBoxLoggingIntervall"));
        comboBoxLoggingIntervall->setFont(font2);

        gridLayout_11->addWidget(comboBoxLoggingIntervall, 0, 0, 1, 1);

        pushButtonStartLogging = new QPushButton(tabLogging);
        pushButtonStartLogging->setObjectName(QStringLiteral("pushButtonStartLogging"));
        pushButtonStartLogging->setFont(font2);

        gridLayout_11->addWidget(pushButtonStartLogging, 0, 2, 1, 1);

        pushButtonSingleLog = new QPushButton(tabLogging);
        pushButtonSingleLog->setObjectName(QStringLiteral("pushButtonSingleLog"));

        gridLayout_11->addWidget(pushButtonSingleLog, 3, 3, 1, 1);


        formLayout->setLayout(0, QFormLayout::SpanningRole, gridLayout_11);

        line = new QFrame(tabLogging);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(1, QFormLayout::LabelRole, line);

        gridLayout_18 = new QGridLayout();
        gridLayout_18->setSpacing(6);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        gridLayout_18->setSizeConstraint(QLayout::SetMaximumSize);
        checkBox_3 = new QCheckBox(tabLogging);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        gridLayout_18->addWidget(checkBox_3, 0, 2, 1, 1);

        checkBox_2 = new QCheckBox(tabLogging);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        gridLayout_18->addWidget(checkBox_2, 0, 3, 1, 1);

        checkBox = new QCheckBox(tabLogging);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout_18->addWidget(checkBox, 0, 0, 1, 1);

        checkBox_4 = new QCheckBox(tabLogging);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        gridLayout_18->addWidget(checkBox_4, 0, 1, 1, 1);


        formLayout->setLayout(1, QFormLayout::FieldRole, gridLayout_18);

        tabWidget->addTab(tabLogging, QString());
        tabWT500 = new QWidget();
        tabWT500->setObjectName(QStringLiteral("tabWT500"));
        verticalLayout_6 = new QVBoxLayout(tabWT500);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        wt500Layout = new QVBoxLayout();
        wt500Layout->setSpacing(6);
        wt500Layout->setObjectName(QStringLiteral("wt500Layout"));

        verticalLayout_6->addLayout(wt500Layout);

        pushButtonQWT500Home = new QPushButton(tabWT500);
        pushButtonQWT500Home->setObjectName(QStringLiteral("pushButtonQWT500Home"));
        pushButtonQWT500Home->setMinimumSize(QSize(0, 0));
        pushButtonQWT500Home->setIcon(icon15);
        pushButtonQWT500Home->setIconSize(QSize(32, 32));

        verticalLayout_6->addWidget(pushButtonQWT500Home);

        tabWidget->addTab(tabWT500, QString());
        tabEVSE = new QWidget();
        tabEVSE->setObjectName(QStringLiteral("tabEVSE"));
        gridLayout_13 = new QGridLayout(tabEVSE);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        evseImageWidget = new QWidget(tabEVSE);
        evseImageWidget->setObjectName(QStringLiteral("evseImageWidget"));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(evseImageWidget->sizePolicy().hasHeightForWidth());
        evseImageWidget->setSizePolicy(sizePolicy6);
        evseImageWidget->setMinimumSize(QSize(500, 370));

        gridLayout_13->addWidget(evseImageWidget, 0, 0, 4, 1);

        lcdNumber = new QLCDNumber(tabEVSE);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        sizePolicy2.setHeightForWidth(lcdNumber->sizePolicy().hasHeightForWidth());
        lcdNumber->setSizePolicy(sizePolicy2);

        gridLayout_13->addWidget(lcdNumber, 0, 1, 1, 1);

        pushButtonStartCharging = new QPushButton(tabEVSE);
        pushButtonStartCharging->setObjectName(QStringLiteral("pushButtonStartCharging"));
        sizePolicy1.setHeightForWidth(pushButtonStartCharging->sizePolicy().hasHeightForWidth());
        pushButtonStartCharging->setSizePolicy(sizePolicy1);

        gridLayout_13->addWidget(pushButtonStartCharging, 1, 1, 1, 1);

        pushButtonStopCharging = new QPushButton(tabEVSE);
        pushButtonStopCharging->setObjectName(QStringLiteral("pushButtonStopCharging"));
        pushButtonStopCharging->setEnabled(false);
        sizePolicy1.setHeightForWidth(pushButtonStopCharging->sizePolicy().hasHeightForWidth());
        pushButtonStopCharging->setSizePolicy(sizePolicy1);

        gridLayout_13->addWidget(pushButtonStopCharging, 2, 1, 1, 1);

        pushButtonEVSEHome = new QPushButton(tabEVSE);
        pushButtonEVSEHome->setObjectName(QStringLiteral("pushButtonEVSEHome"));
        sizePolicy1.setHeightForWidth(pushButtonEVSEHome->sizePolicy().hasHeightForWidth());
        pushButtonEVSEHome->setSizePolicy(sizePolicy1);
        pushButtonEVSEHome->setMinimumSize(QSize(0, 0));
        pushButtonEVSEHome->setIcon(icon15);
        pushButtonEVSEHome->setIconSize(QSize(32, 32));

        gridLayout_13->addWidget(pushButtonEVSEHome, 3, 1, 1, 1);

        tabWidget->addTab(tabEVSE, QString());
        tabCalibration = new QWidget();
        tabCalibration->setObjectName(QStringLiteral("tabCalibration"));
        gridLayout_8 = new QGridLayout(tabCalibration);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        groupBox_9 = new QGroupBox(tabCalibration);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        verticalLayout_5 = new QVBoxLayout(groupBox_9);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        pushButton_2 = new QPushButton(groupBox_9);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_5->addWidget(pushButton_2);

        lineEdit = new QLineEdit(groupBox_9);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy7);

        verticalLayout_5->addWidget(lineEdit);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_5->addItem(verticalSpacer_2);


        gridLayout_8->addWidget(groupBox_9, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(tabCalibration);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        gridLayout_17 = new QGridLayout(groupBox_2);
        gridLayout_17->setSpacing(6);
        gridLayout_17->setContentsMargins(11, 11, 11, 11);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        pushButtonLoadCalibration = new QPushButton(groupBox_2);
        pushButtonLoadCalibration->setObjectName(QStringLiteral("pushButtonLoadCalibration"));
        sizePolicy.setHeightForWidth(pushButtonLoadCalibration->sizePolicy().hasHeightForWidth());
        pushButtonLoadCalibration->setSizePolicy(sizePolicy);

        gridLayout_17->addWidget(pushButtonLoadCalibration, 3, 0, 1, 1);

        pushButtonCalibrationHome = new QPushButton(groupBox_2);
        pushButtonCalibrationHome->setObjectName(QStringLiteral("pushButtonCalibrationHome"));
        pushButtonCalibrationHome->setMinimumSize(QSize(0, 0));
        pushButtonCalibrationHome->setIcon(icon15);
        pushButtonCalibrationHome->setIconSize(QSize(32, 32));

        gridLayout_17->addWidget(pushButtonCalibrationHome, 3, 1, 1, 1);

        gridLayout_15 = new QGridLayout();
        gridLayout_15->setSpacing(6);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        comboBoxCalPhase = new QComboBox(groupBox_2);
        comboBoxCalPhase->setObjectName(QStringLiteral("comboBoxCalPhase"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(comboBoxCalPhase->sizePolicy().hasHeightForWidth());
        comboBoxCalPhase->setSizePolicy(sizePolicy8);

        gridLayout_15->addWidget(comboBoxCalPhase, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_15->addWidget(label_6, 0, 0, 1, 1);

        comboBoxCalType = new QComboBox(groupBox_2);
        comboBoxCalType->setObjectName(QStringLiteral("comboBoxCalType"));
        sizePolicy.setHeightForWidth(comboBoxCalType->sizePolicy().hasHeightForWidth());
        comboBoxCalType->setSizePolicy(sizePolicy);

        gridLayout_15->addWidget(comboBoxCalType, 0, 3, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy8.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy8);

        gridLayout_15->addWidget(label_7, 0, 2, 1, 1);


        gridLayout_17->addLayout(gridLayout_15, 0, 0, 1, 2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        pushButtonCalibrateOffset = new QPushButton(groupBox_2);
        pushButtonCalibrateOffset->setObjectName(QStringLiteral("pushButtonCalibrateOffset"));
        sizePolicy2.setHeightForWidth(pushButtonCalibrateOffset->sizePolicy().hasHeightForWidth());
        pushButtonCalibrateOffset->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(pushButtonCalibrateOffset);

        pushButtonCalibrateGain = new QPushButton(groupBox_2);
        pushButtonCalibrateGain->setObjectName(QStringLiteral("pushButtonCalibrateGain"));
        sizePolicy1.setHeightForWidth(pushButtonCalibrateGain->sizePolicy().hasHeightForWidth());
        pushButtonCalibrateGain->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(pushButtonCalibrateGain);


        gridLayout_17->addLayout(horizontalLayout_6, 1, 0, 1, 2);

        gridLayout_16 = new QGridLayout();
        gridLayout_16->setSpacing(6);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        labelCurrentCalUnit = new QLabel(groupBox_2);
        labelCurrentCalUnit->setObjectName(QStringLiteral("labelCurrentCalUnit"));
        labelCurrentCalUnit->setEnabled(false);

        gridLayout_16->addWidget(labelCurrentCalUnit, 0, 4, 1, 1);

        labelVoltageCalUnit = new QLabel(groupBox_2);
        labelVoltageCalUnit->setObjectName(QStringLiteral("labelVoltageCalUnit"));
        labelVoltageCalUnit->setEnabled(true);

        gridLayout_16->addWidget(labelVoltageCalUnit, 0, 2, 1, 1);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_16->addWidget(label_10, 0, 0, 1, 1);

        comboBoxVoltageCalValue = new QComboBox(groupBox_2);
        comboBoxVoltageCalValue->setObjectName(QStringLiteral("comboBoxVoltageCalValue"));
        sizePolicy8.setHeightForWidth(comboBoxVoltageCalValue->sizePolicy().hasHeightForWidth());
        comboBoxVoltageCalValue->setSizePolicy(sizePolicy8);

        gridLayout_16->addWidget(comboBoxVoltageCalValue, 0, 1, 1, 1);

        comboBoxCurrentCalValue = new QComboBox(groupBox_2);
        comboBoxCurrentCalValue->setObjectName(QStringLiteral("comboBoxCurrentCalValue"));
        comboBoxCurrentCalValue->setEnabled(false);
        sizePolicy8.setHeightForWidth(comboBoxCurrentCalValue->sizePolicy().hasHeightForWidth());
        comboBoxCurrentCalValue->setSizePolicy(sizePolicy8);

        gridLayout_16->addWidget(comboBoxCurrentCalValue, 0, 3, 1, 1);


        gridLayout_17->addLayout(gridLayout_16, 2, 0, 1, 2);


        gridLayout_8->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox_7 = new QGroupBox(tabCalibration);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        gridLayout_12 = new QGridLayout(groupBox_7);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        tableWidget = new QTableWidget(groupBox_7);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 6)
            tableWidget->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem7);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        tableWidget->setAutoScrollMargin(14);
        tableWidget->horizontalHeader()->setDefaultSectionSize(120);

        gridLayout_12->addWidget(tableWidget, 0, 0, 1, 1);


        gridLayout_8->addWidget(groupBox_7, 0, 1, 2, 1);

        tabWidget->addTab(tabCalibration, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 20));
        menuCalls = new QMenu(menuBar);
        menuCalls->setObjectName(QStringLiteral("menuCalls"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuTest = new QMenu(menuBar);
        menuTest->setObjectName(QStringLiteral("menuTest"));
        menuSystem = new QMenu(menuBar);
        menuSystem->setObjectName(QStringLiteral("menuSystem"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuCalls->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuBar->addAction(menuTest->menuAction());
        menuBar->addAction(menuSystem->menuAction());
        menuCalls->addAction(actionConnect);
        menuCalls->addAction(actionDisconnect);
        menuCalls->addSeparator();
        menuCalls->addAction(actionQuit);
        menuTools->addAction(actionConfigure);
        menuTools->addAction(actionClear);
        menuTools->addSeparator();
        menuTools->addSeparator();
        menuTools->addAction(actionStart);
        menuHelp->addAction(actionAbout);
        mainToolBar->addAction(actionConnect);
        mainToolBar->addAction(actionDisconnect);
        mainToolBar->addAction(actionConfigure);
        mainToolBar->addAction(actionClear);
        toolBar->addAction(actionStart);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(7);
        pushButtonPanel->setDefault(false);
        pushButtonInformation->setDefault(false);
        pushButtonHarmonics->setDefault(false);
        pushButtonCalibration->setDefault(false);
        pushButtonEVSE->setDefault(false);
        pushButtonLogging->setDefault(false);
        pushButtonQWT500->setDefault(false);
        pushButtonScope->setDefault(false);
        pushButtonExit->setDefault(false);
        comboBoxCirculationFreq->setCurrentIndex(1);
        comboBoxLoggingIntervall->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "PSOM Connect", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "PowerLab", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionAbout->setToolTip(QApplication::translate("MainWindow", "About program", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionAbout->setShortcut(QApplication::translate("MainWindow", "Alt+A", Q_NULLPTR));
        actionAboutQt->setText(QApplication::translate("MainWindow", "About Qt", Q_NULLPTR));
        actionConnect->setText(QApplication::translate("MainWindow", "C&onnect", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionConnect->setToolTip(QApplication::translate("MainWindow", "Connect to serial port", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionConnect->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
        actionDisconnect->setText(QApplication::translate("MainWindow", "&Disconnect", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDisconnect->setToolTip(QApplication::translate("MainWindow", "Disconnect from serial port", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionDisconnect->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", Q_NULLPTR));
        actionConfigure->setText(QApplication::translate("MainWindow", "&Configure", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionConfigure->setToolTip(QApplication::translate("MainWindow", "Configure serial port", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionConfigure->setShortcut(QApplication::translate("MainWindow", "Alt+C", Q_NULLPTR));
        actionClear->setText(QApplication::translate("MainWindow", "C&lear", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionClear->setToolTip(QApplication::translate("MainWindow", "Clear data", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionClear->setShortcut(QApplication::translate("MainWindow", "Alt+L", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("MainWindow", "&Quit", Q_NULLPTR));
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", Q_NULLPTR));
        actionStart->setText(QApplication::translate("MainWindow", "&Start", Q_NULLPTR));
        actionStart->setShortcut(QApplication::translate("MainWindow", "Meta+S", Q_NULLPTR));
        pushButtonPanel->setText(QApplication::translate("MainWindow", "      Panel", Q_NULLPTR));
        pushButtonInformation->setText(QApplication::translate("MainWindow", "       Info", Q_NULLPTR));
        pushButtonHarmonics->setText(QApplication::translate("MainWindow", "  Harmonics", Q_NULLPTR));
        pushButtonCalibration->setText(QApplication::translate("MainWindow", "  Calibration", Q_NULLPTR));
        pushButtonEVSE->setText(QApplication::translate("MainWindow", "       EVSE", Q_NULLPTR));
        pushButtonLogging->setText(QApplication::translate("MainWindow", "    Logging", Q_NULLPTR));
        pushButtonQWT500->setText(QApplication::translate("MainWindow", "  QWT500", Q_NULLPTR));
        pushButtonScope->setText(QApplication::translate("MainWindow", "     Scope", Q_NULLPTR));
        pushButtonExit->setText(QApplication::translate("MainWindow", "           Exit", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabMenu), QApplication::translate("MainWindow", "Men\303\274", Q_NULLPTR));
        groupBoxL1->setTitle(QApplication::translate("MainWindow", "Phase L1", Q_NULLPTR));
        pBClearEnergyL1->setText(QApplication::translate("MainWindow", "Clear Energy L1", Q_NULLPTR));
        groupBoxL2->setTitle(QApplication::translate("MainWindow", "Phase L2", Q_NULLPTR));
        pBClearEnergyL2->setText(QApplication::translate("MainWindow", "Clear Energy L2", Q_NULLPTR));
        groupBoxL3->setTitle(QApplication::translate("MainWindow", "Phase L3", Q_NULLPTR));
        pBClearEnergyL3->setText(QApplication::translate("MainWindow", "Clear Energy L3", Q_NULLPTR));
        groupBoxLT->setTitle(QApplication::translate("MainWindow", "Phase LT", Q_NULLPTR));
        pBClearEnergyLT->setText(QApplication::translate("MainWindow", "Clear Energy LT", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        pushButtonStartMeasurment->setText(QApplication::translate("MainWindow", "Start", Q_NULLPTR));
        pushButtonStopMeasurment->setText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
        comboBoxErrorStyle->clear();
        comboBoxErrorStyle->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Absolute error", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Relative error %", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Absolute error %", Q_NULLPTR)
        );
        pushButtonPanelHome->setText(QApplication::translate("MainWindow", "     Home", Q_NULLPTR));
        comboBoxCirculationFreq->clear();
        comboBoxCirculationFreq->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "5", Q_NULLPTR)
         << QApplication::translate("MainWindow", "10", Q_NULLPTR)
         << QApplication::translate("MainWindow", "15", Q_NULLPTR)
         << QApplication::translate("MainWindow", "20", Q_NULLPTR)
         << QApplication::translate("MainWindow", "30", Q_NULLPTR)
         << QApplication::translate("MainWindow", "40", Q_NULLPTR)
         << QApplication::translate("MainWindow", "50", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tabPanel), QApplication::translate("MainWindow", "Panel", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Scope", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Type:", Q_NULLPTR));
        pushButtonOsciStart->setText(QApplication::translate("MainWindow", "Start", Q_NULLPTR));
        pushButtonOsciStop->setText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
        pushButtonOsciReset->setText(QApplication::translate("MainWindow", "Reset", Q_NULLPTR));
        pushButtonScopeHome->setText(QApplication::translate("MainWindow", "    Home", Q_NULLPTR));
        checkBoxOsciEnableL3->setText(QApplication::translate("MainWindow", "L3", Q_NULLPTR));
        checkBoxOsciEnableL1->setText(QApplication::translate("MainWindow", "L1", Q_NULLPTR));
        checkBoxOsciEnableL2->setText(QApplication::translate("MainWindow", "L2", Q_NULLPTR));
        checkBoxOsciEnableLT->setText(QApplication::translate("MainWindow", "LT", Q_NULLPTR));
        comboBoxOsci->clear();
        comboBoxOsci->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Voltage RMS", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Current RMS", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Active Power", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Reactive Power", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Apparent Power", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tabScope), QApplication::translate("MainWindow", "Scope", Q_NULLPTR));
        groupBoxHarmonicsData->setTitle(QApplication::translate("MainWindow", "Harmonics L1", Q_NULLPTR));
        label_70->setText(QApplication::translate("MainWindow", "Phase:", Q_NULLPTR));
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "L1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "L2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "L3", Q_NULLPTR)
        );
        label_69->setText(QApplication::translate("MainWindow", "Y-Axis", Q_NULLPTR));
        cBHarmonicsAxisStyle->clear();
        cBHarmonicsAxisStyle->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Harmonic", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Frequency", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("MainWindow", "Count:", Q_NULLPTR));
        cBHarmonicsCount->clear();
        cBHarmonicsCount->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5", Q_NULLPTR)
         << QApplication::translate("MainWindow", "6", Q_NULLPTR)
         << QApplication::translate("MainWindow", "7", Q_NULLPTR)
         << QApplication::translate("MainWindow", "8", Q_NULLPTR)
         << QApplication::translate("MainWindow", "9", Q_NULLPTR)
         << QApplication::translate("MainWindow", "10", Q_NULLPTR)
         << QApplication::translate("MainWindow", "11", Q_NULLPTR)
        );
        pBSetHarmonicsCount->setText(QApplication::translate("MainWindow", "set", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Type:", Q_NULLPTR));
        cBHarmonicsType->clear();
        cBHarmonicsType->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Voltage", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Current", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Active Power", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Reactive Power", Q_NULLPTR)
        );
        pBTriggerHarmonics->setText(QApplication::translate("MainWindow", "Trigger", Q_NULLPTR));
        pBStartHarmonics->setText(QApplication::translate("MainWindow", "Start", Q_NULLPTR));
        label_71->setText(QApplication::translate("MainWindow", "Display:", Q_NULLPTR));
        checkBoxDisplayL1->setText(QApplication::translate("MainWindow", "L1", Q_NULLPTR));
        checkBoxDisplayL2->setText(QApplication::translate("MainWindow", "L2", Q_NULLPTR));
        checkBoxDisplayL3->setText(QApplication::translate("MainWindow", "L3", Q_NULLPTR));
        pushButtonHarmonicsHome->setText(QApplication::translate("MainWindow", "Home", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabHarmonics), QApplication::translate("MainWindow", "Harmonics", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Size:", Q_NULLPTR));
        labelFileSize->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        pushButtonLoggingHome->setText(QApplication::translate("MainWindow", "Home", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Logged lines :", Q_NULLPTR));
        lineEditLogFileName->setText(QApplication::translate("MainWindow", "C:\\Log\\test", Q_NULLPTR));
        labelLoggingLine->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        comboBoxLoggingIntervall->clear();
        comboBoxLoggingIntervall->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5", Q_NULLPTR)
         << QApplication::translate("MainWindow", "10", Q_NULLPTR)
         << QApplication::translate("MainWindow", "15", Q_NULLPTR)
        );
        pushButtonStartLogging->setText(QApplication::translate("MainWindow", "Start Logging", Q_NULLPTR));
        pushButtonSingleLog->setText(QApplication::translate("MainWindow", "Single Log", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("MainWindow", "CheckBox", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("MainWindow", "CheckBox", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "CheckBox", Q_NULLPTR));
        checkBox_4->setText(QApplication::translate("MainWindow", "CheckBox", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabLogging), QApplication::translate("MainWindow", "Logging", Q_NULLPTR));
        pushButtonQWT500Home->setText(QApplication::translate("MainWindow", "    Home", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabWT500), QApplication::translate("MainWindow", "WT500", Q_NULLPTR));
        pushButtonStartCharging->setText(QApplication::translate("MainWindow", "Start", Q_NULLPTR));
        pushButtonStopCharging->setText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
        pushButtonEVSEHome->setText(QApplication::translate("MainWindow", "    Home", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabEVSE), QApplication::translate("MainWindow", "EVSE", Q_NULLPTR));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "Export", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Export", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("MainWindow", "C:\\Log\\cal", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Control", Q_NULLPTR));
        pushButtonLoadCalibration->setText(QApplication::translate("MainWindow", "Load", Q_NULLPTR));
        pushButtonCalibrationHome->setText(QApplication::translate("MainWindow", "    Home", Q_NULLPTR));
        comboBoxCalPhase->clear();
        comboBoxCalPhase->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "L1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "L2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "L3", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("MainWindow", "Phase", Q_NULLPTR));
        comboBoxCalType->clear();
        comboBoxCalType->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Voltage [V]", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Current [A]", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("MainWindow", "Type", Q_NULLPTR));
        pushButtonCalibrateOffset->setText(QApplication::translate("MainWindow", "Offset", Q_NULLPTR));
        pushButtonCalibrateGain->setText(QApplication::translate("MainWindow", "Calibrate", Q_NULLPTR));
        labelCurrentCalUnit->setText(QApplication::translate("MainWindow", "A", Q_NULLPTR));
        labelVoltageCalUnit->setText(QApplication::translate("MainWindow", "V", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Calibration Target", Q_NULLPTR));
        comboBoxVoltageCalValue->clear();
        comboBoxVoltageCalValue->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "0", Q_NULLPTR)
         << QApplication::translate("MainWindow", "40", Q_NULLPTR)
         << QApplication::translate("MainWindow", "80", Q_NULLPTR)
         << QApplication::translate("MainWindow", "120", Q_NULLPTR)
         << QApplication::translate("MainWindow", "160", Q_NULLPTR)
         << QApplication::translate("MainWindow", "200", Q_NULLPTR)
         << QApplication::translate("MainWindow", "240", Q_NULLPTR)
         << QApplication::translate("MainWindow", "280", Q_NULLPTR)
         << QApplication::translate("MainWindow", "320", Q_NULLPTR)
         << QApplication::translate("MainWindow", "360", Q_NULLPTR)
         << QApplication::translate("MainWindow", "400", Q_NULLPTR)
        );
        comboBoxCurrentCalValue->clear();
        comboBoxCurrentCalValue->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "0", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4", Q_NULLPTR)
         << QApplication::translate("MainWindow", "6", Q_NULLPTR)
         << QApplication::translate("MainWindow", "8", Q_NULLPTR)
         << QApplication::translate("MainWindow", "10", Q_NULLPTR)
         << QApplication::translate("MainWindow", "12", Q_NULLPTR)
         << QApplication::translate("MainWindow", "16", Q_NULLPTR)
         << QApplication::translate("MainWindow", "20", Q_NULLPTR)
         << QApplication::translate("MainWindow", "24", Q_NULLPTR)
        );
        groupBox_7->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "VCAL", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "ICAL", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "CAL_L1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "CAL_L2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "CAL_L3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "OFFS_L1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "VOFFS_L3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "OFFS_L3", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabCalibration), QApplication::translate("MainWindow", "Calibration", Q_NULLPTR));
        menuCalls->setTitle(QApplication::translate("MainWindow", "Calls", Q_NULLPTR));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        menuTest->setTitle(QApplication::translate("MainWindow", "Test", Q_NULLPTR));
        menuSystem->setTitle(QApplication::translate("MainWindow", "System", Q_NULLPTR));
        mainToolBar->setWindowTitle(QApplication::translate("MainWindow", "PowerLab", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
