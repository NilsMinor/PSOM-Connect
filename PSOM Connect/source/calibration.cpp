#include "mainwindow.h"

void MainWindow::on_comboBoxCalType_currentIndexChanged(int index)
{
    /*
    typedef struct VCAL {
        uint32_t VCAL_0;		// (0)  0V - 39V
        uint32_t VCAL_40;		// (1)  40V - 79V
        uint32_t VCAL_80;		// (2)  80V - 119V
        uint32_t VCAL_120;	// (3)  120V - 159V
        uint32_t VCAL_160;	// (4)  160V - 199V
        uint32_t VCAL_200;	// (5)  200V - 239V
        uint32_t VCAL_240;	// (6)  240V - 279V
        uint32_t VCAL_280;	// (7)  280V - 319V
        uint32_t VCAL_320;	// (8)  320V - 359V
        uint32_t VCAL_360;	// (9)  360V - 399V
        uint32_t VCAL_400;	// (10) < 400V
        uint32_t VOFFS;			// (11)
    } VCAL;

    typedef struct ICAL {
        uint32_t ICAL_0;		// (0)  0A - 0,499A
        uint32_t ICAL_1;		// (1)  1A - 1,999A
        uint32_t ICAL_2;		// (2)  2A - 3,999A
        uint32_t ICAL_4;		// (3)  4A - 5,999A
        uint32_t ICAL_6;		// (4)  5A - 7,999A
        uint32_t ICAL_8;		// (5)  8A - 9,999A
        uint32_t ICAL_10;		// (6)  10A - 11,999A
        uint32_t ICAL_12;		// (7)  12A - 15,999A
        uint32_t ICAL_16;		// (8)  16A - 19,999A
        uint32_t ICAL_20;		// (9)  20A - 23,999A
        uint32_t ICAL_24;		// (10) > 24A
        uint32_t IOFFS;			// (11)
    } ICAL;
    */
}
void MainWindow::on_pushButtonLoadCalibration_released()
{
    testModule->loadCalibrationData(ui->comboBoxCalPhase->currentIndex() + 1);
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
