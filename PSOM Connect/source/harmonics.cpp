#include "mainwindow.h"

void MainWindow::on_pBStartHarmonics_released()
{
    if (ui->pBStartHarmonics->text() == "Start") {
        ui->pBStartHarmonics->setText("Stop");

        //testModule->stopHarmonicsScan();
        // testModule->startHarmonicsScan(VoltageHarmonics);
    }
    else {
        ui->pBStartHarmonics->setText("Start");
        testModule->stopHarmonicsScan();
    }


    testModule->startMeasurement(100);
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
void MainWindow::on_pushButtonHarmonicsHome_released()
{
    on_pushButtonPanelHome_released();
}
