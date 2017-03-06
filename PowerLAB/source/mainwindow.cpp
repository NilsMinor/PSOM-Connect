/****************************************************************************
**
** Copyright (C) 2012 Denis Shienkov <denis.shienkov@gmail.com>
** Copyright (C) 2012 Laszlo Papp <lpapp@kde.org>
** Contact: http://www.qt.io/licensing/
**
** This file is part of the QtSerialPort module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL21$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see http://www.qt.io/terms-conditions. For further
** information use the contact form at http://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 or version 3 as published by the Free
** Software Foundation and appearing in the file LICENSE.LGPLv21 and
** LICENSE.LGPLv3 included in the packaging of this file. Please review the
** following information to ensure the GNU Lesser General Public License
** requirements will be met: https://www.gnu.org/licenses/lgpl.html and
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** As a special exception, The Qt Company gives you certain additional
** rights. These rights are described in The Qt Company LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** $QT_END_LICENSE$
**
**
** Extended by Nils Minor as an example of the basic communication for the
** PSOM module.
**
**
**
****************************************************************************/

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "console.h"
#include "settingsdialog.h"

#include <QMessageBox>
#include <QLabel>
#include <QtSerialPort/QSerialPort>

// Serial Port and window functions
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    console = new Console;
    console->setEnabled(false);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(console);
    ui->tabTerminal->setLayout(mainLayout);

    serial = new QSerialPort(this);
    settings = new SettingsDialog;
    settings->move(this->x()+this->width(), this->y());

    ui->actionConnect->setEnabled(true);
    ui->actionDisconnect->setEnabled(false);
    ui->actionQuit->setEnabled(true);
    ui->actionConfigure->setEnabled(true);

    initActionsConnections();

    connect(serial, SIGNAL(error(QSerialPort::SerialPortError)), this, SLOT(handleError(QSerialPort::SerialPortError)));
    //connect(serial, SIGNAL(readyRead()), this, SLOT(readData()));
    connect(console, SIGNAL(getData(QByteArray)), this, SLOT(writeData(QByteArray)));

    testModule = new PSOM(0);
    connect (testModule, SIGNAL(newPSOMData(void)), this,SLOT(newPSOMData(void)));
    connect (testModule, SIGNAL(statusBarInfo(QString)), this, SLOT(changeStatusbarInformation(QString)));

    // select all measurments
    //ui->cBSelectAll->setChecked(true);

    oscillopscope = new qOsci();
    QHBoxLayout scopeLayout;
    scopeLayout.addWidget(oscillopscope->getScreenWidget());
    ui->tabScope->setLayout(&scopeLayout);
    oscillopscope->setScreenSize(QSize(ui->tabScope->size()));

    // harmonics box
    harmonics = new qOsci(NULL, OfTypeHarmonics);
    ui->harmonicsGraphLayout->addWidget(harmonics->getScreenWidget());
    harmonics->setTableWidgetForHarmonics(ui->harmonicsTable);
    ui->cBHarmonicsCount->setCurrentIndex(4);
    connect (testModule, SIGNAL(newHarmonicsData(float*,float,int)),    // connect module with harmonics display
             harmonics, SLOT(setHarmonics(float*,float,int)));


    L1Data = new mDataHandler (this);
    L1Data->add("U1","Vrms");
    L1Data->add("I1","Irms");
    L1Data->add("P1","W");
    L1Data->add("Q1","VAR");
    L1Data->add("S1","VA");
    L1Data->add("λ1","");
    L1Data->add("E1","kWh");
    L1Data->add("M1","€");
    ui->layoutPhaseL1->addWidget(L1Data);

    L2Data = new mDataHandler (NULL);
    L2Data->add("U2","Vrms");
    L2Data->add("I2","Irms");
    L2Data->add("P2","W");
    L2Data->add("2","VAR");
    L2Data->add("S2","VA");
    L2Data->add("λ2","");
    L2Data->add("E2","kWh");
    L2Data->add("M2","€");
    ui->layoutPhaseL2->addWidget(L2Data);

    L3Data = new mDataHandler (this);
    L3Data->add("U3","Vrms");
    L3Data->add("I3","Irms");
    L3Data->add("P3","W");
    L3Data->add("Q3","VAR");
    L3Data->add("S3","VA");
    L3Data->add("λ3","");
    L3Data->add("E3","kWh");
    L3Data->add("M3","€");
    ui->layoutPhaseL3->addWidget(L3Data);

    LTData = new mDataHandler (this);
    LTData->add("UT","Vrms");
    LTData->add("IT","Irms");
    LTData->add("PT","W");
    LTData->add("QT","VAR");
    LTData->add("ST","VA");
    LTData->add("λT","");
    LTData->add("ET","kWh");
    LTData->add("MT","€");
    ui->layoutPhaseLT->addWidget(LTData);

    HData = new mDataHandler (this);
    int hc = 1;
    for (int i=1; i<=10;i++) {
        QString name = "H" + QString::number(hc);
        HData->add(name, "");
        hc += 2;
    }
    ui->harmonicsDataLayout->addWidget(HData);


}
MainWindow::~MainWindow() {
    delete settings;
    delete ui;
}
void MainWindow::openSerialPort() {
    SettingsDialog::Settings p = settings->settings();
    serial->setPortName(p.name);
    serial->setBaudRate(p.baudRate);
    serial->setDataBits(p.dataBits);
    serial->setParity(p.parity);
    serial->setStopBits(p.stopBits);
    serial->setFlowControl(p.flowControl);

    if (serial->open(QIODevice::ReadWrite)) {
        console->setEnabled(true);
        console->setLocalEchoEnabled(p.localEchoEnabled);
        ui->actionConnect->setEnabled(false);
        ui->actionDisconnect->setEnabled(true);
        ui->actionConfigure->setEnabled(false);

        testModule->setSerialConnectionHandler(serial);
    }
    else {
        testModule->setSerialConnectionHandler(NULL);
        QMessageBox::critical(this, tr("Error"), serial->errorString());

    }
}
void MainWindow::closeSerialPort() {
    if (serial->isOpen())
        serial->close();

    if (testModule != NULL)
        testModule->stopMeasurement();

    console->setEnabled(false);
    ui->actionConnect->setEnabled(true);
    ui->actionDisconnect->setEnabled(false);
    ui->actionConfigure->setEnabled(true);
}
void MainWindow::about() {
    QMessageBox::about(this, tr("About PowerLAB"),
                       tr("Test software for PSOM"
                          "® Nils Minor "));
}
void MainWindow::writeData(const QByteArray &data) {
    if (ui->tabWidget->currentIndex() == 0) {
        serial->write(data);
    }
}
void MainWindow::readData() {
    //QByteArray *data;
    //data = new QByteArray(serial->readAll());
    QByteArray data = serial->readAll();
    console->putData(data);
}
void MainWindow::handleError(QSerialPort::SerialPortError error) {
    if (error == QSerialPort::ResourceError) {
        QMessageBox::critical(this, tr("Critical Error"), serial->errorString());
        closeSerialPort();
    }
}

