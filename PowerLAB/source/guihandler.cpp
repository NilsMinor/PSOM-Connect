#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "console.h"
#include "settingsdialog.h"

#include <QMessageBox>
#include <QLabel>
#include <QtSerialPort/QSerialPort>


void MainWindow::on_cBSelectAll_toggled(bool checked)
{
   if (checked) {
        ui->cBTemperature->setChecked(true);
        ui->cBFrequency->setChecked(true);
        ui->cBInstVoltage->setChecked(true);
        ui->cBRMSVoltage->setChecked(true);
        ui->cBInstCurrent->setChecked(true);
        ui->cBRMSCurrent->setChecked(true);

        ui->cBFundamentalTHD->setChecked(true);
        ui->cBActivePower->setChecked(true);
        ui->cBReactivePower->setChecked(true);
        ui->cBApparentPower->setChecked(true);

        ui->cBPowerFactor->setChecked(true);
        ui->cBEnergy->setChecked(true);
        ui->cBSelectAll->setText("Unselect all");
    } else {
        ui->cBTemperature->setChecked(false);
        ui->cBFrequency->setChecked(false);
        ui->cBInstVoltage->setChecked(false);
        ui->cBRMSVoltage->setChecked(false);
        ui->cBInstCurrent->setChecked(false);
        ui->cBRMSCurrent->setChecked(false);

        ui->cBFundamentalTHD->setChecked(false);
        ui->cBActivePower->setChecked(false);
        ui->cBReactivePower->setChecked(false);
        ui->cBApparentPower->setChecked(false);
        ui->cBPowerFactor->setChecked(false);
        ui->cBEnergy->setChecked(false);
        ui->cBSelectAll->setText("Select all");
    }
}

void MainWindow::on_cBTemperature_toggled(bool checked)
{
    Q_UNUSED(checked);
    if (testModule != NULL) {
        testModule->selectMeasurement(PSOM_SEL_TEMPERATURE,  checked);
    }
}
void MainWindow::on_cBFrequency_toggled(bool checked)
{
    Q_UNUSED(checked);
    if (testModule != NULL) {
        testModule->selectMeasurement(PSOM_SEL_FREQUENCY,  checked);
    }
}
void MainWindow::on_cBInstVoltage_toggled(bool checked)
{
    Q_UNUSED(checked);
    if (testModule != NULL) {
        testModule->selectMeasurement(PSOM_SEL_VOLTAGE_INST,  checked);
    }
}
void MainWindow::on_cBRMSVoltage_toggled(bool checked)
{
    Q_UNUSED(checked);
    if (testModule != NULL) {
        testModule->selectMeasurement(PSOM_SEL_VOLTAGE_RMS,  checked);
    }
}
void MainWindow::on_cBInstCurrent_toggled(bool checked)
{
    Q_UNUSED(checked);
    if (testModule != NULL) {
        testModule->selectMeasurement(PSOM_SEL_CURRENT_INST,  checked);
    }
}
void MainWindow::on_cBRMSCurrent_toggled(bool checked)
{
    Q_UNUSED(checked);
    if (testModule != NULL) {
        testModule->selectMeasurement(PSOM_SEL_CURRENT_RMS,  checked);
    }
}
void MainWindow::on_cBFundamentalTHD_toggled(bool checked)
{
    Q_UNUSED(checked);
    if (testModule != NULL) {
        testModule->selectMeasurement(PSOM_SEL_FUND_THD,  checked);
    }
}
void MainWindow::on_cBActivePower_toggled(bool checked)
{
    Q_UNUSED(checked);
    if (testModule != NULL) {
        testModule->selectMeasurement(PSOM_SEL_POWER_ACTIVE,  checked);
    }
}
void MainWindow::on_cBReactivePower_toggled(bool checked)
{
    Q_UNUSED(checked);
    if (testModule != NULL) {
        testModule->selectMeasurement(PSOM_SEL_POWER_REACTIVE,  checked);
    }
}
void MainWindow::on_cBApparentPower_toggled(bool checked)
{
    Q_UNUSED(checked);
    if (testModule != NULL) {
        testModule->selectMeasurement(PSOM_SEL_POWER_APPARENT,  checked);
    }
}
void MainWindow::on_cBPowerFactor_toggled(bool checked)
{
    Q_UNUSED(checked);
    if (testModule != NULL) {
        testModule->selectMeasurement(PSOM_SEL_POWER_FACTOR,  checked);
    }
}
void MainWindow::on_cBEnergy_toggled(bool checked)
{
    Q_UNUSED(checked);
    if (testModule != NULL) {
        testModule->selectMeasurement(PSOM_SEL_ENERGY,  checked);
    }
}

