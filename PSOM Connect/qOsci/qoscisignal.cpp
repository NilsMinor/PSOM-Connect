#include "qoscisignal.h"

qOsciSignal::qOsciSignal(QObject *parent, QCustomPlot *plot, int _ID) : QObject(parent)
{
    ID = _ID;
    plot->addGraph(); // phase 1
    plot->graph(ID)->setPen(QPen(Qt::blue));
    plot->graph(ID)->setAntialiasedFill(false);
}

void qOsciSignal::addData(double key, double data, QCustomPlot * plot)
{
    plot->graph(ID)->addData(key, data);
}