void MainWindow::changeStatusbarInformation(QString newInformation)
{
    ui->statusBar->showMessage(newInformation);
}
void MainWindow::initActionsConnections()
{
    connect(ui->actionConnect, SIGNAL(triggered()), this, SLOT(openSerialPort()));
    connect(ui->actionDisconnect, SIGNAL(triggered()), this, SLOT(closeSerialPort()));
    connect(ui->actionQuit, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->actionConfigure, SIGNAL(triggered()), settings, SLOT(show()));
    connect(ui->actionClear, SIGNAL(triggered()), console, SLOT(clear()));
    connect(ui->actionAbout, SIGNAL(triggered()), this, SLOT(about()));
    connect(ui->actionAboutQt, SIGNAL(triggered()), qApp, SLOT(aboutQt()));
    connect(ui->actionStart, SIGNAL(triggered()),this, SLOT(on_pushButtonStartMeasurment_released()));

    //
    connect (ui->actionHarmonics, SIGNAL(triggered( )), this, SLOT(handleActionHarmonics()));
    connect (ui->actionOscilloscope, SIGNAL(triggered( )), this, SLOT(handleActionOscilloscope()));
}

void MainWindow::handleActionOscilloscope (void) {
    ui->tabWidget->setCurrentIndex(1);
}

