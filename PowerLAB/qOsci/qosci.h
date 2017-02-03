#ifndef QOSCI_H
#define QOSCI_H

#include <QWidget>
#include <QWidget>
#include <QHBoxLayout>
#include <QTimer>
#include <QSize>
#include <QPushButton>
#include <QTableWidget>

#include "qcustomplot.h"
#include "qoscisignal.h"

enum OsciType {
    OfTypeOsci = 1,
    OfTypeHarmonics = 2
};
enum OsciHarmAxisStyle {
    FrequencyAxisStyle = 1,
    HarmonicNumberAxisStyle = 2
};
enum OsciVerticalAxisStyle {
    VoltageAxisStyle = 1,
    CurrentAxisStyle = 2,
    PPowerAxisStyle = 3,
    QPowerAxisStyle = 4,
    SPowerAxisStyle = 5
};

class qOsci : public QWidget
{
    Q_OBJECT
private:
    QCustomPlot     *customPlot;
    QTimer          *osciTimer;
    QWidget         *screenWidget;
    QHBoxLayout     *screenLayout;
    int             SignalCount;

     QCPBars *harmonicBars;
   // QList <qOsciSignal> m_signals;
    qOsciSignal     * testSig1;
    qOsciSignal     * testSig2;
    void    initAsOsci      (void);
    void    initAsHarmonics (void);
    QTableWidget            * harmonicsTable;
    OsciType                osciType;
    OsciHarmAxisStyle       harmonicsAxisStyle;
    OsciVerticalAxisStyle   verticalAxisStyle;


public:
    explicit qOsci (QWidget *parent = 0, OsciType type = OfTypeOsci);
    QWidget         *getScreenWidget (void) { return screenWidget; }
    void            setScreenSize (QSize _screenSize);
    void            setTableWidgetForHarmonics (QTableWidget * t);
    void            setHarmonicsAxisStyle (OsciHarmAxisStyle style);
    void            setVerticalAxisStyle (OsciVerticalAxisStyle style);

signals:

public slots:
    void            setHarmonics (float *data, float freq, int count);
private slots:
    void update_osci (void);
};

#endif // QOSCI_H
