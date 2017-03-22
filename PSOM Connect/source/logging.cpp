#include "mainwindow.h"

void MainWindow::on_pushButtonStartLogging_released()
{
    if (logger.isLogging() == false) {
        ui->pushButtonLogging->setText("Stop Logging");
        int logIntervall = ui->comboBoxLoggingIntervall->currentText().toInt();
        logger.create(ui->lineEditLogFileName->text());
        logger.enableLogging(logIntervall);
        qDebug () << "Logging started";

    }
    else
    {
        logger.disableLogging();
        qDebug () << "Logging stopped";
        ui->pushButtonLogging->setText("Start Logging");
    }
}
void MainWindow::on_pushButtonLoggingHome_released()
{
    on_pushButtonPanelHome_released();
}
void MainWindow::updateLoggingInformation(int actual_line, qint64 file_size)
{
    ui->labelLoggingLine->setText(QString::number(actual_line));
    ui->labelFileSize->setText(QString::number(file_size/1024) + " kB");
}
