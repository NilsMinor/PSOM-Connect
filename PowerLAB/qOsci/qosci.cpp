#include "qosci.h"

qOsci::qOsci(QWidget *parent) : QWidget(parent)
{
    customPlot = new QCustomPlot(this);
    SignalCount = 0;

    testSig1 = new qOsciSignal(NULL,customPlot,SignalCount++);  // 0
    testSig2 = new qOsciSignal(NULL,customPlot,SignalCount++);  // 1
    //SignalCount = 2

   // customPlot->addGraph(); // phase 1
   // customPlot->graph(0)->setPen(QPen(Qt::blue));
   // customPlot->graph(0)->setAntialiasedFill(false);
   // customPlot->addGraph(); // blue dot phase 1
   // customPlot->graph(1)->setPen(QPen(Qt::blue));
   // customPlot->graph(1)->setLineStyle(QCPGraph::lsNone);
   // customPlot->graph(1)->setScatterStyle(QCPScatterStyle::ssCross);

    customPlot->xAxis->setTickLabelType(QCPAxis::ltDateTime);
    customPlot->xAxis->setDateTimeFormat("hh:mm:ss");
    customPlot->xAxis->setAutoTickStep(false);
    customPlot->xAxis->setTickStep(2);
    customPlot->axisRect()->setupFullAxesBox();

    // make left and bottom axes transfer their ranges to right and top axes:
    connect(customPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), customPlot->xAxis2, SLOT(setRange(QCPRange)));
    connect(customPlot->yAxis, SIGNAL(rangeChanged(QCPRange)), customPlot->yAxis2, SLOT(setRange(QCPRange)));

    osciTimer = new QTimer ();
    osciTimer->setTimerType(Qt::PreciseTimer);

    connect (osciTimer, SIGNAL(timeout()),this, SLOT(update_osci()));
    osciTimer->start(100);

    screenLayout = new QHBoxLayout();
    screenWidget = new QWidget();

    screenLayout->addWidget(customPlot);
    screenWidget->setLayout(screenLayout);
}

void qOsci::setScreenSize(QSize _screenSize)
{
    screenWidget->setMinimumSize(_screenSize);
}

void qOsci::update_osci()
{
    double key = QDateTime::currentDateTime().toMSecsSinceEpoch() / 1000.0;
    static double lastPointKey = 0;

    testSig1->addData(key, 10, customPlot);
}