void MainWindow::handleActionHarmonics (void) {
    ui->tabWidget->setCurrentIndex(2);
}

void MainWindow::sendCommand(QByteArray cmd, double value) {
   QByteArray msg = cmd;
   msg.append(":");
   msg.append(QByteArray::number(value));
   msg.append(";");
   serial->write(msg);
}

// PSOM functions and callback

void MainWindow::newPSOMData(void)
{
    int accuracy = 3;
    // Phase 1
    ui->labelV1rms->setText (QString::number(testModule->getData().L1.voltage.rms,      'f', accuracy ));
    ui->labelI1rms->setText (QString::number(testModule->getData().L1.current.rms,      'f', accuracy ));
    ui->labelP1->setText    (QString::number(testModule->getData().L1.power.active,     'f', accuracy ));
    ui->labelQ1->setText    (QString::number(testModule->getData().L1.power.reactive,   'f', accuracy ));
    ui->labelS1->setText    (QString::number(testModule->getData().L1.power.apparent,   'f', accuracy ));
    ui->labelE1->setText    (QString::number(testModule->getData().L1.energy.active,    'f', accuracy ));
    ui->labelCost1->setText (QString::number(testModule->getData().L1.energy.cost,      'f', accuracy ));

    L1Data->setData("U1", 234.56789, 0);
    L1Data->setData("I1", testModule->getData().L1.current.rms, 0);
    L1Data->setData("P1", testModule->getData().L1.power.active, 0);
    L1Data->setData("Q1", testModule->getData().L1.power.reactive, 0);
    L1Data->setData("S1", testModule->getData().L1.power.apparent, 0);
    L1Data->setData("λ1", testModule->getData().L1.power.factor, 0);
    L1Data->setData("E1", testModule->getData().L1.energy.active, 0);
    L1Data->setData("M1", testModule->getData().L1.energy.cost, 0);


    L2Data->setData("U2", testModule->getData().L2.voltage.rms, 0);
    L2Data->setData("I2", testModule->getData().L2.current.rms, 0);
    L2Data->setData("P2", testModule->getData().L2.power.active, 0);
    L2Data->setData("Q2", testModule->getData().L2.power.reactive, 0);
    L2Data->setData("S2", testModule->getData().L2.power.apparent, 0);
    L2Data->setData("λ2", testModule->getData().L2.power.factor, 0);
    L2Data->setData("E2", testModule->getData().L2.energy.active, 0);
    L2Data->setData("M2", testModule->getData().L2.energy.cost, 0);


    L3Data->setData("U3", testModule->getData().L3.voltage.rms, 0);
    L3Data->setData("I3", testModule->getData().L3.current.rms, 0);
    L3Data->setData("P3", testModule->getData().L3.power.active, 0);
    L3Data->setData("Q3", testModule->getData().L3.power.reactive, 0);
    L3Data->setData("S3", testModule->getData().L3.power.apparent, 0);
    L3Data->setData("λ3", testModule->getData().L3.power.factor, 0);
    L3Data->setData("E3", testModule->getData().L3.energy.active, 0);
    L3Data->setData("M3", testModule->getData().L3.energy.cost, 0);


    LTData->setData("UT", testModule->getData().LT.voltage.rms, 0);
    LTData->setData("IT", testModule->getData().LT.current.rms, 0);
    LTData->setData("PT", testModule->getData().LT.power.active, 0);
    LTData->setData("QT", testModule->getData().LT.power.reactive, 0);
    LTData->setData("ST", testModule->getData().LT.power.apparent, 0);
    LTData->setData("λT", testModule->getData().LT.power.factor, 0);
    LTData->setData("ET", testModule->getData().LT.energy.active, 0);
    LTData->setData("MT", testModule->getData().LT.energy.cost, 0);


    ui->labelV2rms->setText (QString::number(testModule->getData().L2.voltage.rms,      'f', accuracy ));
    ui->labelI2rms->setText (QString::number(testModule->getData().L2.current.rms,      'f', accuracy ));
    ui->labelP2->setText    (QString::number(testModule->getData().L2.power.active,     'f', accuracy ));
    ui->labelQ2->setText    (QString::number(testModule->getData().L2.power.reactive,   'f', accuracy ));
    ui->labelS2->setText    (QString::number(testModule->getData().L2.power.apparent,   'f', accuracy ));
    ui->labelE2->setText    (QString::number(testModule->getData().L2.energy.active,    'f', accuracy ));
    ui->labelCost2->setText (QString::number(testModule->getData().L2.energy.cost,      'f', accuracy ));

    ui->labelV3rms->setText (QString::number(testModule->getData().L3.voltage.rms,      'f', accuracy ));
    ui->labelI3rms->setText (QString::number(testModule->getData().L3.current.rms,      'f', accuracy ));
    ui->labelP3->setText    (QString::number(testModule->getData().L3.power.active,     'f', accuracy ));
    ui->labelQ3->setText    (QString::number(testModule->getData().L3.power.reactive,   'f', accuracy ));
    ui->labelS3->setText    (QString::number(testModule->getData().L3.power.apparent,   'f', accuracy ));
    ui->labelE3->setText    (QString::number(testModule->getData().L3.energy.active,    'f', accuracy ));
    ui->labelCost3->setText (QString::number(testModule->getData().L3.energy.cost,      'f', accuracy ));

    ui->labelVTrms->setText (QString::number(testModule->getData().LT.voltage.rms,      'f', accuracy ));
    ui->labelITrms->setText (QString::number(testModule->getData().LT.current.rms,      'f', accuracy ));
    ui->labelPT->setText    (QString::number(testModule->getData().LT.power.active,     'f', accuracy ));
    ui->labelQT->setText    (QString::number(testModule->getData().LT.power.reactive,   'f', accuracy ));
    ui->labelST->setText    (QString::number(testModule->getData().LT.power.apparent,   'f', accuracy ));
    ui->labelET->setText    (QString::number(testModule->getData().LT.energy.active,    'f', accuracy ));
    ui->labelCostT->setText (QString::number(testModule->getData().LT.energy.cost,      'f', accuracy ));




    ui->labelLineFreq->setText  (QString::number(testModule->getData().frequency,'f', accuracy ));
    ui->labelModuleTemp->setText  (QString::number(testModule->getData().sensor_temperature,'f', accuracy ));
    ui->labelCirculationFreq->setText  (QString::number(testModule->getData().circulationTime,'f', accuracy ));
    ui->labelCirculationTime->setText  (QString::number(testModule->getData().circulationFrequency,'f', accuracy ));

}
void MainWindow::on_pushButtonStopMeasurment_released () {
    qDebug() << "Stop testModule";
    testModule->stopMeasurement();
}
void MainWindow::on_pushButtonStartMeasurment_released () {
    qDebug() << "Start testModule";
    testModule->startMeasurement(100);
}




