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

QMAKE_MAC_SDK = macosx10.12

TARGET = PowerLab
TEMPLATE = app

SOURCES += \
    source/console.cpp \
    source/main.cpp \
    source/mainwindow.cpp \
    source/settingsdialog.cpp \
    source/psomQt.cpp \
    source/psomQt_HAL.cpp \
    source/guihandler.cpp \
    qOsci/qosci.cpp \
    qOsci/qoscisignal.cpp \
    qOsci/qcustomplot.cpp \
    mData/mdata.cpp \
    mData/mdatahandler.cpp


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
    mData/mdatahandler.h

FORMS += \
    gui/mainwindow.ui \
    gui/settingsdialog.ui

RESOURCES += \
    PowerLAB.qrc
