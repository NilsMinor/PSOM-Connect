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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
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
    QAction *actionHarmonics;
    QAction *actionOscilloscope;
    QAction *actionStart;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabMenu;
    QGridLayout *gridLayout_5;
    QGridLayout *testLayout1;
    QPushButton *pushButton_4;
    QPushButton *pushButtonInformation;
    QPushButton *pushButtonPanel;
    QPushButton *pushButtonScope;
    QPushButton *pushButtonCalibration;
    QPushButton *pushButtonPower;
    QPushButton *QWT500;
    QPushButton *pushButton_2;
    QWidget *tab_2;
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
    QCheckBox *checkBox_2;
    QWidget *tabTerminal;
    QPushButton *pushButtonStartMeasurment;
    QPushButton *pushButtonStopMeasurment;
    QComboBox *comboBoxCirculationFreq;
    QSpacerItem *horizontalSpacer;
    QWidget *tabScope;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_9;
    QComboBox *comboBoxOsciCh2;
    QComboBox *comboBoxOsciCh3;
    QComboBox *comboBoxOsciCh1;
    QSpacerItem *verticalSpacer;
    QComboBox *comboBoxOsciCh4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_11;
    QPushButton *pushButtonOsciStart;
    QPushButton *pushButtonOsciStop;
    QPushButton *pushButtonOsciReset;
    QVBoxLayout *layoutOscilloscope;
    QWidget *tabHarmonics;
    QGroupBox *groupBoxHarmonicsData;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *harmonicsDataLayout;
    QWidget *layoutWidget;
    QVBoxLayout *harmonicsGraphLayout;
    QWidget *layoutWidget1;
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
    QWidget *tab;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QComboBox *comboBox_2;
    QPushButton *pushButton_3;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QComboBox *comboBox;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QComboBox *comboBox_3;
    QLabel *label_8;
    QComboBox *comboBox_4;
    QLabel *label_9;
    QPushButton *pushButton;
    QGroupBox *groupBox_7;
    QGroupBox *groupBox_9;
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
        actionHarmonics = new QAction(MainWindow);
        actionHarmonics->setObjectName(QStringLiteral("actionHarmonics"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/harmonics.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHarmonics->setIcon(icon5);
        actionOscilloscope = new QAction(MainWindow);
        actionOscilloscope->setObjectName(QStringLiteral("actionOscilloscope"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/osci.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOscilloscope->setIcon(icon6);
        actionStart = new QAction(MainWindow);
        actionStart->setObjectName(QStringLiteral("actionStart"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStart->setIcon(icon7);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
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
        pushButton_4 = new QPushButton(tabMenu);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);

        testLayout1->addWidget(pushButton_4, 1, 2, 1, 1);

        pushButtonInformation = new QPushButton(tabMenu);
        pushButtonInformation->setObjectName(QStringLiteral("pushButtonInformation"));
        sizePolicy1.setHeightForWidth(pushButtonInformation->sizePolicy().hasHeightForWidth());
        pushButtonInformation->setSizePolicy(sizePolicy1);

        testLayout1->addWidget(pushButtonInformation, 2, 2, 1, 1);

        pushButtonPanel = new QPushButton(tabMenu);
        pushButtonPanel->setObjectName(QStringLiteral("pushButtonPanel"));
        sizePolicy1.setHeightForWidth(pushButtonPanel->sizePolicy().hasHeightForWidth());
        pushButtonPanel->setSizePolicy(sizePolicy1);

        testLayout1->addWidget(pushButtonPanel, 0, 0, 1, 1);

        pushButtonScope = new QPushButton(tabMenu);
        pushButtonScope->setObjectName(QStringLiteral("pushButtonScope"));
        sizePolicy1.setHeightForWidth(pushButtonScope->sizePolicy().hasHeightForWidth());
        pushButtonScope->setSizePolicy(sizePolicy1);

        testLayout1->addWidget(pushButtonScope, 1, 0, 1, 1);

        pushButtonCalibration = new QPushButton(tabMenu);
        pushButtonCalibration->setObjectName(QStringLiteral("pushButtonCalibration"));
        sizePolicy1.setHeightForWidth(pushButtonCalibration->sizePolicy().hasHeightForWidth());
        pushButtonCalibration->setSizePolicy(sizePolicy1);

        testLayout1->addWidget(pushButtonCalibration, 0, 2, 1, 1);

        pushButtonPower = new QPushButton(tabMenu);
        pushButtonPower->setObjectName(QStringLiteral("pushButtonPower"));
        sizePolicy1.setHeightForWidth(pushButtonPower->sizePolicy().hasHeightForWidth());
        pushButtonPower->setSizePolicy(sizePolicy1);

        testLayout1->addWidget(pushButtonPower, 2, 0, 1, 1);

        QWT500 = new QPushButton(tabMenu);
        QWT500->setObjectName(QStringLiteral("QWT500"));
        sizePolicy1.setHeightForWidth(QWT500->sizePolicy().hasHeightForWidth());
        QWT500->setSizePolicy(sizePolicy1);

        testLayout1->addWidget(QWT500, 3, 0, 1, 1);

        pushButton_2 = new QPushButton(tabMenu);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);

        testLayout1->addWidget(pushButton_2, 3, 2, 1, 1);


        gridLayout_5->addLayout(testLayout1, 0, 0, 1, 1);

        tabWidget->addTab(tabMenu, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        groupBoxL1 = new QGroupBox(tab_2);
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

        gridLayout_2->addWidget(pBClearEnergyL1, 1, 0, 1, 1);


        horizontalLayout_2->addWidget(groupBoxL1);

        groupBoxL2 = new QGroupBox(tab_2);
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

        verticalLayout_4->addWidget(pBClearEnergyL2);


        horizontalLayout_2->addWidget(groupBoxL2);

        groupBoxL3 = new QGroupBox(tab_2);
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

        gridLayout_6->addWidget(pBClearEnergyL3, 1, 0, 1, 1);


        horizontalLayout_2->addWidget(groupBoxL3);

        groupBoxLT = new QGroupBox(tab_2);
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

        gridLayout_7->addWidget(pBClearEnergyLT, 1, 0, 1, 1);


        horizontalLayout_2->addWidget(groupBoxLT);


        verticalLayout_3->addLayout(horizontalLayout_2);

        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(0, 100));
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
        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        gridLayout->addWidget(checkBox_2, 1, 1, 1, 1);

        tabTerminal = new QWidget(groupBox);
        tabTerminal->setObjectName(QStringLiteral("tabTerminal"));

        gridLayout->addWidget(tabTerminal, 2, 0, 1, 2);

        pushButtonStartMeasurment = new QPushButton(groupBox);
        pushButtonStartMeasurment->setObjectName(QStringLiteral("pushButtonStartMeasurment"));

        gridLayout->addWidget(pushButtonStartMeasurment, 0, 0, 1, 1);

        pushButtonStopMeasurment = new QPushButton(groupBox);
        pushButtonStopMeasurment->setObjectName(QStringLiteral("pushButtonStopMeasurment"));

        gridLayout->addWidget(pushButtonStopMeasurment, 0, 1, 1, 1);

        comboBoxCirculationFreq = new QComboBox(groupBox);
        comboBoxCirculationFreq->setObjectName(QStringLiteral("comboBoxCirculationFreq"));

        gridLayout->addWidget(comboBoxCirculationFreq, 1, 0, 1, 1);


        layoutCommonPanelData->addLayout(gridLayout);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        layoutCommonPanelData->addItem(horizontalSpacer);


        gridLayout_4->addLayout(layoutCommonPanelData, 2, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox);

        tabWidget->addTab(tab_2, QString());
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
        comboBoxOsciCh2 = new QComboBox(groupBox_3);
        comboBoxOsciCh2->setObjectName(QStringLiteral("comboBoxOsciCh2"));

        gridLayout_9->addWidget(comboBoxOsciCh2, 2, 1, 1, 1);

        comboBoxOsciCh3 = new QComboBox(groupBox_3);
        comboBoxOsciCh3->setObjectName(QStringLiteral("comboBoxOsciCh3"));

        gridLayout_9->addWidget(comboBoxOsciCh3, 3, 1, 1, 1);

        comboBoxOsciCh1 = new QComboBox(groupBox_3);
        comboBoxOsciCh1->setObjectName(QStringLiteral("comboBoxOsciCh1"));

        gridLayout_9->addWidget(comboBoxOsciCh1, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer, 5, 1, 1, 1);

        comboBoxOsciCh4 = new QComboBox(groupBox_3);
        comboBoxOsciCh4->setObjectName(QStringLiteral("comboBoxOsciCh4"));

        gridLayout_9->addWidget(comboBoxOsciCh4, 4, 1, 1, 1);

        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout_9->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_9->addWidget(label_2, 2, 0, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_9->addWidget(label_4, 3, 0, 1, 1);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_9->addWidget(label_11, 4, 0, 1, 1);

        pushButtonOsciStart = new QPushButton(groupBox_3);
        pushButtonOsciStart->setObjectName(QStringLiteral("pushButtonOsciStart"));

        gridLayout_9->addWidget(pushButtonOsciStart, 6, 0, 1, 2);

        pushButtonOsciStop = new QPushButton(groupBox_3);
        pushButtonOsciStop->setObjectName(QStringLiteral("pushButtonOsciStop"));

        gridLayout_9->addWidget(pushButtonOsciStop, 7, 0, 1, 2);

        pushButtonOsciReset = new QPushButton(groupBox_3);
        pushButtonOsciReset->setObjectName(QStringLiteral("pushButtonOsciReset"));

        gridLayout_9->addWidget(pushButtonOsciReset, 8, 0, 1, 2);


        gridLayout_3->addWidget(groupBox_3, 0, 0, 1, 1);

        layoutOscilloscope = new QVBoxLayout();
        layoutOscilloscope->setSpacing(6);
        layoutOscilloscope->setObjectName(QStringLiteral("layoutOscilloscope"));

        gridLayout_3->addLayout(layoutOscilloscope, 0, 1, 1, 1);

        tabWidget->addTab(tabScope, QString());
        tabHarmonics = new QWidget();
        tabHarmonics->setObjectName(QStringLiteral("tabHarmonics"));
        groupBoxHarmonicsData = new QGroupBox(tabHarmonics);
        groupBoxHarmonicsData->setObjectName(QStringLiteral("groupBoxHarmonicsData"));
        groupBoxHarmonicsData->setGeometry(QRect(9, 9, 171, 261));
        sizePolicy2.setHeightForWidth(groupBoxHarmonicsData->sizePolicy().hasHeightForWidth());
        groupBoxHarmonicsData->setSizePolicy(sizePolicy2);
        horizontalLayout_3 = new QHBoxLayout(groupBoxHarmonicsData);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        harmonicsDataLayout = new QGridLayout();
        harmonicsDataLayout->setSpacing(6);
        harmonicsDataLayout->setObjectName(QStringLiteral("harmonicsDataLayout"));
        harmonicsDataLayout->setSizeConstraint(QLayout::SetFixedSize);

        horizontalLayout_3->addLayout(harmonicsDataLayout);

        layoutWidget = new QWidget(tabHarmonics);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(190, 10, 581, 451));
        harmonicsGraphLayout = new QVBoxLayout(layoutWidget);
        harmonicsGraphLayout->setSpacing(6);
        harmonicsGraphLayout->setContentsMargins(11, 11, 11, 11);
        harmonicsGraphLayout->setObjectName(QStringLiteral("harmonicsGraphLayout"));
        harmonicsGraphLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        harmonicsGraphLayout->setContentsMargins(0, 0, 0, 0);
        layoutWidget1 = new QWidget(tabHarmonics);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 270, 174, 187));
        gridLayout_14 = new QGridLayout(layoutWidget1);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        gridLayout_14->setContentsMargins(0, 0, 0, 0);
        label_70 = new QLabel(layoutWidget1);
        label_70->setObjectName(QStringLiteral("label_70"));

        gridLayout_14->addWidget(label_70, 0, 0, 1, 1);

        comboBox_5 = new QComboBox(layoutWidget1);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));

        gridLayout_14->addWidget(comboBox_5, 0, 1, 1, 4);

        label_69 = new QLabel(layoutWidget1);
        label_69->setObjectName(QStringLiteral("label_69"));

        gridLayout_14->addWidget(label_69, 1, 0, 1, 1);

        cBHarmonicsAxisStyle = new QComboBox(layoutWidget1);
        cBHarmonicsAxisStyle->setObjectName(QStringLiteral("cBHarmonicsAxisStyle"));

        gridLayout_14->addWidget(cBHarmonicsAxisStyle, 1, 1, 1, 4);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_14->addWidget(label_5, 2, 0, 1, 1);

        cBHarmonicsCount = new QComboBox(layoutWidget1);
        cBHarmonicsCount->setObjectName(QStringLiteral("cBHarmonicsCount"));

        gridLayout_14->addWidget(cBHarmonicsCount, 2, 1, 1, 2);

        pBSetHarmonicsCount = new QPushButton(layoutWidget1);
        pBSetHarmonicsCount->setObjectName(QStringLiteral("pBSetHarmonicsCount"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(pBSetHarmonicsCount->sizePolicy().hasHeightForWidth());
        pBSetHarmonicsCount->setSizePolicy(sizePolicy5);

        gridLayout_14->addWidget(pBSetHarmonicsCount, 2, 3, 1, 2);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_14->addWidget(label_3, 3, 0, 1, 1);

        cBHarmonicsType = new QComboBox(layoutWidget1);
        cBHarmonicsType->setObjectName(QStringLiteral("cBHarmonicsType"));

        gridLayout_14->addWidget(cBHarmonicsType, 3, 1, 1, 4);

        pBTriggerHarmonics = new QPushButton(layoutWidget1);
        pBTriggerHarmonics->setObjectName(QStringLiteral("pBTriggerHarmonics"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(pBTriggerHarmonics->sizePolicy().hasHeightForWidth());
        pBTriggerHarmonics->setSizePolicy(sizePolicy6);

        gridLayout_14->addWidget(pBTriggerHarmonics, 4, 0, 1, 5);

        pBStartHarmonics = new QPushButton(layoutWidget1);
        pBStartHarmonics->setObjectName(QStringLiteral("pBStartHarmonics"));
        sizePolicy3.setHeightForWidth(pBStartHarmonics->sizePolicy().hasHeightForWidth());
        pBStartHarmonics->setSizePolicy(sizePolicy3);

        gridLayout_14->addWidget(pBStartHarmonics, 5, 0, 1, 5);

        label_71 = new QLabel(layoutWidget1);
        label_71->setObjectName(QStringLiteral("label_71"));

        gridLayout_14->addWidget(label_71, 6, 0, 1, 1);

        checkBoxDisplayL1 = new QCheckBox(layoutWidget1);
        checkBoxDisplayL1->setObjectName(QStringLiteral("checkBoxDisplayL1"));

        gridLayout_14->addWidget(checkBoxDisplayL1, 6, 1, 1, 1);

        checkBoxDisplayL2 = new QCheckBox(layoutWidget1);
        checkBoxDisplayL2->setObjectName(QStringLiteral("checkBoxDisplayL2"));

        gridLayout_14->addWidget(checkBoxDisplayL2, 6, 2, 1, 2);

        checkBoxDisplayL3 = new QCheckBox(layoutWidget1);
        checkBoxDisplayL3->setObjectName(QStringLiteral("checkBoxDisplayL3"));

        gridLayout_14->addWidget(checkBoxDisplayL3, 6, 4, 1, 1);

        tabWidget->addTab(tabHarmonics, QString());
        layoutWidget->raise();
        groupBoxHarmonicsData->raise();
        layoutWidget->raise();
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_8 = new QGridLayout(tab);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        layoutWidget2 = new QWidget(groupBox_2);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 60, 202, 24));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_6->addWidget(label_7);

        comboBox_2 = new QComboBox(layoutWidget2);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout_6->addWidget(comboBox_2);

        pushButton_3 = new QPushButton(layoutWidget2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_6->addWidget(pushButton_3);

        layoutWidget3 = new QWidget(groupBox_2);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 30, 111, 24));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_7->addWidget(label_6);

        comboBox = new QComboBox(layoutWidget3);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_7->addWidget(comboBox);

        layoutWidget4 = new QWidget(groupBox_2);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 90, 341, 24));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget4);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_4->addWidget(label_10);

        comboBox_3 = new QComboBox(layoutWidget4);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        horizontalLayout_4->addWidget(comboBox_3);

        label_8 = new QLabel(layoutWidget4);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_4->addWidget(label_8);

        comboBox_4 = new QComboBox(layoutWidget4);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));

        horizontalLayout_4->addWidget(comboBox_4);

        label_9 = new QLabel(layoutWidget4);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_4->addWidget(label_9);

        pushButton = new QPushButton(layoutWidget4);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_4->addWidget(pushButton);


        gridLayout_8->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox_7 = new QGroupBox(tab);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));

        gridLayout_8->addWidget(groupBox_7, 0, 1, 1, 1);

        groupBox_9 = new QGroupBox(tab);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));

        gridLayout_8->addWidget(groupBox_9, 1, 0, 1, 2);

        tabWidget->addTab(tab, QString());

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
        menuTools->addAction(actionOscilloscope);
        menuTools->addAction(actionHarmonics);
        menuTools->addSeparator();
        menuTools->addAction(actionStart);
        menuHelp->addAction(actionAbout);
        mainToolBar->addAction(actionConnect);
        mainToolBar->addAction(actionDisconnect);
        mainToolBar->addAction(actionConfigure);
        mainToolBar->addAction(actionClear);
        toolBar->addAction(actionHarmonics);
        toolBar->addAction(actionOscilloscope);
        toolBar->addAction(actionStart);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(3);
        comboBoxCirculationFreq->setCurrentIndex(1);


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
        actionHarmonics->setText(QApplication::translate("MainWindow", "&Harmonics", Q_NULLPTR));
        actionHarmonics->setShortcut(QApplication::translate("MainWindow", "Meta+H", Q_NULLPTR));
        actionOscilloscope->setText(QApplication::translate("MainWindow", "&Oscilloscope", Q_NULLPTR));
        actionOscilloscope->setShortcut(QApplication::translate("MainWindow", "Meta+O", Q_NULLPTR));
        actionStart->setText(QApplication::translate("MainWindow", "&Start", Q_NULLPTR));
        actionStart->setShortcut(QApplication::translate("MainWindow", "Meta+S", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Harmonics", Q_NULLPTR));
        pushButtonInformation->setText(QApplication::translate("MainWindow", "Info", Q_NULLPTR));
        pushButtonPanel->setText(QApplication::translate("MainWindow", "Panel", Q_NULLPTR));
        pushButtonScope->setText(QApplication::translate("MainWindow", "Scope", Q_NULLPTR));
        pushButtonCalibration->setText(QApplication::translate("MainWindow", "Calibration", Q_NULLPTR));
        pushButtonPower->setText(QApplication::translate("MainWindow", "Power", Q_NULLPTR));
        QWT500->setText(QApplication::translate("MainWindow", "QWT500 Plugin", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "???", Q_NULLPTR));
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
        checkBox_2->setText(QApplication::translate("MainWindow", "CheckBox", Q_NULLPTR));
        pushButtonStartMeasurment->setText(QApplication::translate("MainWindow", "Start", Q_NULLPTR));
        pushButtonStopMeasurment->setText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
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
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Seite", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "CH1", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "CH2", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "CH3", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "CH4", Q_NULLPTR));
        pushButtonOsciStart->setText(QApplication::translate("MainWindow", "Start", Q_NULLPTR));
        pushButtonOsciStop->setText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
        pushButtonOsciReset->setText(QApplication::translate("MainWindow", "Reset", Q_NULLPTR));
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
         << QApplication::translate("MainWindow", "12", Q_NULLPTR)
         << QApplication::translate("MainWindow", "13", Q_NULLPTR)
         << QApplication::translate("MainWindow", "14", Q_NULLPTR)
         << QApplication::translate("MainWindow", "15", Q_NULLPTR)
         << QApplication::translate("MainWindow", "16", Q_NULLPTR)
         << QApplication::translate("MainWindow", "17", Q_NULLPTR)
         << QApplication::translate("MainWindow", "18", Q_NULLPTR)
         << QApplication::translate("MainWindow", "19", Q_NULLPTR)
         << QApplication::translate("MainWindow", "20", Q_NULLPTR)
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
        tabWidget->setTabText(tabWidget->indexOf(tabHarmonics), QApplication::translate("MainWindow", "Harmonics", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Type", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Voltage [V]", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Current [A]", Q_NULLPTR)
        );
        pushButton_3->setText(QApplication::translate("MainWindow", "Calibrate", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Phase", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "L1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "L2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "L3", Q_NULLPTR)
        );
        label_10->setText(QApplication::translate("MainWindow", "Calibration Target", Q_NULLPTR));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
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
        label_8->setText(QApplication::translate("MainWindow", "V", Q_NULLPTR));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
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
        label_9->setText(QApplication::translate("MainWindow", "A", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Next", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Calibration", Q_NULLPTR));
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