void MainWindow::on_cBDIO1_released()
{
    if (ui->cBDIO1->isChecked())
        testModule->setDIO(PSOM_DIO1, PSOM_DIO_HIGH);
    else
        testModule->setDIO(PSOM_DIO1, PSOM_DIO_LOW);
}
void MainWindow::on_cBDIO2_released()
{
    if (ui->cBDIO2->isChecked())
        testModule->setDIO(PSOM_DIO2, PSOM_DIO_HIGH);
    else
        testModule->setDIO(PSOM_DIO2, PSOM_DIO_LOW);
}
void MainWindow::on_cBDIO3_released()
{
    if (ui->cBDIO3->isChecked())
        testModule->setDIO(PSOM_DIO3, PSOM_DIO_HIGH);
    else
        testModule->setDIO(PSOM_DIO3, PSOM_DIO_LOW);
}
void MainWindow::on_cBDIO4_released()
{
    if (ui->cBDIO4->isChecked())
        testModule->setDIO(PSOM_DIO4, PSOM_DIO_HIGH);
    else
        testModule->setDIO(PSOM_DIO4, PSOM_DIO_LOW);
}
void MainWindow::on_cBDIO5_released()
{
    if (ui->cBDIO5->isChecked())
        testModule->setDIO(PSOM_DIO5, PSOM_DIO_HIGH);
    else
        testModule->setDIO(PSOM_DIO5, PSOM_DIO_LOW);
}
void MainWindow::on_cBDIO6_released()
{
    if (ui->cBDIO6->isChecked())
        testModule->setDIO(PSOM_DIO6, PSOM_DIO_HIGH);
    else
        testModule->setDIO(PSOM_DIO6, PSOM_DIO_LOW);
}

