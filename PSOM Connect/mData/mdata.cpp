#include "mdata.h"

mData::mData(QObject *parent, QString nameStr, QString unitStr, bool err)
    : QObject(parent), m_nameStr (nameStr), m_unitStr (unitStr)

{
    m_errstyle = absolute;
    m_data = 0;
    m_error = 0;
    m_accuracy = 3;
    m_supportError = err;

    m_labels.append( new QLabel ( m_nameStr));
    m_labels.append( new QLabel ( QString::number(m_data, 'f', m_accuracy ) ) );
    m_labels.append( new QLabel ( m_unitStr) );

    if (m_supportError) {
        m_labels.append( new QLabel ( QString::number(m_error, 'f', 1) ) );
        m_labels[3]->setStyleSheet("QLabel { color : red }");
    }
    m_labels[1]->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);

    m_layout = new QHBoxLayout ();
    m_widget = new QWidget ( );
    m_layout->setContentsMargins(0,0,0,0);
    m_layout->setSpacing(10);


    foreach (QLabel *l, m_labels) {
       m_layout->addWidget(l,Qt::AlignLeft);
       m_layout->addStretch();
     }

    m_widget->setLayout(m_layout);
}

void mData::print()
{
    qDebug () << m_nameStr << " : " << m_data << " : " << m_unitStr;
}
QString mData::calcError(float target)
{
    if (target == 0)    return QString("0.0");
    int accuracy = 2;
    QString appendix;


    switch (m_errstyle) {
    case absolute:
        m_error = m_data - target ;  // F = x_meas - x_real
        appendix = this->m_unitStr;
        break;
    case relative:
        m_error = ( (m_data - target) / target) * 100;     // F = x_meas - x_real / x_real * 100%
        appendix = "%";
        break;
    case absolute_percent:
        m_error =  100 - (m_data * 100.0 / target);
        appendix = "%";
        break;

    default:
        break;
    }

    if (m_error < 1) {
        appendix.clear();

        switch (m_errstyle) {
        case absolute:
             m_error =  m_error * 1000;  // V to mV
            appendix ="m" + this->m_unitStr;
            break;
        case relative:
             m_error =  m_error * 10;   // % to ppm
            appendix = "ppm";
            break;
        case absolute_percent:
            m_error =  m_error * 10;   // % to ppm
           appendix = "ppm";
            break;
        }

    }

    QString error_str;
    error_str = QString::number(m_error, 'f', accuracy);
    error_str.append(appendix);
    return  error_str;
}

void mData::setData(float data)
{
    m_data = data;
    m_labels[1]->setText( QString::number(m_data, 'f', m_accuracy) ); // update label
}
void mData::setData(float data, float target)
{
    setData (data);
    m_target = target;
    if (m_supportError ) {
        m_labels[3]->setText(calcError (m_target)); // update label
    }
}
void mData::setAccuracy(int accuracy)
{
    m_accuracy = accuracy;
    this->setData( m_data,m_target ); // update
}
void mData::setTarget(float target)
{
    m_target = target;
    if (m_supportError) {
        m_labels[3]->setText( calcError ( m_target ) ); // update label
    }
}
void mData::setErrorStyle(ERR_STYLE style)
{
    m_errstyle = style;
}

QWidget *mData::getWidget()
{
    return m_widget;
}



