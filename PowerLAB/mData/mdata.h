#ifndef MDATA_H
#define MDATA_H

#include <QObject>
#include <QDebug>
#include <QString>
#include <QVBoxLayout>
#include <QLabel>

class mData : public QObject
{
    Q_OBJECT
public:
    explicit mData(QObject *parent = 0, QString nameStr = "", QString unitStr = "");
    void print (void);
    QWidget * getWidget (void);
    void setData (float data);
    void setData (float data, float target);
    void setAccuracy (int accuracy);

private:
    float calcError (float target);

    QString m_unitStr;
    QString m_nameStr;
    float   m_data;
    float   m_error;
    float   m_target;
    QWidget * m_widget;
    QHBoxLayout *m_layout;
    QList <QLabel*> m_labels;
    int     m_accuracy;

signals:

public slots:
};

#endif // MDATA_H