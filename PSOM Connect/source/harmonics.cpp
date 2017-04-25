#include "mainwindow.h"


void MainWindow::initHarmonicSettings (void) {
    // harmonics box
    harmonics = new qOsci(NULL, OfTypeHarmonics);
    ui->harmonicsGraphLayout->addWidget(harmonics->getScreenWidget()) ;
    ui->cBHarmonicsCount->setCurrentIndex(4);
    connect (testModule, SIGNAL(newHarmonicsData(float*,float,int,int)),    // connect module with harmonics display
             harmonics, SLOT(setHarmonics(float*,float,int,int)));

    connect (testModule, SIGNAL(harmonicMeasurmentReady()), this, SLOT(on_autoHarmonicMeasurement()));
    connect (testModule, SIGNAL(updateActualHarmonic(int)), harmonics, SLOT(updateActualHarmonic(int)));        // update actual harmonic

    HData = new mDataHandler (this);

    for (int i=1; i<=11;i++) {
        QString name = "H" + QString::number(i);
        HData->add(name, "");
    }

    HData->add("Uthd1","%");
    HData->add("Uthd2","%");
    HData->add("Uthd3","%");
    HData->add("Ithd1","%");
    HData->add("Ithd2","%");
    HData->add("Ithd3","%");
    ui->harmonicsDataLayout->addWidget(HData);
}

void MainWindow::on_pBStartHarmonics_released()
{
    if (ui->pBStartHarmonics->text() == "Start") {
        ui->pBStartHarmonics->setText("Stop");

       harmonicsAutoTrigger = true;
       on_pBTriggerHarmonics_released();
    }
    else {
        ui->pBStartHarmonics->setText("Start");
        harmonicsAutoTrigger = false;

    }
}
void MainWindow::on_cBHarmonicsType_currentIndexChanged(const QString &arg1)
{
    if (arg1 == "Voltage") { harmonics->setVerticalAxisStyle(VoltageAxisStyle);  }
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
void MainWindow::on_pBSetHarmonicsCount_released()
{
    int count = ui->cBHarmonicsCount->currentText().toInt();
    testModule->setHarmonicsCount(count);
}
void MainWindow::on_pBTriggerHarmonics_released()
{
    switch (ui->cBHarmonicsType->currentIndex()) {
    case 0:
         testModule->startHarmonicsScan(VoltageHarmonics);
        break;
    case 1:
         testModule->startHarmonicsScan(CurrentHarmonics);
        break;
    case 2:
         testModule->startHarmonicsScan(PPowerHarmonics);
        break;
    case 3:
         testModule->startHarmonicsScan(QPowerHarmonics);
        break;
    default:
        break;
    }
}

void MainWindow::on_autoHarmonicMeasurement()
{

    emit harmonicsMeasurementReady();
    if(harmonicsAutoTrigger) {
        on_pBTriggerHarmonics_released();
    }
}
void MainWindow::on_pushButtonHarmonicsHome_released()
{
    on_pushButtonPanelHome_released();
}
