#ifndef MDATA_H
#define MDATA_H

#include <QObject>
#include <QDebug>
#include <QString>
#include <QVBoxLayout>
#include <QLabel>

enum ERR_STYLE {
    absolute,
    relative,
    absolute_percent,
};

class mData : public QObject
{
    Q_OBJECT
public:
    explicit mData(QObject *parent = 0, QString nameStr = "", QString unitStr = "", bool err = true);
    void print (void);
    QWidget * getWidget (void);

    void setData (float data);
    void setData (float data, float target);
    void setAccuracy (int accuracy);
    void setTarget (float target);
    void setErrorStyle (ERR_STYLE style);

    float getData (void) { return m_data; }
    float getError (void) { return m_error; }
    QString getName (void) { return m_nameStr; }
    QString getPrettyName (void) { return QString(m_nameStr + " [" + m_unitStr + "]"); }

private:
    QString calcError(float target);

    QString m_unitStr;
    QString m_nameStr;
    ERR_STYLE m_errstyle;
    QWidget * m_widget;
    QHBoxLayout *m_layout;
    QList <QLabel*> m_labels;
    float   m_data;
    float   m_error;
    float   m_target;
    int      m_accuracy;
    bool   m_supportError;

signals:

public slots:
};

#endif // MDATA_H
