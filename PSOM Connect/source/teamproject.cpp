#include "mainwindow.h"


void MainWindow::teamprojectInitSettings (void) {
    ui->evseImageWidget->setStyleSheet("background-image: url(:/images/unplugged.png)");

    for (int i=0;i!=100;i++) {
        ui->comboBoxPWM1->addItem(QString::number(i));
    }
}
void MainWindow::on_pushButtonStartCharging_released()
{
    ui->evseImageWidget->setStyleSheet("background-image: url(:/images/plugged.png)");
    ui->pushButtonStartCharging->setEnabled(false);
    ui->pushButtonStopCharging->setEnabled(true);
    logger.create("EV-record");
    EVSErecording = true;
    on_cBHarmonicsType_currentIndexChanged("Current");
    on_pBStartHarmonics_released();
}
void MainWindow::on_pushButtonStopCharging_released()
{
    ui->evseImageWidget->setStyleSheet("background-image: url(:/images/unplugged.png)");
    ui->pushButtonStartCharging->setEnabled(true);
    ui->pushButtonStopCharging->setEnabled(false);
    EVSErecording = false;
}
void MainWindow::on_pushButtonEVSEHome_released()
{
    on_pushButtonPanelHome_released();
}
void MainWindow::rpiStartup()
{
    ui->mainToolBar->hide();
    ui->toolBar->hide();

    // connect to fixed comport
    serial->setPortName("/dev/ttyAMA0");
    serial->setBaudRate(QSerialPort::Baud115200);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::OddParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);
    ui->lineEditLogFileName->setText("/home/pi/Documents/log/logfile");

    if (serial->open(QIODevice::ReadWrite)) {
        console->setEnabled(true);
        console->setLocalEchoEnabled(false);
        ui->actionConnect->setEnabled(false);
        ui->actionDisconnect->setEnabled(true);
        ui->actionConfigure->setEnabled(false);

        testModule->setSerialConnectionHandler(serial);
        this->on_pushButtonStartMeasurment_released();
    }
    else {
        testModule->setSerialConnectionHandler(NULL);
        QMessageBox::critical(this, tr("Error can not connect to COM Port"), serial->errorString());
    }
}
void MainWindow::on_comboBoxPWM1_currentIndexChanged(int index)
{
    testModule->pwm_set(index);
}

