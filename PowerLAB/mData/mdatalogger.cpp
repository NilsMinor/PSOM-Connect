#include "mdatalogger.h"

mDataLogger::mDataLogger(QObject *parent) : QObject(parent)
{
    m_file = NULL;
    m_stream = NULL;
    logging = false;
    m_timer.setTimerType(Qt::PreciseTimer);
    connect (&m_timer, SIGNAL(timeout()), this, SLOT(log()));
}

void mDataLogger::add(mDataHandler *list)
{
    mDataHandlerList.append(list);
}
void mDataLogger::enableLogging(int timeout)
{
    m_timer.start(timeout * 1000);
    logging = true;
}
void mDataLogger::disableLogging(void)
{
    logging = false;
    m_file->close();
    m_file = NULL;
    m_stream = NULL;
    m_timer.stop();
}
void mDataLogger::create(QString fileName)
{
    m_fileName = fileName.append(getTimestamp());
    m_file = new QFile (m_fileName);

    if (m_file->open(QFile::WriteOnly|QFile::Truncate))
    {
         m_stream = new QTextStream (m_file);
    }
}
QString mDataLogger::getTimestamp()
{
    QDateTime dateTime = dateTime.currentDateTime();
    //return dateTime.toString("yyyy-MM-dd hh:mm:ss");
    return dateTime.toString("hh:mm:ss");
}

void mDataLogger::log()
{
    if (m_file != NULL && m_stream != NULL && logging) {

        if (mDataHandlerList.size() != 4) return;   // L1, L2, L3, LT

      qDebug () << getTimestamp();
      /*  foreach( mData item, mDataHandlerList[0] )
        {
            qDebug () << getTimestamp() << " " << item->getData();
        }
        */
    }
}
