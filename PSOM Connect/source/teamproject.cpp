#include "mainwindow.h"

QDateTime mStartTime;

static void delay (int sec) {
    QTime dieTime= QTime::currentTime().addSecs(sec);
     while (QTime::currentTime() < dieTime)
         QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}


void MainWindow::teamprojectInitSettings (void) {
    ui->evseImageWidget->setStyleSheet("background-image: url(:/images/unplugged.png)");

    teamProjectTimer = new QTimer ();
    connect(teamProjectTimer, SIGNAL(timeout()), this, SLOT(showTime()));

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
    if (teamProjectTimer != NULL)
         teamProjectTimer->start(1000);

    mStartTime = QDateTime::currentDateTime();
    delay (1);
    on_cBHarmonicsType_currentIndexChanged("Current");


    //delay (1);
    //on_pBStartHarmonics_released();
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

void MainWindow::showTime()
{
    qint64 ms = mStartTime.msecsTo(QDateTime::currentDateTime());
    int h = ms / 1000 / 60 / 60;
    int m = (ms / 1000 / 60) - (h * 60);
    int s = (ms / 1000) - (m * 60);
    //ms = ms - (s * 1000);
    const QString diff = QString("%1:%2:%3")
                                    .arg(h,  2, 10, QChar('0'))
                                    .arg(m,  2, 10, QChar('0'))
                                    .arg(s,  2, 10, QChar('0'));
    ui->lcdNumberTime->display(diff);

    ui->labelEVSEEnergy->setText(QString::number(testModule->getData().L1.energy.active));
    ui->labelEVSECosts->setText(QString::number(testModule->getData().L1.energy.cost));

}

