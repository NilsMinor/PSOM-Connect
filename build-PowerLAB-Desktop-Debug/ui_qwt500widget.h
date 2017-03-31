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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QWT500Widget
{
public:
    QWidget *qwt500CentralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *qwt500GridLayout;
    QComboBox *comboBoxQWT500Style;
    QFrame *line;
    QPushButton *pushButtonQWT500Start;
    QLabel *label_2;
    QComboBox *comboBoxQWT500VoltageRange;
    QComboBox *comboBoxQWT500Period;
    QLabel *label_3;
    QPushButton *pushButtonQWT500Reset;
    QLineEdit *lineEditQWT500DeviceInfo;
    QComboBox *comboBoxQWT500CurrentRange;
    QPushButton *pushButtonQWT500Search;
    QLabel *label;
    QPushButton *pushButtonInfo;
    QLabel *label_4;
    QStackedWidget *stackedWidget;
    QWidget *page_5;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *qwt500HorizontalLayout;
    QWidget *page_6;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *qwt500HarmonicsLayout;
    QMenuBar *qwt500MenuBar;
    QToolBar *qwt500MainToolBar;

    void setupUi(QMainWindow *QWT500Widget)
    {
        if (QWT500Widget->objectName().isEmpty())
            QWT500Widget->setObjectName(QStringLiteral("QWT500Widget"));
        QWT500Widget->resize(650, 400);
        qwt500CentralWidget = new QWidget(QWT500Widget);
        qwt500CentralWidget->setObjectName(QStringLiteral("qwt500CentralWidget"));
        gridLayout_2 = new QGridLayout(qwt500CentralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        qwt500GridLayout = new QGridLayout();
        qwt500GridLayout->setSpacing(6);
        qwt500GridLayout->setObjectName(QStringLiteral("qwt500GridLayout"));
        qwt500GridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        comboBoxQWT500Style = new QComboBox(qwt500CentralWidget);
        comboBoxQWT500Style->setObjectName(QStringLiteral("comboBoxQWT500Style"));
        comboBoxQWT500Style->setEnabled(false);

        qwt500GridLayout->addWidget(comboBoxQWT500Style, 0, 2, 1, 1);

        line = new QFrame(qwt500CentralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        qwt500GridLayout->addWidget(line, 0, 4, 5, 2);

        pushButtonQWT500Start = new QPushButton(qwt500CentralWidget);
        pushButtonQWT500Start->setObjectName(QStringLiteral("pushButtonQWT500Start"));
        pushButtonQWT500Start->setEnabled(false);

        qwt500GridLayout->addWidget(pushButtonQWT500Start, 0, 1, 1, 1);

        label_2 = new QLabel(qwt500CentralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        qwt500GridLayout->addWidget(label_2, 1, 6, 1, 1);

        comboBoxQWT500VoltageRange = new QComboBox(qwt500CentralWidget);
        comboBoxQWT500VoltageRange->setObjectName(QStringLiteral("comboBoxQWT500VoltageRange"));
        comboBoxQWT500VoltageRange->setEnabled(false);

        qwt500GridLayout->addWidget(comboBoxQWT500VoltageRange, 0, 7, 1, 1);

        comboBoxQWT500Period = new QComboBox(qwt500CentralWidget);
        comboBoxQWT500Period->setObjectName(QStringLiteral("comboBoxQWT500Period"));
        comboBoxQWT500Period->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxQWT500Period->sizePolicy().hasHeightForWidth());
        comboBoxQWT500Period->setSizePolicy(sizePolicy);
        comboBoxQWT500Period->setMinimumSize(QSize(80, 0));

        qwt500GridLayout->addWidget(comboBoxQWT500Period, 2, 7, 1, 1);

        label_3 = new QLabel(qwt500CentralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        qwt500GridLayout->addWidget(label_3, 0, 6, 1, 1);

        pushButtonQWT500Reset = new QPushButton(qwt500CentralWidget);
        pushButtonQWT500Reset->setObjectName(QStringLiteral("pushButtonQWT500Reset"));
        pushButtonQWT500Reset->setEnabled(false);

        qwt500GridLayout->addWidget(pushButtonQWT500Reset, 1, 1, 1, 1);

        lineEditQWT500DeviceInfo = new QLineEdit(qwt500CentralWidget);
        lineEditQWT500DeviceInfo->setObjectName(QStringLiteral("lineEditQWT500DeviceInfo"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditQWT500DeviceInfo->sizePolicy().hasHeightForWidth());
        lineEditQWT500DeviceInfo->setSizePolicy(sizePolicy1);

        qwt500GridLayout->addWidget(lineEditQWT500DeviceInfo, 0, 3, 1, 1);

        comboBoxQWT500CurrentRange = new QComboBox(qwt500CentralWidget);
        comboBoxQWT500CurrentRange->setObjectName(QStringLiteral("comboBoxQWT500CurrentRange"));
        comboBoxQWT500CurrentRange->setEnabled(false);

        qwt500GridLayout->addWidget(comboBoxQWT500CurrentRange, 1, 7, 1, 1);

        pushButtonQWT500Search = new QPushButton(qwt500CentralWidget);
        pushButtonQWT500Search->setObjectName(QStringLiteral("pushButtonQWT500Search"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButtonQWT500Search->sizePolicy().hasHeightForWidth());
        pushButtonQWT500Search->setSizePolicy(sizePolicy2);

        qwt500GridLayout->addWidget(pushButtonQWT500Search, 1, 2, 1, 1);

        label = new QLabel(qwt500CentralWidget);
        label->setObjectName(QStringLiteral("label"));

        qwt500GridLayout->addWidget(label, 2, 6, 1, 1);

        pushButtonInfo = new QPushButton(qwt500CentralWidget);
        pushButtonInfo->setObjectName(QStringLiteral("pushButtonInfo"));

        qwt500GridLayout->addWidget(pushButtonInfo, 2, 1, 1, 2);

        label_4 = new QLabel(qwt500CentralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        qwt500GridLayout->addWidget(label_4, 1, 3, 1, 1);


        gridLayout_2->addLayout(qwt500GridLayout, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(qwt500CentralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        horizontalLayout = new QHBoxLayout(page_5);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        qwt500HorizontalLayout = new QHBoxLayout();
        qwt500HorizontalLayout->setSpacing(6);
        qwt500HorizontalLayout->setObjectName(QStringLiteral("qwt500HorizontalLayout"));

        horizontalLayout->addLayout(qwt500HorizontalLayout);

        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        horizontalLayout_2 = new QHBoxLayout(page_6);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        qwt500HarmonicsLayout = new QHBoxLayout();
        qwt500HarmonicsLayout->setSpacing(6);
        qwt500HarmonicsLayout->setObjectName(QStringLiteral("qwt500HarmonicsLayout"));

        horizontalLayout_2->addLayout(qwt500HarmonicsLayout);

        stackedWidget->addWidget(page_6);

        gridLayout_2->addWidget(stackedWidget, 1, 0, 1, 1);

        QWT500Widget->setCentralWidget(qwt500CentralWidget);
        qwt500MenuBar = new QMenuBar(QWT500Widget);
        qwt500MenuBar->setObjectName(QStringLiteral("qwt500MenuBar"));
        qwt500MenuBar->setGeometry(QRect(0, 0, 650, 20));
        QWT500Widget->setMenuBar(qwt500MenuBar);
        qwt500MainToolBar = new QToolBar(QWT500Widget);
        qwt500MainToolBar->setObjectName(QStringLiteral("qwt500MainToolBar"));
        QWT500Widget->addToolBar(Qt::TopToolBarArea, qwt500MainToolBar);

        retranslateUi(QWT500Widget);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QWT500Widget);
    } // setupUi

    void retranslateUi(QMainWindow *QWT500Widget)
    {
        QWT500Widget->setWindowTitle(QApplication::translate("QWT500Widget", "QWT500", Q_NULLPTR));
        comboBoxQWT500Style->clear();
        comboBoxQWT500Style->insertItems(0, QStringList()
         << QApplication::translate("QWT500Widget", "Normal", Q_NULLPTR)
         << QApplication::translate("QWT500Widget", "Harmonics", Q_NULLPTR)
        );
        pushButtonQWT500Start->setText(QApplication::translate("QWT500Widget", "Start", Q_NULLPTR));
        label_2->setText(QApplication::translate("QWT500Widget", "Current Range", Q_NULLPTR));
        comboBoxQWT500VoltageRange->clear();
        comboBoxQWT500VoltageRange->insertItems(0, QStringList()
         << QApplication::translate("QWT500Widget", "AUTO", Q_NULLPTR)
         << QApplication::translate("QWT500Widget", "15V", Q_NULLPTR)
         << QApplication::translate("QWT500Widget", "30V", Q_NULLPTR)
         << QApplication::translate("QWT500Widget", "60V", Q_NULLPTR)
         << QApplication::translate("QWT500Widget", "100V", Q_NULLPTR)
         << QApplication::translate("QWT500Widget", "150V", Q_NULLPTR)
         << QApplication::translate("QWT500Widget", "300V", Q_NULLPTR)
         << QApplication::translate("QWT500Widget", "600V", Q_NULLPTR)
         << QApplication::translate("QWT500Widget", "1000V", Q_NULLPTR)
        );
        comboBoxQWT500Period->clear();
        comboBoxQWT500Period->insertItems(0, QStringList()
         << QApplication::translate("QWT500Widget", "100ms", Q_NULLPTR)
         << QApplication::translate("QWT500Widget", "200ms", Q_NULLPTR)
         << QApplication::translate("QWT500Widget", "500ms", Q_NULLPTR)
         << QApplication::translate("QWT500Widget", "1000ms", Q_NULLPTR)
         << QApplication::translate("QWT500Widget", "2000ms", Q_NULLPTR)
         << QApplication::translate("QWT500Widget", "5000ms", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("QWT500Widget", "Voltage Range", Q_NULLPTR));
        pushButtonQWT500Reset->setText(QApplication::translate("QWT500Widget", "Reset", Q_NULLPTR));
        comboBoxQWT500CurrentRange->clear();
        comboBoxQWT500CurrentRange->insertItems(0, QStringList()
         << QApplication::translate("QWT500Widget", "AUTO", Q_NULLPTR)
         << QApplication::translate("QWT500Widget", "500mA", Q_NULLPTR)
         << QApplication::translate("QWT500Widget", "1A", Q_NULLPTR)
         << QApplication::translate("QWT500Widget", "2A", Q_NULLPTR)
         << QApplication::translate("QWT500Widget", "5A", Q_NULLPTR)
         << QApplication::translate("QWT500Widget", "10A", Q_NULLPTR)
         << QApplication::translate("QWT500Widget", "20A", Q_NULLPTR)
         << QApplication::translate("QWT500Widget", "40A", Q_NULLPTR)
        );
        pushButtonQWT500Search->setText(QApplication::translate("QWT500Widget", "Search & Connect", Q_NULLPTR));
        label->setText(QApplication::translate("QWT500Widget", "Update Rate", Q_NULLPTR));
        pushButtonInfo->setText(QApplication::translate("QWT500Widget", "Info", Q_NULLPTR));
        label_4->setText(QApplication::translate("QWT500Widget", "Nils Minor, 20.03.2017, QWT500 ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QWT500Widget: public Ui_QWT500Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWT500WIDGET_H
