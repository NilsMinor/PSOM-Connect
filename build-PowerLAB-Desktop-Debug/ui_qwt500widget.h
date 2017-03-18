/********************************************************************************
** Form generated from reading UI file 'qwt500widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWT500WIDGET_H
#define UI_QWT500WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QWT500Widget
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QComboBox *comboBoxStyle;
    QComboBox *comboBoxPeriod;
    QLineEdit *lineEditDeviceInfo;
    QPushButton *pushButtonSearch;
    QFrame *line;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonReset;
    QHBoxLayout *horizontalLayout;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QWT500Widget)
    {
        if (QWT500Widget->objectName().isEmpty())
            QWT500Widget->setObjectName(QStringLiteral("QWT500Widget"));
        QWT500Widget->resize(650, 400);
        centralWidget = new QWidget(QWT500Widget);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        comboBoxStyle = new QComboBox(centralWidget);
        comboBoxStyle->setObjectName(QStringLiteral("comboBoxStyle"));
        comboBoxStyle->setEnabled(false);

        gridLayout->addWidget(comboBoxStyle, 0, 2, 1, 1);

        comboBoxPeriod = new QComboBox(centralWidget);
        comboBoxPeriod->setObjectName(QStringLiteral("comboBoxPeriod"));
        comboBoxPeriod->setEnabled(false);

        gridLayout->addWidget(comboBoxPeriod, 1, 2, 1, 1);

        lineEditDeviceInfo = new QLineEdit(centralWidget);
        lineEditDeviceInfo->setObjectName(QStringLiteral("lineEditDeviceInfo"));

        gridLayout->addWidget(lineEditDeviceInfo, 1, 5, 1, 1);

        pushButtonSearch = new QPushButton(centralWidget);
        pushButtonSearch->setObjectName(QStringLiteral("pushButtonSearch"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonSearch->sizePolicy().hasHeightForWidth());
        pushButtonSearch->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButtonSearch, 1, 6, 1, 1);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 4, 2, 2);

        pushButtonStart = new QPushButton(centralWidget);
        pushButtonStart->setObjectName(QStringLiteral("pushButtonStart"));
        pushButtonStart->setEnabled(false);

        gridLayout->addWidget(pushButtonStart, 0, 1, 1, 1);

        pushButtonReset = new QPushButton(centralWidget);
        pushButtonReset->setObjectName(QStringLiteral("pushButtonReset"));

        gridLayout->addWidget(pushButtonReset, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        QWT500Widget->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QWT500Widget);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 650, 20));
        QWT500Widget->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QWT500Widget);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QWT500Widget->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QWT500Widget);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QWT500Widget->setStatusBar(statusBar);

        retranslateUi(QWT500Widget);

        QMetaObject::connectSlotsByName(QWT500Widget);
    } // setupUi

    void retranslateUi(QMainWindow *QWT500Widget)
    {
        QWT500Widget->setWindowTitle(QApplication::translate("QWT500Widget", "MainWindow", Q_NULLPTR));
        comboBoxStyle->clear();
        comboBoxStyle->insertItems(0, QStringList()
         << QApplication::translate("QWT500Widget", "Normal", Q_NULLPTR)
         << QApplication::translate("QWT500Widget", "Harmonics", Q_NULLPTR)
        );
        comboBoxPeriod->clear();
        comboBoxPeriod->insertItems(0, QStringList()
         << QApplication::translate("QWT500Widget", "100", Q_NULLPTR)
         << QApplication::translate("QWT500Widget", "500", Q_NULLPTR)
         << QApplication::translate("QWT500Widget", "1000", Q_NULLPTR)
         << QApplication::translate("QWT500Widget", "2500", Q_NULLPTR)
         << QApplication::translate("QWT500Widget", "5000", Q_NULLPTR)
        );
        pushButtonSearch->setText(QApplication::translate("QWT500Widget", "Search & Connect", Q_NULLPTR));
        pushButtonStart->setText(QApplication::translate("QWT500Widget", "Start", Q_NULLPTR));
        pushButtonReset->setText(QApplication::translate("QWT500Widget", "Reset", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QWT500Widget: public Ui_QWT500Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWT500WIDGET_H
