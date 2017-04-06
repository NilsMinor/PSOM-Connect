#include "mainwindow.h"

void MainWindow::initOscilloscopeSettings(void) {
    oscillopscope = new qOsci();
    ui->layoutOscilloscope->addWidget(oscillopscope->getScreenWidget());
    connect (oscillopscope, SIGNAL(osci_timeout()), this, SLOT(osciTimeout()));
    connect (this, SIGNAL(updateOsci(mDataHandler*,mDataHandler*,mDataHandler*,mDataHandler*)),
             oscillopscope, SLOT(updateOsci(mDataHandler*,mDataHandler*,mDataHandler*,mDataHandler*)));
}

void MainWindow::on_pushButtonOsciStart_released()
{
   oscillopscope->osciStart();
   ui->pushButtonOsciStart->setEnabled(false);
   ui->pushButtonOsciStop->setEnabled(true);
}
void MainWindow::on_pushButtonOsciStop_released()
{
    oscillopscope->osciStop();
    ui->pushButtonOsciStart->setEnabled(true);
    ui->pushButtonOsciStop->setEnabled(false);
}
void MainWindow::on_pushButtonOsciReset_released()
{
    oscillopscope->osciReset();
}
void MainWindow::on_pushButtonScopeHome_released()
{
    on_pushButtonPanelHome_released();
}
void MainWindow::on_comboBoxOsci_currentIndexChanged(int index)
{
    switch (index) {
    case 0: oscillopscope->setVerticalAxisStyle(VoltageAxisStyle); break;
    case 1: oscillopscope->setVerticalAxisStyle(CurrentAxisStyle); break;
    case 2: oscillopscope->setVerticalAxisStyle(PPowerAxisStyle); break;
    case 3: oscillopscope->setVerticalAxisStyle(QPowerAxisStyle); break;
    case 4: oscillopscope->setVerticalAxisStyle(SPowerAxisStyle); break;
    }
}
void MainWindow::osciTimeout()
{
    emit updateOsci(L1Data, L2Data, L3Data, LTData);
}
void MainWindow::on_checkBoxOsciEnableL1_released()
{

}
void MainWindow::on_checkBoxOsciEnableL2_released()
{

}
void MainWindow::on_checkBoxOsciEnableL3_released()
{

}
void MainWindow::on_checkBoxOsciEnableLT_released()
{

}
