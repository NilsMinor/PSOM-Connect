#include "qosci.h"

qOsci::qOsci(QWidget *parent, OsciType type) : QWidget(parent)
{
    customPlot = new QCustomPlot(this);
    SignalCount = 0;

    osciType = type;
    setHarmonicsAxisStyle(HarmonicNumberAxisStyle);
    setVerticalAxisStyle (VoltageAxisStyle);

    if (osciType == OfTypeOsci) {
        initAsOsci ();
    }
    else if (osciType == OfTypeHarmonics) {
        initAsHarmonics ();
    }

    QLinearGradient plotGradient;
    plotGradient.setStart(0, 0);
    plotGradient.setFinalStop(0, 350);
    plotGradient.setColorAt(0, QColor(100, 80, 200));
    plotGradient.setColorAt(1, QColor(100, 80, 240));
    customPlot->setBackground(plotGradient);

    QLinearGradient axisRectGradient;
    axisRectGradient.setStart(0, 0);
    axisRectGradient.setFinalStop(0, 350);
    axisRectGradient.setColorAt(0, QColor(255, 255, 255));
    axisRectGradient.setColorAt(1, QColor(255, 255, 255));
    customPlot->axisRect()->setBackground(axisRectGradient);
    customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);

    // set widget to layout
    screenLayout = new QHBoxLayout();
    screenWidget = new QWidget();
    screenLayout->addWidget(customPlot);
    screenWidget->setLayout(screenLayout);
}

void qOsci::initAsOsci      (void) {

    osciTimer = new QTimer ();
    osciTimer->setTimerType(Qt::PreciseTimer);

    customPlot->legend->setVisible(true);
    QFont legendFont = font();  // start out with MainWindow's font..
    legendFont.setPointSize(9); // and make a bit smaller for legend
    customPlot->legend->setFont(legendFont);
    customPlot->legend->setBrush(QBrush(QColor(255,255,255,230)));
    customPlot->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop|Qt::AlignLeft);

    int size = 4;
    customPlot->addGraph(); // blue line
    customPlot->graph(0)->setPen(QPen(QColor(40, 110, 255), size));
    customPlot->graph(0)->setName("Phase L1");
    customPlot->addGraph(); // red line
    customPlot->graph(1)->setPen(QPen(QColor(255, 110, 40), size));
    customPlot->graph(1)->setName("Phase L2");
    customPlot->addGraph(); // violett line
    customPlot->graph(2)->setPen(QPen(QColor(188, 110, 255), size));
    customPlot->graph(2)->setName("Phase L3");
    customPlot->addGraph(); // red line
    customPlot->graph(3)->setPen(QPen(QColor(0, 240, 110), size));
    customPlot->graph(3)->setName("Phase LT");

    QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
    timeTicker->setTimeFormat("%h:%m:%s");
    customPlot->xAxis->setTicker(timeTicker);
    customPlot->axisRect()->setupFullAxesBox();
    customPlot->yAxis->setRange(-1.2, 1.2);

    // make left and bottom axes transfer their ranges to right and top axes:
    connect(customPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), customPlot->xAxis2, SLOT(setRange(QCPRange)));
    connect(customPlot->yAxis, SIGNAL(rangeChanged(QCPRange)), customPlot->yAxis2, SLOT(setRange(QCPRange)));

    // setup a timer that repeatedly calls MainWindow::realtimeDataSlot:
    connect(osciTimer, SIGNAL(timeout()), this, SLOT(realtimeDataSlot()));
}
void qOsci::osciStart()
{
    osciTimer->start(0);
}
void qOsci::osciStop()
{
    osciTimer->stop();
}
void qOsci::osciReset()
{

}

