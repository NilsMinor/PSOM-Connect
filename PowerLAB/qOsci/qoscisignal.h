#ifndef QOSCISIGNAL_H
#define QOSCISIGNAL_H

#include <QObject>
#include "qcustomplot.h"

class qOsciSignal : public QObject
{
    Q_OBJECT
private:
    double minimum;
    double maximum;
    int ID;
public:
    explicit qOsciSignal(QObject *parent = 0, QCustomPlot * plot = NULL, int _ID = -1);
    void    addData(double key, double data, QCustomPlot *plot);

signals:

public slots:
};

#endif // QOSCISIGNAL_H
