#ifndef QOSCI_H
#define QOSCI_H

#include <QWidget>
#include <QWidget>
#include <QHBoxLayout>
#include <QTimer>
#include <QSize>
#include <QPushButton>
#include "qcustomplot.h"
#include "qoscisignal.h"

class qOsci : public QWidget
{
    Q_OBJECT
private:
    QCustomPlot     *customPlot;
    QTimer          *osciTimer;
    QWidget         *screenWidget;
    QHBoxLayout     *screenLayout;
    int             SignalCount;
   // QList <qOsciSignal> m_signals;
    qOsciSignal     * testSig1;
    qOsciSignal     * testSig2;

public:
    explicit qOsci (QWidget *parent = 0);
    QWidget         *getScreenWidget (void) { return screenWidget; }
    void            setScreenSize (QSize _screenSize);

signals:

public slots:

private slots:
    void update_osci (void);
};

#endif // QOSCI_H