void qOsci::realtimeDataSlot()
{
    emit osci_timeout();
}
void qOsci::updateOsci(mDataHandler *L1,mDataHandler *L2,mDataHandler *L3,mDataHandler *LT )
{
    static QTime time(QTime::currentTime());
    // calculate two new data points:
    double key = time.elapsed()/1000.0; // time elapsed since start of demo, in seconds
    static double lastPointKey = 0;

    if (key-lastPointKey > 0.002) // at most add point every 2 ms
    {
      // add data to lines:
       if (verticalAxisStyle == VoltageAxisStyle) {
         customPlot->graph(0)->addData(key, L1->getData("U1"));
         customPlot->graph(1)->addData(key, L2->getData("U2"));
         customPlot->graph(2)->addData(key, L3->getData("U3"));
         customPlot->graph(3)->addData(key, LT->getData("UT"));
       }
       else if (verticalAxisStyle == CurrentAxisStyle) {
           customPlot->graph(0)->addData(key, L1->getData("I1"));
           customPlot->graph(1)->addData(key, L2->getData("I2"));
           customPlot->graph(2)->addData(key, L3->getData("I3"));
           customPlot->graph(3)->addData(key, LT->getData("IT"));
}
      customPlot->graph(0)->rescaleValueAxis(true);
      customPlot->graph(1)->rescaleValueAxis(true);
      customPlot->graph(2)->rescaleValueAxis(true);
      customPlot->graph(3)->rescaleValueAxis(true);
      lastPointKey = key;
     }

    // make key axis range scroll with the data (at a constant range size of 8):
    customPlot->xAxis->setRange(key, 8, Qt::AlignRight);
    customPlot->replot();

    // calculate frames per second:
    static double lastFpsKey;
    static int frameCount;
    ++frameCount;
    if (key-lastFpsKey > 2) // average fps over 2 seconds
    {
     /* statusBar->showMessage(
            QString("%1 FPS, Total Data points: %2")
            .arg(frameCount/(key-lastFpsKey), 0, 'f', 0)
            .arg(ui->customPlot->graph(0)->data()->size()+ui->customPlot->graph(1)->data()->size())
            , 0);*/
      lastFpsKey = key;
      frameCount = 0;
    }
}

void qOsci::updateActualHarmonic(int actualHarm)
{
      //qDebug() << "Update!";
       groupTracerText->setText("Harmonic = " + QString::number(actualHarm));
       customPlot->replot();
}