void MainWindow::on_pBUpdateDirAllOutput_released()
{
    qDebug() << "Set all DIOs to OUTPUT";
    testModule->setDIODir(PSOM_DIO1, PSOM_DIO_OUTPUT);
    testModule->setDIODir(PSOM_DIO2, PSOM_DIO_OUTPUT);
    testModule->setDIODir(PSOM_DIO3, PSOM_DIO_OUTPUT);
    testModule->setDIODir(PSOM_DIO4, PSOM_DIO_OUTPUT);
    testModule->setDIODir(PSOM_DIO5, PSOM_DIO_OUTPUT);
    testModule->setDIODir(PSOM_DIO6, PSOM_DIO_OUTPUT);

}
void MainWindow::on_pBUpdateDirAllInput_released()
{
    qDebug() << "Set all DIOs to INPUT";
    testModule->setDIODir(PSOM_DIO1, PSOM_DIO_INPUT);
    testModule->setDIODir(PSOM_DIO2, PSOM_DIO_INPUT);
    testModule->setDIODir(PSOM_DIO3, PSOM_DIO_INPUT);
    testModule->setDIODir(PSOM_DIO4, PSOM_DIO_INPUT);
    testModule->setDIODir(PSOM_DIO5, PSOM_DIO_INPUT);
    testModule->setDIODir(PSOM_DIO6, PSOM_DIO_INPUT);
}

void MainWindow::on_pushButtonVersion_released()
{
    ui->labelFWVersion->setText(testModule->getFWVersion() );
}

void MainWindow::on_pBStartHarmonics_released()
{
    if (ui->pBStartHarmonics->text() == "Start") {
        ui->pBStartHarmonics->setText("Stop");

        testModule->stopHarmonicsScan();

        for (long i=0; i!= 10000;i++) { }

        testModule->startHarmonicsScan(VoltageHarmonics);
    }
    else {
        ui->pBStartHarmonics->setText("Start");
        testModule->stopHarmonicsScan();
    }


    testModule->startMeasurement(100);
}
void MainWindow::on_cBHarmonicsType_currentIndexChanged(const QString &arg1)
{
    if (arg1 == "Voltage")                  { harmonics->setVerticalAxisStyle(VoltageAxisStyle); }
    else if  (arg1 == "Current")            { harmonics->setVerticalAxisStyle(CurrentAxisStyle); }
    else if  (arg1 == "Active Power")       { harmonics->setVerticalAxisStyle(PPowerAxisStyle); }
    else if  (arg1 == "Reactive Power")     { harmonics->setVerticalAxisStyle(QPowerAxisStyle); }
    else                                    { }
}
void MainWindow::on_cBHarmonicsAxisStyle_currentIndexChanged(const QString &arg1)
{
    if (arg1 == "Frequency")                { harmonics->setHarmonicsAxisStyle(FrequencyAxisStyle); }
    else if  (arg1 == "Harmonic")           { harmonics->setHarmonicsAxisStyle(HarmonicNumberAxisStyle); }
    else                                    { }
}

void MainWindow::on_tabWidget_currentChanged(int index)
{
    switch (index) {
        case (0):   // Panel
        break;
        case (1):   // Scope
        break;
        case (2):   // Harmonics
        break;
        case (3):   // Misc
        break;
    }
}

void MainWindow::on_pBSetHarmonicsCount_released()
{

    int count = ui->cBHarmonicsCount->currentText().toInt();
    testModule->setHarmonicsCount(count);
}

void MainWindow::on_pBTriggerHarmonics_released()
{
    testModule->startHarmonicsScan(VoltageHarmonics);
}


