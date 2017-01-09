/********************************************************************************
** Form generated from reading UI file 'simmulation.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMMULATION_H
#define UI_SIMMULATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_Simmulation
{
public:
    QLabel *label_14;
    QDoubleSpinBox *simRMSVoltage;
    QDoubleSpinBox *simRMSCurrent;
    QSlider *simRMSVoltageSlider;
    QSlider *simRMSCurrentSlider;
    QLabel *label_13;
    QPushButton *simApply;
    QLabel *label_15;
    QDoubleSpinBox *dSBJitterVoltageRMS;
    QLabel *label_17;
    QFrame *line;
    QDoubleSpinBox *dSBJitterCurrentRMS;
    QLabel *label_18;
    QLabel *label_16;
    QLabel *label_19;
    QLineEdit *jitterTimebase;
    QLabel *label_20;
    QDoubleSpinBox *dSBJitterFrequency;
    QLabel *label_21;
    QLabel *label_22;
    QSlider *simFrequencySlider;
    QDoubleSpinBox *simFrequency;
    QLabel *label_23;
    QFrame *line_2;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QSlider *simPowerfactorSlider;
    QDoubleSpinBox *simPowerfactor;
    QFrame *line_3;
    QDoubleSpinBox *dSBJitterPowerfactor;
    QLabel *label_28;
    QDoubleSpinBox *updateTimerTime;
    QLabel *label_29;
    QLabel *label_30;

    void setupUi(QDialog *Simmulation)
    {
        if (Simmulation->objectName().isEmpty())
            Simmulation->setObjectName(QStringLiteral("Simmulation"));
        Simmulation->resize(400, 533);
        label_14 = new QLabel(Simmulation);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 74, 81, 16));
        simRMSVoltage = new QDoubleSpinBox(Simmulation);
        simRMSVoltage->setObjectName(QStringLiteral("simRMSVoltage"));
        simRMSVoltage->setGeometry(QRect(110, 15, 81, 24));
        simRMSVoltage->setMaximum(1000);
        simRMSVoltage->setValue(230);
        simRMSCurrent = new QDoubleSpinBox(Simmulation);
        simRMSCurrent->setObjectName(QStringLiteral("simRMSCurrent"));
        simRMSCurrent->setGeometry(QRect(110, 69, 81, 24));
        simRMSCurrent->setMaximum(100);
        simRMSCurrent->setValue(10);
        simRMSVoltageSlider = new QSlider(Simmulation);
        simRMSVoltageSlider->setObjectName(QStringLiteral("simRMSVoltageSlider"));
        simRMSVoltageSlider->setGeometry(QRect(20, 37, 361, 22));
        simRMSVoltageSlider->setMaximum(1000);
        simRMSVoltageSlider->setOrientation(Qt::Horizontal);
        simRMSCurrentSlider = new QSlider(Simmulation);
        simRMSCurrentSlider->setObjectName(QStringLiteral("simRMSCurrentSlider"));
        simRMSCurrentSlider->setGeometry(QRect(20, 90, 361, 22));
        simRMSCurrentSlider->setMaximum(100);
        simRMSCurrentSlider->setOrientation(Qt::Horizontal);
        label_13 = new QLabel(Simmulation);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 20, 81, 16));
        simApply = new QPushButton(Simmulation);
        simApply->setObjectName(QStringLiteral("simApply"));
        simApply->setGeometry(QRect(280, 494, 113, 32));
        label_15 = new QLabel(Simmulation);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(250, 17, 51, 20));
        dSBJitterVoltageRMS = new QDoubleSpinBox(Simmulation);
        dSBJitterVoltageRMS->setObjectName(QStringLiteral("dSBJitterVoltageRMS"));
        dSBJitterVoltageRMS->setGeometry(QRect(295, 15, 61, 24));
        dSBJitterVoltageRMS->setDecimals(1);
        dSBJitterVoltageRMS->setSingleStep(0.1);
        dSBJitterVoltageRMS->setValue(1);
        label_17 = new QLabel(Simmulation);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(360, 20, 21, 16));
        line = new QFrame(Simmulation);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 55, 371, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        dSBJitterCurrentRMS = new QDoubleSpinBox(Simmulation);
        dSBJitterCurrentRMS->setObjectName(QStringLiteral("dSBJitterCurrentRMS"));
        dSBJitterCurrentRMS->setGeometry(QRect(297, 68, 61, 24));
        dSBJitterCurrentRMS->setDecimals(1);
        dSBJitterCurrentRMS->setSingleStep(0.1);
        dSBJitterCurrentRMS->setValue(1);
        label_18 = new QLabel(Simmulation);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(360, 74, 21, 16));
        label_16 = new QLabel(Simmulation);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(250, 70, 51, 20));
        label_19 = new QLabel(Simmulation);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(20, 500, 101, 20));
        jitterTimebase = new QLineEdit(Simmulation);
        jitterTimebase->setObjectName(QStringLiteral("jitterTimebase"));
        jitterTimebase->setGeometry(QRect(140, 500, 61, 21));
        jitterTimebase->setLayoutDirection(Qt::LeftToRight);
        jitterTimebase->setAlignment(Qt::AlignCenter);
        label_20 = new QLabel(Simmulation);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(210, 500, 21, 20));
        dSBJitterFrequency = new QDoubleSpinBox(Simmulation);
        dSBJitterFrequency->setObjectName(QStringLiteral("dSBJitterFrequency"));
        dSBJitterFrequency->setGeometry(QRect(297, 123, 61, 24));
        dSBJitterFrequency->setDecimals(1);
        dSBJitterFrequency->setSingleStep(0.1);
        dSBJitterFrequency->setValue(1);
        label_21 = new QLabel(Simmulation);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(360, 129, 21, 16));
        label_22 = new QLabel(Simmulation);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(20, 129, 81, 16));
        simFrequencySlider = new QSlider(Simmulation);
        simFrequencySlider->setObjectName(QStringLiteral("simFrequencySlider"));
        simFrequencySlider->setGeometry(QRect(20, 145, 361, 22));
        simFrequencySlider->setMaximum(100);
        simFrequencySlider->setOrientation(Qt::Horizontal);
        simFrequency = new QDoubleSpinBox(Simmulation);
        simFrequency->setObjectName(QStringLiteral("simFrequency"));
        simFrequency->setGeometry(QRect(110, 124, 81, 24));
        simFrequency->setMaximum(100);
        simFrequency->setValue(50);
        label_23 = new QLabel(Simmulation);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(250, 125, 51, 20));
        line_2 = new QFrame(Simmulation);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 110, 371, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_24 = new QLabel(Simmulation);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(197, 17, 21, 20));
        label_25 = new QLabel(Simmulation);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(197, 71, 21, 20));
        label_26 = new QLabel(Simmulation);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(195, 126, 21, 20));
        label_27 = new QLabel(Simmulation);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(20, 184, 81, 16));
        simPowerfactorSlider = new QSlider(Simmulation);
        simPowerfactorSlider->setObjectName(QStringLiteral("simPowerfactorSlider"));
        simPowerfactorSlider->setGeometry(QRect(20, 200, 361, 22));
        simPowerfactorSlider->setMaximum(100);
        simPowerfactorSlider->setSingleStep(0);
        simPowerfactorSlider->setOrientation(Qt::Horizontal);
        simPowerfactor = new QDoubleSpinBox(Simmulation);
        simPowerfactor->setObjectName(QStringLiteral("simPowerfactor"));
        simPowerfactor->setGeometry(QRect(110, 179, 81, 24));
        simPowerfactor->setMaximum(1);
        simPowerfactor->setSingleStep(0.01);
        simPowerfactor->setValue(1);
        line_3 = new QFrame(Simmulation);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(10, 165, 371, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        dSBJitterPowerfactor = new QDoubleSpinBox(Simmulation);
        dSBJitterPowerfactor->setObjectName(QStringLiteral("dSBJitterPowerfactor"));
        dSBJitterPowerfactor->setGeometry(QRect(297, 178, 61, 24));
        dSBJitterPowerfactor->setDecimals(1);
        dSBJitterPowerfactor->setSingleStep(0.1);
        dSBJitterPowerfactor->setValue(1);
        label_28 = new QLabel(Simmulation);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(250, 180, 51, 20));
        updateTimerTime = new QDoubleSpinBox(Simmulation);
        updateTimerTime->setObjectName(QStringLiteral("updateTimerTime"));
        updateTimerTime->setGeometry(QRect(140, 470, 61, 24));
        updateTimerTime->setDecimals(0);
        updateTimerTime->setMaximum(10000);
        updateTimerTime->setSingleStep(1);
        updateTimerTime->setValue(1000);
        label_29 = new QLabel(Simmulation);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(20, 470, 121, 20));
        label_30 = new QLabel(Simmulation);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(210, 470, 21, 20));

        retranslateUi(Simmulation);

        QMetaObject::connectSlotsByName(Simmulation);
    } // setupUi

    void retranslateUi(QDialog *Simmulation)
    {
        Simmulation->setWindowTitle(QApplication::translate("Simmulation", "Simmulation Panel", 0));
        label_14->setText(QApplication::translate("Simmulation", "RMS Current", 0));
        label_13->setText(QApplication::translate("Simmulation", "RMS Voltage", 0));
        simApply->setText(QApplication::translate("Simmulation", "Close", 0));
        label_15->setText(QApplication::translate("Simmulation", "Jitter \302\261 ", 0));
        label_17->setText(QApplication::translate("Simmulation", "%", 0));
        label_18->setText(QApplication::translate("Simmulation", "%", 0));
        label_16->setText(QApplication::translate("Simmulation", "Jitter \302\261 ", 0));
        label_19->setText(QApplication::translate("Simmulation", "Jitter timebase", 0));
        jitterTimebase->setText(QApplication::translate("Simmulation", "1000", 0));
        label_20->setText(QApplication::translate("Simmulation", "ms", 0));
        label_21->setText(QApplication::translate("Simmulation", "%", 0));
        label_22->setText(QApplication::translate("Simmulation", "Frequency", 0));
        label_23->setText(QApplication::translate("Simmulation", "Jitter \302\261 ", 0));
        label_24->setText(QApplication::translate("Simmulation", "V", 0));
        label_25->setText(QApplication::translate("Simmulation", "A", 0));
        label_26->setText(QApplication::translate("Simmulation", "Hz", 0));
        label_27->setText(QApplication::translate("Simmulation", "Powerfactor", 0));
        label_28->setText(QApplication::translate("Simmulation", "Jitter \302\261 ", 0));
        label_29->setText(QApplication::translate("Simmulation", "Update Data every", 0));
        label_30->setText(QApplication::translate("Simmulation", "ms", 0));
    } // retranslateUi

};

namespace Ui {
    class Simmulation: public Ui_Simmulation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMMULATION_H
