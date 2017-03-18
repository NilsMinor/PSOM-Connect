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
#include <QMessageBox>
#include "psomQt.h"
#include "qOsci/qosci.h"
#include "mData/mdatahandler.h"
#include "mData/mdatalogger.h"
#include "qwt500widget.h"

#define TAB_PANEL                   1
#define TAB_SCOPE                 2
#define TAB_HARMONICS         3
#define TAB_LOGGING              4
#define TAB_QWT500               5
#define TAB_EVSE                    6
#define TAB_CALIBRATION       7


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
    void rpiStartup (void);

private:
    void initActionsConnections();
    void sendCommand            (QByteArray cmd, double value);
    void updateDebugUIInfo      (void);

    PSOM                    *testModule;
    QWT500Widget    *wt500;
    Ui::MainWindow      *ui;
    Console                  *console;
    SettingsDialog        *settings;
    QSerialPort             *serial;
    qOsci                      *oscillopscope;
    qOsci                      *harmonics;
    mDataHandler        *L1Data;
    mDataHandler        *L2Data;
    mDataHandler        *L3Data;
    mDataHandler        *LTData;
    mDataHandler        *HData;
    mDataHandler        *Common;
    mDataLogger         logger;

private slots:
    void openSerialPort();
    void closeSerialPort();
    void about();
    void writeData(const QByteArray &data);
    void readData();
    void osciTimeout (void);
    void handleError(QSerialPort::SerialPortError error);
    void changeStatusbarInformation (QString newInformation);
    void updateLoggingInformation(int actual_line, qint64 file_size);
    void newPSOMData (void);

    void on_pushButtonStartMeasurment_released();
    void on_pushButtonStopMeasurment_released();

    void on_pBStartHarmonics_released();
    void on_cBHarmonicsType_currentIndexChanged(const QString &arg1);
    void on_cBHarmonicsAxisStyle_currentIndexChanged(const QString &arg1);
    void on_pBSetHarmonicsCount_released();

    void handleActionOscilloscope (void);
    void handleActionHarmonics (void);
    void on_pBTriggerHarmonics_released();
    void on_pBClearEnergyL1_released();
    void on_pBClearEnergyL2_released();
    void on_pBClearEnergyL3_released();
    void on_pBClearEnergyLT_released();
    void on_comboBoxCirculationFreq_currentIndexChanged(int index);
    void on_pushButtonOsciStart_released();
    void on_pushButtonOsciStop_released();
    void on_pushButtonOsciReset_released();
    void on_pushButtonPanel_released();
    void on_pushButtonScope_released();
    void on_pushButtonHarmonics_released();
    void on_pushButtonLogging_released();
    void on_QWT500_released();
    void on_pushButtonCalibration_released();
    void on_pushButtonInformation_released();
    void on_pushButtonExit_released();
    void on_pushButtonEVSE_released();
    void on_pushButtonStartLogging_released();
    void on_pushButtonPanelHome_released();
    void on_pushButtonScopeHome_released();
    void on_pushButtonHarmonicsHome_released();
    void on_pushButtonLoggingHome_released();
    void on_pushButtonQWT500Home_released();
    void on_pushButtonEVSEHome_released();
    void on_pushButtonCalibrationHome_released();
    void on_comboBoxOsci_currentIndexChanged(const QString &arg1);
    void on_comboBoxCalType_currentIndexChanged(int index);

    void on_comboBoxOsci_currentIndexChanged(int index);

signals:
    void updateOsci(mDataHandler *L1,mDataHandler *L2,mDataHandler *L3,mDataHandler *LT );
};

#endif // MAINWINDOW_H
