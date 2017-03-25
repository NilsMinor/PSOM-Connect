#include "mainwindow.h"

void MainWindow::on_pushButtonStopMeasurment_released () {
    qDebug() << "Stop testModule";
    testModule->stopMeasurement();
}
void MainWindow::on_pushButtonStartMeasurment_released () {
    qDebug() << "Start testModule";
    testModule->startMeasurement(1000 / ui->comboBoxCirculationFreq->currentText().toInt());
}
void MainWindow::on_pBClearEnergyL1_released()
{
    testModule->sendSCMD(PSOM_SCMD_CLR_ENERGY_L1);
}
void MainWindow::on_pBClearEnergyL2_released()
{
    testModule->sendSCMD(PSOM_SCMD_CLR_ENERGY_L2);
}
void MainWindow::on_pBClearEnergyL3_released()
{
    testModule->sendSCMD(PSOM_SCMD_CLR_ENERGY_L3);
}
void MainWindow::on_pBClearEnergyLT_released()
{
    testModule->sendSCMD(PSOM_SCMD_CLR_ENERGY_ALL);
}
void MainWindow::on_comboBoxCirculationFreq_currentIndexChanged(int index)
{
    Q_UNUSED(index);
    testModule->stopMeasurement();
    qDebug() << "Change circulation frequency";
    testModule->startMeasurement(1000/ui->comboBoxCirculationFreq->currentText().toInt());
}
void MainWindow::on_pushButtonPanelHome_released()
{
    ui->tabWidget->setCurrentIndex(0);
}
void MainWindow::on_comboBoxErrorStyle_currentIndexChanged(int index)
{
    switch (index) {
    case 0: // Absolute error
        L1Data->setErrorStyle(absolute);
        L2Data->setErrorStyle(absolute);
        L3Data->setErrorStyle(absolute);
        LTData->setErrorStyle(absolute);
        break;
    case 1: // Relative error
        L1Data->setErrorStyle(relative);
        L2Data->setErrorStyle(relative);
        L3Data->setErrorStyle(relative);
        LTData->setErrorStyle(relative);
        break;
    case 2: // Absolute error %
        L1Data->setErrorStyle(absolute_percent);
        L2Data->setErrorStyle(absolute_percent);
        L3Data->setErrorStyle(absolute_percent);
        LTData->setErrorStyle(absolute_percent);
        break;
    }
}
