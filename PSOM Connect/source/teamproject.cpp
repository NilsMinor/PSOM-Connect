#include "mainwindow.h"
#include <QProcess>

QDateTime mStartTime;



void MainWindow::teamprojectInitSettings (void) {
    ui->evseImageWidget->setStyleSheet("background-image: url(:/images/unplugged.png)");

    teamProjectTimer = new QTimer ();
    connect(teamProjectTimer, SIGNAL(timeout()), this, SLOT(showTime()));
    connect (testModule, SIGNAL(harmonicMeasurmentReady()),this,SLOT(harmonicsReady()));

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


    mStartTime = QDateTime::currentDateTime();
    delay (20);
    testModule->setHarmonicsCount(11);
    delay (20);

    QMessageBox msgBox; msgBox.setText(tr("Start charging process ?"));
    QAbstractButton* pButtonYes = msgBox.addButton(tr("Yes"),
    QMessageBox::YesRole);
    msgBox.addButton(tr("No"), QMessageBox::NoRole);
    msgBox.exec();

    if (msgBox.clickedButton()==pButtonYes) {
        harmonicsAutoTrigger = true;
        logger.create(ui->lineEditLogEVSE->text());
        on_pBStartHarmonics_released ();
        if (teamProjectTimer != NULL)
             teamProjectTimer->start(1000);
    }
}
void MainWindow::on_pushButtonStopCharging_released()
{
    logger.disableLogging();
    teamProjectTimer->stop();
    ui->evseImageWidget->setStyleSheet("background-image: url(:/images/unplugged.png)");
    ui->pushButtonStartCharging->setEnabled(true);
    ui->pushButtonStopCharging->setEnabled(false);

    QString str = QString("Charged energy: %1\nCosts:: %2\nTime: %3")
            .arg(testModule->getData().L1.energy.active)
            .arg(testModule->getData().L1.energy.cost)
            .arg(chargingTime);
    QMessageBox msgBox;
    msgBox.setText(str);
    msgBox.exec();

    EVSErecording = false;
}
void MainWindow::on_pushButtonEVSEHome_released()
{
    QMessageBox msgBox; msgBox.setText(tr("Charging stopped"));
    msgBox.exec();
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
    ui->lineEditLogEVSE->setText("/home/pi/Documents/log/evse");

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
void MainWindow::showTime()
{
    qint64 ms = mStartTime.msecsTo(QDateTime::currentDateTime());
    int h = ms / 1000 / 60 / 60;
    int m = (ms / 1000 / 60) - (h * 60);
    int s = (ms / 1000) - (m * 60);
    //ms = ms - (s * 1000);
    chargingTime = QString("%1:%2:%3")
                                    .arg(h,  2, 10, QChar('0'))
                                    .arg(m,  2, 10, QChar('0'))
                                    .arg(s,  2, 10, QChar('0'));
    ui->lcdNumberTime->display(chargingTime);

    ui->labelEVSEEnergy->setText(QString::number(testModule->getData().L1.energy.active));
    ui->labelEVSECosts->setText(QString::number(testModule->getData().L1.energy.cost));
    ui->labelEVSELoggedLines->setText(QString::number(logger.getLoggedLines()));
}
void MainWindow::harmonicsReady()
{
    if (EVSErecording)
        logger.log();
}

void MainWindow::on_pushButtonCopyFilesToStick_released()
{
    // run the script for the teamproject in order to copy the log folder to an USB stick
    QString fileName ("/home/pi/backupLogs.sh");
    if (QProcess::execute(QString("/bin/sh") + fileName) < 0)
        changeStatusbarInformation("Failed to copy LOG folder");
    else
        changeStatusbarInformation("Log folder cloned!");
}
