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




// Serial Port and window functions
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    this->initSerialSettings();

    testModule = new PSOM(0);
    connect (testModule, SIGNAL(newPSOMData(void)), this,SLOT(newPSOMData(void)));
    connect (testModule, SIGNAL(statusBarInfo(QString)), this, SLOT(changeStatusbarInformation(QString)));

    this->initOscilloscopeSettings();
    this->initHarmonicSettings();

    // callibration
    connect (testModule, SIGNAL(updateCalData(uint32_t*)), this, SLOT(updateCalData(uint32_t*)));

    L1Data = new mDataHandler (this);
    L1Data->add("U1","V");
    L1Data->add("I1","A");
    L1Data->add("P1","W");
    L1Data->add("Q1","VAR");
    L1Data->add("S1","VA");
    L1Data->add("λ1","");
    L1Data->add("EP1","kWh");
    L1Data->add("EQ1","kWh");
    L1Data->add("M1","€");
    ui->layoutPhaseL1->addWidget(L1Data);

    L2Data = new mDataHandler (NULL);
    L2Data->add("U2","V");
    L2Data->add("I2","A");
    L2Data->add("P2","W");
    L2Data->add("2","VAR");
    L2Data->add("S2","VA");
    L2Data->add("λ2","");
    L2Data->add("EP2","kWh");
    L2Data->add("EQ2","kWh");
    L2Data->add("M2","€");
    ui->layoutPhaseL2->addWidget(L2Data);

    L3Data = new mDataHandler (this);
    L3Data->add("U3","V");
    L3Data->add("I3","A");
    L3Data->add("P3","W");
    L3Data->add("Q3","VAR");
    L3Data->add("S3","VA");
    L3Data->add("λ3","");
    L3Data->add("EP3","kWh");
    L3Data->add("EQ3","kWh");
    L3Data->add("M3","€");
    ui->layoutPhaseL3->addWidget(L3Data);

    LTData = new mDataHandler (this);
    LTData->add("UT","V");
    LTData->add("IT","A");
    LTData->add("PT","W");
    LTData->add("QT","VAR");
    LTData->add("ST","VA");
    LTData->add("λT","");
    LTData->add("EPT","kWh");
    LTData->add("EQT","kWh");
    LTData->add("MT","€");
    ui->layoutPhaseLT->addWidget(LTData);




    Common = new mDataHandler (this);
    Common->add("F", "Hz");
    Common->add("Temp", "°C");
    Common->add("Circ T", "ms");
    Common->add("Circ F", "°Hz");
    ui->layoutCommonPanelData->addWidget(Common);

    logger.add(L1Data);
    logger.add(L2Data);
    logger.add(L3Data);
    logger.add(LTData);
    logger.add(Common);
    connect (&logger, SIGNAL(newDataLogged(int,qint64)), this, SLOT(updateLoggingInformation(int, qint64)));

    #ifdef Q_OS_WIN
        wt500 = new QWT500Widget(NULL);
        ui->wt500Layout->addWidget(wt500);
        connect (wt500, SIGNAL(newDataMeasured(mDataHandler*,mDataHandler*,mDataHandler*,mDataHandler*)),
                        this, SLOT(updateErrorData(mDataHandler*,mDataHandler*,mDataHandler*,mDataHandler*)));
    #endif

     ui->evseImageWidget->setStyleSheet("background-image: url(:/images/unplugged.png)");
}
MainWindow::~MainWindow() {
    delete settings;
    delete ui;
}

