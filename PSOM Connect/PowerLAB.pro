# PowerLAB project file
# Nils Minor
#
# basic structure
# - PowerLAB
#   - PowerLAB
#       - gui
#       - source
#       - images
#   - qcustomplot
#

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport serialport

CONFIG  += no_batch
TARGET = PowerLab
TEMPLATE = app

SOURCES += \
    source/console.cpp \
    source/main.cpp \
    source/mainwindow.cpp \
    source/settingsdialog.cpp \
    source/psomQt.cpp \
    source/psomQt_HAL.cpp \
    qOsci/qosci.cpp \
    qOsci/qoscisignal.cpp \
    qOsci/qcustomplot.cpp \
    mData/mdata.cpp \
    mData/mdatahandler.cpp \
    mData/mdatalogger.cpp \
    source/panel.cpp \
    source/oscilloscope.cpp \
    source/harmonics.cpp \
    source/logging.cpp \
    source/calibration.cpp \
    source/teamproject.cpp \
    source/serial.cpp


HEADERS += \
    source/console.h \
    source/mainwindow.h \
    source/settingsdialog.h \
    source/psomQt.h \
    source/PSOMRegsiter.h \
    source/psomQt_HAL.h \
    qOsci/qosci.h \
    qOsci/qoscisignal.h \
    qOsci/qcustomplot.h \
    mData/mdata.h \
    mData/mdatahandler.h \
    mData/mdatalogger.h \


FORMS += \
    gui/mainwindow.ui \
    gui/settingsdialog.ui

RESOURCES += \
    PowerLAB.qrc
###############################################################################################

win32 {
    message(Build QWT500 Plugin only running on Windows)
    LIBS += -LC:/Users/Admin/ownCloud/Entwicklung/QWT500/QWT500/yokogawa/ -ltmctl64
    INCLUDEPATH += C:/Users/Admin/ownCloud/Entwicklung/QWT500/QWT500/
    SOURCES +=\
        C:/Users/Admin/ownCloud/Entwicklung/QWT500/QWT500/qwt500widget.cpp \
        C:/Users/Admin/ownCloud/Entwicklung/QWT500/QWT500/qwt500.cpp \
        C:/Users/Admin/ownCloud/Entwicklung/QWT500/QWT500/qwt500item.cpp

    HEADERS += \
           C:/Users/Admin/ownCloud/Entwicklung/QWT500/QWT500/qwt500widget.h \
           C:/Users/Admin/ownCloud/Entwicklung/QWT500/QWT500/qwt500.h \
           C:/Users/Admin/ownCloud/Entwicklung/QWT500/QWT500/qwt500item.h \
           C:/Users/Admin/ownCloud/Entwicklung/QWT500/QWT500/yokogawa/tmctl.h
    FORMS += C:/Users/Admin/ownCloud/Entwicklung/QWT500/QWT500/qwt500widget.ui
}
