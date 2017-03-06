/****************************************************************************
**
** Copyright (C) 2012 Denis Shienkov <denis.shienkov@gmail.com>
** Copyright (C) 2012 Laszlo Papp <lpapp@kde.org>
** Contact: http://www.qt.io/licensing/
**
** This file is part of the QtSerialPort module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL21$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see http://www.qt.io/terms-conditions. For further
** information use the contact form at http://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 or version 3 as published by the Free
** Software Foundation and appearing in the file LICENSE.LGPLv21 and
** LICENSE.LGPLv3 included in the packaging of this file. Please review the
** following information to ensure the GNU Lesser General Public License
** requirements will be met: https://www.gnu.org/licenses/lgpl.html and
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** As a special exception, The Qt Company gives you certain additional
** rights. These rights are described in The Qt Company LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtCore/QtGlobal>
#include <QtSerialPort/qserialport.h>
#include <QMainWindow>
#include <QTimer>
#include <QHeaderView>
#include "psomQt.h"
#include "qOsci/qosci.h"
#include "mData/mdatahandler.h"

QT_BEGIN_NAMESPACE

class QLabel;

namespace Ui {
class MainWindow;
}

QT_END_NAMESPACE

class Console;
class SettingsDialog;


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();



private:
    void initActionsConnections();
    void sendCommand            (QByteArray cmd, double value);
    void updateDebugUIInfo      (void);

    PSOM                *testModule;

    Ui::MainWindow      *ui;
    Console             *console;
    SettingsDialog      *settings;
    QSerialPort         *serial;
    qOsci               *oscillopscope;
    qOsci               *harmonics;
    mDataHandler        *L1Data;
    mDataHandler        *L2Data;
    mDataHandler        *L3Data;
    mDataHandler        *LTData;
    mDataHandler        *HData;

private slots:
    void openSerialPort();
    void closeSerialPort();
    void about();
    void writeData(const QByteArray &data);
    void readData();
    void handleError(QSerialPort::SerialPortError error);
    void changeStatusbarInformation (QString newInformation);

    void newPSOMData (void);

    void on_pushButtonStartMeasurment_released();
    void on_pushButtonStopMeasurment_released();

    void on_cBSelectAll_toggled(bool checked);
    void on_cBTemperature_toggled(bool checked);
    void on_cBFrequency_toggled(bool checked);
    void on_cBInstVoltage_toggled(bool checked);
    void on_cBRMSVoltage_toggled(bool checked);
    void on_cBInstCurrent_toggled(bool checked);
    void on_cBRMSCurrent_toggled(bool checked);
    void on_cBFundamentalTHD_toggled(bool checked);
    void on_cBActivePower_toggled(bool checked);
    void on_cBReactivePower_toggled(bool checked);
    void on_cBApparentPower_toggled(bool checked);
    void on_cBPowerFactor_toggled(bool checked);
    void on_cBEnergy_toggled(bool checked);
    void on_cBDIO1_released();
    void on_cBDIO2_released();
    void on_cBDIO3_released();
    void on_cBDIO4_released();
    void on_cBDIO5_released();
    void on_cBDIO6_released();
    void on_pBUpdateDirAllOutput_released();
    void on_pBUpdateDirAllInput_released();
    void on_pushButtonVersion_released();
    void on_pBStartHarmonics_released();
    void on_cBHarmonicsType_currentIndexChanged(const QString &arg1);
    void on_cBHarmonicsAxisStyle_currentIndexChanged(const QString &arg1);
    void on_tabWidget_currentChanged(int index);
    void on_pBSetHarmonicsCount_released();

    void handleActionOscilloscope (void);
    void handleActionHarmonics (void);
    void on_pBTriggerHarmonics_released();
};

#endif // MAINWINDOW_H