void MainWindow::newPSOMData(void)
{
    L1Data->setData("U1", testModule->getData().L1.voltage.rms, 0);
    L1Data->setData("I1", testModule->getData().L1.current.rms, 0);
    L1Data->setTarget("I1", qRound( testModule->getData().L1.current.rms));
    L1Data->setData("P1", testModule->getData().L1.power.active, 0);
    L1Data->setData("Q1", testModule->getData().L1.power.reactive, 0);
    L1Data->setData("S1", testModule->getData().L1.power.apparent, 0);
    L1Data->setData("λ1", testModule->getData().L1.power.factor, 0);
    L1Data->setData("EP1", testModule->getData().L1.energy.active, 0);
    L1Data->setData("EQ1", testModule->getData().L1.energy.reactive, 0);
    L1Data->setData("M1", testModule->getData().L1.energy.cost, 0);


    L2Data->setData("U2", testModule->getData().L2.voltage.rms, 0);
    L2Data->setData("I2", testModule->getData().L2.current.rms, 0);
    L2Data->setData("P2", testModule->getData().L2.power.active, 0);
    L2Data->setData("Q2", testModule->getData().L2.power.reactive, 0);
    L2Data->setData("S2", testModule->getData().L2.power.apparent, 0);
    L2Data->setData("λ2", testModule->getData().L2.power.factor, 0);
    L2Data->setData("EP2", testModule->getData().L2.energy.active, 0);
    L2Data->setData("EQ2", testModule->getData().L2.energy.active, 0);
    L2Data->setData("M2", testModule->getData().L2.energy.cost, 0);


    L3Data->setData("U3", testModule->getData().L3.voltage.rms, 0);
    L3Data->setData("I3", testModule->getData().L3.current.rms, 0);
    L3Data->setData("P3", testModule->getData().L3.power.active, 0);
    L3Data->setData("Q3", testModule->getData().L3.power.reactive, 0);
    L3Data->setData("S3", testModule->getData().L3.power.apparent, 0);
    L3Data->setData("λ3", testModule->getData().L3.power.factor, 0);
    L3Data->setData("EP3", testModule->getData().L3.energy.active, 0);
    L3Data->setData("EQ3", testModule->getData().L3.energy.active, 0);
    L3Data->setData("M3", testModule->getData().L3.energy.cost, 0);


    LTData->setData("UT", testModule->getData().LT.voltage.rms, 0);
    LTData->setData("IT", testModule->getData().LT.current.rms, 0);
    LTData->setData("PT", testModule->getData().LT.power.active, 0);
    LTData->setData("QT", testModule->getData().LT.power.reactive, 0);
    LTData->setData("ST", testModule->getData().LT.power.apparent, 0);
    LTData->setData("λT", testModule->getData().LT.power.factor, 0);
    LTData->setData("ET", testModule->getData().LT.energy.active, 0);
    LTData->setData("MT", testModule->getData().LT.energy.cost, 0);

    Common->setData("F", testModule->getData().frequency, 0);
    Common->setData("Temp", testModule->getData().sensor_temperature, 0);
    Common->setData("Circ T", testModule->getData().circulationTime, 0);
    Common->setData("Circ F", testModule->getData().circulationFrequency, 0);

    for (int i=1; i<= HData->getCount(); i++) {
        QString name = "H" + QString::number(i);
        HData->setData(name,testModule->getData().L1.harmonic.contentL1[ i - 1]);
    }
}


// menu
void MainWindow::on_pushButtonPanel_released()
{
    ui->tabWidget->setCurrentIndex(TAB_PANEL);
}
void MainWindow::on_pushButtonScope_released()
{
    ui->tabWidget->setCurrentIndex(TAB_SCOPE);
}
void MainWindow::on_pushButtonHarmonics_released()
{
    ui->tabWidget->setCurrentIndex(TAB_HARMONICS);
}
void MainWindow::on_pushButtonLogging_released()
{
    ui->tabWidget->setCurrentIndex(TAB_LOGGING);
}
void MainWindow::on_pushButtonQWT500_released()
{
    ui->tabWidget->setCurrentIndex(TAB_QWT500);
}
void MainWindow::on_pushButtonCalibration_released()
{
    ui->tabWidget->setCurrentIndex(TAB_CALIBRATION);
}
void MainWindow::on_pushButtonEVSE_released()
{
    ui->tabWidget->setCurrentIndex(TAB_EVSE);
}
void MainWindow::on_pushButtonInformation_released()
{
    QMessageBox messageBox;
     //messageBox.setIcon(QIcon( ":/images/information.svg"));
     messageBox.setText("This software was written as part of the PSOM project. "
                        "For further Informations check www.nilsminor.de.  "
                        "THE SOFTWARE IS PROVIDED -AS IS-, WITHOUT WARRANTY OF ANY KIND ");
     messageBox.setWindowTitle("Information");
     messageBox.exec();
}
void MainWindow::on_pushButtonExit_released()
{
    QCoreApplication::quit();
}


// qwt500
void MainWindow::on_pushButtonQWT500Home_released()
{
    on_pushButtonPanelHome_released();
}
void MainWindow::updateErrorData(mDataHandler *L1, mDataHandler *L2, mDataHandler *L3, mDataHandler *LT)
{
    L1Data->assignTargetDataByList(L1);
    L2Data->assignTargetDataByList(L2);
    L3Data->assignTargetDataByList(L3);
    LTData->assignTargetDataByList(LT);
}
