void qOsci::initAsHarmonics (void) {
    // prepare data:

    /*// create and configure plottables:
    QCPGraph *graph1 = customPlot->addGraph();
    graph1->setData(x1, y1);
    graph1->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, QPen(Qt::black, 1.5), QBrush(Qt::white), 9));
    graph1->setPen(QPen(QColor(120, 120, 120), 2));*/

    harmonicBars = new QCPBars(customPlot->xAxis, customPlot->yAxis);
    harmonicBars->setPen(Qt::NoPen);
    harmonicBars->setBrush(QColor(240, 70, 30, 230));

    // move bars above graphs and grid below bars:
    customPlot->addLayer("abovemain", customPlot->layer("main"), QCustomPlot::limAbove);
    customPlot->addLayer("belowmain", customPlot->layer("main"), QCustomPlot::limBelow);
    customPlot->xAxis->grid()->setLayer("belowmain");
    customPlot->yAxis->grid()->setLayer("belowmain");

    // set some pens, brushes and backgrounds:
    customPlot->xAxis->setBasePen(QPen(Qt::white, 1));
    customPlot->yAxis->setBasePen(QPen(Qt::white, 1));
    customPlot->xAxis->setTickPen(QPen(Qt::white, 1));
    customPlot->yAxis->setTickPen(QPen(Qt::white, 1));
    customPlot->xAxis->setSubTickPen(QPen(Qt::white, 1));
    customPlot->yAxis->setSubTickPen(QPen(Qt::white, 1));
    customPlot->xAxis->setTickLabelColor(Qt::white);
    customPlot->yAxis->setTickLabelColor(Qt::white);
    customPlot->xAxis->grid()->setPen(QPen(QColor(140, 140, 140), 1, Qt::DotLine));
    customPlot->yAxis->grid()->setPen(QPen(QColor(140, 140, 140), 1, Qt::DotLine));
    customPlot->xAxis->grid()->setSubGridPen(QPen(QColor(80, 80, 80), 1, Qt::DotLine));
    customPlot->yAxis->grid()->setSubGridPen(QPen(QColor(80, 80, 80), 1, Qt::DotLine));
    customPlot->xAxis->grid()->setSubGridVisible(true);
    customPlot->yAxis->grid()->setSubGridVisible(true);
    customPlot->xAxis->grid()->setZeroLinePen(Qt::NoPen);
    customPlot->yAxis->grid()->setZeroLinePen(Qt::NoPen);
    customPlot->xAxis->setUpperEnding(QCPLineEnding::esSpikeArrow);
    customPlot->yAxis->setUpperEnding(QCPLineEnding::esSpikeArrow);

   // customPlot->rescaleAxes();
   // customPlot->yAxis->setRange(0, 2);

    // add label for group tracer:
    groupTracerText = new QCPItemText(customPlot);
    groupTracerText->position->setType(QCPItemPosition::ptAxisRectRatio);
    groupTracerText->setPositionAlignment(Qt::AlignRight|Qt::AlignTop);
    groupTracerText->position->setCoords(1.0, 0); // lower right corner of axis rect
    groupTracerText->setText("Harmonic =  1");
    groupTracerText->setTextAlignment(Qt::AlignLeft);
    groupTracerText->setFont(QFont(font().family(), 16));
    groupTracerText->setColor(QColor(Qt::red));
    groupTracerText->setPadding(QMargins(8, 0, 0, 0));
}
void qOsci::setHarmonics(float *data, float freq, int count, int active) {

    groupTracerText->setText("Harmonic = " + QString::number(active));

    for (int i=0;i!=5;i++) {
        qDebug() << "Harmonic " << i+1 << " = " << data[i];
    }

    int size = count;
    int max = 0;
    QVector<double> x(size), y(size),  frequency(count);

    int dataCounter = 0;
    for (int i= 0; i!= size; i++)
    {
        x[i] = i;
        y[i] = data[dataCounter];    // add data
        // find max value
        if (y[i] > max)
            max = y[i];

        frequency[dataCounter] = freq * (i+1);  // calculate frequency
        dataCounter++; // increment data counter
    }

    // resize
    harmonicBars->setWidth(count/(double)x.size());
    customPlot->xAxis->setRange(-1, size);
    customPlot->yAxis->setRange(0, (max + 0.1*max));
    harmonicBars->setData(x, y);

    QVector<double> ticks;
    QVector<QString> labels;

    dataCounter = 0;
    for (int i=0; i!= size; i++) {
        ticks << i;

        if (harmonicsAxisStyle == FrequencyAxisStyle)
            labels << QString::number(frequency[dataCounter++],'f',2);
        else if (harmonicsAxisStyle == HarmonicNumberAxisStyle)
            labels <<  QString::number(i+1);
    }

    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
    textTicker->addTicks(ticks, labels);
    customPlot->xAxis->setTicker(textTicker);
    customPlot->xAxis->setTickLabelFont(QFont(font().family(),10));

    customPlot->replot();
}
void qOsci::setHarmonicsAxisStyle(OsciHarmAxisStyle style)
{
    harmonicsAxisStyle = style;
    if (harmonicsAxisStyle == FrequencyAxisStyle)
    {
        customPlot->xAxis->setTickLabelRotation(45);
        customPlot->xAxis->setLabel("Frequency [Hz]");
    }
    else if (harmonicsAxisStyle == HarmonicNumberAxisStyle){
        customPlot->xAxis->setTickLabelRotation(0);
        customPlot->xAxis->setLabel("Harmonic");
    }
    customPlot->replot();
}
void qOsci::setVerticalAxisStyle(OsciVerticalAxisStyle style)
{
    verticalAxisStyle = style;
    if (verticalAxisStyle == VoltageAxisStyle) {
        customPlot->yAxis->setLabel("Voltage [Vrms]");
    }
    else if (verticalAxisStyle == CurrentAxisStyle) {
        customPlot->yAxis->setLabel("Current [Irms]");
    }
    else if (verticalAxisStyle == PPowerAxisStyle) {
        customPlot->yAxis->setLabel("Active Power [W]");
    }
    else if (verticalAxisStyle == QPowerAxisStyle) {
        customPlot->yAxis->setLabel("Reactive Power [VA]");
    }
    else {

    }
    customPlot->replot();
}

void qOsci::setScreenSize(QSize _screenSize)
{
    screenWidget->setMinimumSize(_screenSize);
}

