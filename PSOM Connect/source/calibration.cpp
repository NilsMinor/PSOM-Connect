#include "mainwindow.h"

void MainWindow::on_comboBoxCalType_currentIndexChanged(int index)
{
    switch (index)
    {
    case 0: // Voltage
        ui->comboBoxVoltageCalValue->setEnabled(true);
        ui->labelVoltageCalUnit->setEnabled(true);
        ui->comboBoxCurrentCalValue->setEnabled(false);
        ui->labelCurrentCalUnit->setEnabled(false);
        break;

    case 1: // Current
        ui->comboBoxVoltageCalValue->setEnabled(false);
        ui->labelVoltageCalUnit->setEnabled(false);
        ui->comboBoxCurrentCalValue->setEnabled(true);
        ui->labelCurrentCalUnit->setEnabled(true);
        break;
    }
}
void MainWindow::on_pushButtonLoadCalibration_released()
{
    testModule->loadCalibrationData( );
    //delay(500);
}
void MainWindow::on_pushButtonCalibrationHome_released()
{
    on_pushButtonPanelHome_released();
}
void MainWindow::on_pushButtonCalibrateOffset_released()
{
    switch (ui->comboBoxCalPhase->currentIndex())
    {
    case (0):   testModule->sendSCMD(PSOM_SCMD_CALLIB_OFF1);    // Calibrate OFFSET of L1
        break;
    case (1):   testModule->sendSCMD(PSOM_SCMD_CALLIB_OFF2);    // Calibrate OFFSET of L1
        break;
    case (2):   testModule->sendSCMD(PSOM_SCMD_CALLIB_OFF3);    // Calibrate OFFSET of L1
        break;
    }
}
void MainWindow::on_pushButtonCalibrateGain_released()
{
    switch (ui->comboBoxCalPhase->currentIndex())
    {
    case (0):   testModule->sendSCMD(PSOM_SCMD_CALLIB_V1);
        break;
    case (1):   testModule->sendSCMD(PSOM_SCMD_CALLIB_V2);
        break;
    case (2):   testModule->sendSCMD(PSOM_SCMD_CALLIB_V3);
        break;
    }
}

void MainWindow::on_comboBoxVoltageCalValue_currentIndexChanged(const QString &arg1)
{
    testModule->writeSCMDValue(arg1.toFloat());
}
void MainWindow::on_comboBoxCurrentCalValue_currentIndexChanged(const QString &arg1)
{
    testModule->writeSCMDValue(arg1.toFloat());
}
void MainWindow::updateCalData(uint32_t *cal)
{
    int datacounter =0;
    for (int cidx = 0 ; cidx < 2 ; cidx++ ) {
        for (int ridx = 0 ; ridx < 6 ; ridx++) {
          QTableWidgetItem* item = new QTableWidgetItem();
          item->setText(QString::number(cal[datacounter++]));
          ui->tableWidgetCalData->setItem(ridx, cidx, item);
        }
    }
}
