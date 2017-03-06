#include "mdatahandler.h"

mDataHandler::mDataHandler(QWidget *parent) : QWidget(parent), m_layout (NULL)
{
    m_layout = new QVBoxLayout(this);
    m_layout->setContentsMargins(0,0,0,0);
    m_layout->setAlignment(Qt::AlignTop | Qt::AlignLeft);
    this->setSizePolicy(QSizePolicy::MinimumExpanding,QSizePolicy::MinimumExpanding);
    this->setContentsMargins(0,0,0,0);
    this->setLayout(m_layout);
    this->show();
}

void mDataHandler::add(QString nameStr, QString unitStr)
{
    mData * m = new mData (NULL ,nameStr, unitStr);

    m_dataMap.insert(nameStr,m);

    if (m_layout != NULL) {
        m_layout->addWidget(m->getWidget());
    }
 }
void mDataHandler::print()
{
    QMapIterator<QString, mData*> m_dataIter (m_dataMap);
    while(m_dataIter.hasNext())
    {
        m_dataIter.next();
        m_dataIter.value()->print();
    }
}
bool mDataHandler::setData(QString keyName, float data)
{
    if (!m_dataMap.contains(keyName))
        return false;

    m_dataMap.value(keyName)->setData(data);
    return true;
}
bool mDataHandler::setData(QString keyName, float data, float target)
{
    if (!m_dataMap.contains(keyName))
        return false;

    m_dataMap.value(keyName)->setData(data,target);
    return true;
}
void mDataHandler::setAccuracy(int accuracy)
{
    QMapIterator<QString, mData*> m_dataIter (m_dataMap);
    while(m_dataIter.hasNext())
    {
        m_dataIter.next();
        m_dataIter.value()->setAccuracy(accuracy);
    }
}
