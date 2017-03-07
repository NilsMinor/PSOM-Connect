#ifndef MDATAHANDLER_H
#define MDATAHANDLER_H

#include <QObject>
#include <QWidget>
#include <QString>
#include <QDebug>
#include <QVBoxLayout>
#include <QMap>
#include <QMapIterator>
#include "mdata.h"


class mDataHandler : public QWidget
{
    Q_OBJECT
public:
    explicit mDataHandler(QWidget *parent = 0);
    void add (QString nameStr, QString unitStr);
    void print (void);
    QWidget getWidget (void);
    bool setData (QString keyName, float data);
    bool setData (QString keyName, float data, float target);
    void setAccuracy (int accuracy);
    int getCount (void);
    QStringList getPrettyName (void);


private:
    QMap <QString, mData*> m_dataMap;
    QStringList m_pretty_name;
    QVBoxLayout *m_layout;


signals:

public slots:
};

#endif // MDATAHANDLER_H
