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
#include "mData/mdatalogger.h"

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
public:
    explicit qOsci (QWidget *parent = 0, OsciType type = OfTypeOsci);
    QWidget      *getScreenWidget (void) { return screenWidget; }
    void            setScreenSize (QSize _screenSize);
    void            setHarmonicsAxisStyle (OsciHarmAxisStyle style);
    void            setVerticalAxisStyle (OsciVerticalAxisStyle style);

    void            osciStart (void);
    void            osciStop (void);
    void            osciReset (void);

private:
    QCustomPlot     *customPlot;
    QTimer          *osciTimer;
    QWidget         *screenWidget;
    QHBoxLayout     *screenLayout;
    int             SignalCount;

     QCPBars *harmonicBars;
    qOsciSignal     * testSig1;
    qOsciSignal     * testSig2;
    void    initAsOsci      (void);

    void    initAsHarmonics (void);
    OsciType                osciType;
    OsciHarmAxisStyle       harmonicsAxisStyle;
    OsciVerticalAxisStyle   verticalAxisStyle;
    QCPItemText *groupTracerText ;


signals:
    void osci_timeout (void);
public slots:
    void  setHarmonics (float *data, float freq, int count, int active);
    void updateOsci(mDataHandler *L1,mDataHandler *L2,mDataHandler *L3,mDataHandler *LT );
     void updateActualHarmonic (int actualHarm);
private slots:
    void realtimeDataSlot (void);
};

#endif // QOSCI_H
