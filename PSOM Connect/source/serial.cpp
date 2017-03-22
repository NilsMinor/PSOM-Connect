#include "mainwindow.h"

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
}
void MainWindow::sendCommand(QByteArray cmd, double value) {
   QByteArray msg = cmd;
   msg.append(":");
   msg.append(QByteArray::number(value));
   msg.append(";");
   serial->write(msg);
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

