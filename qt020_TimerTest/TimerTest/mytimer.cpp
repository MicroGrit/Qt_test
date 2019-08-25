#include "mytimer.h"
#include "ui_mytimer.h"
#include <QTime>

myTimer::myTimer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myTimer)
{
    ui->setupUi(this);

    ui->lcdNumber_1->setDigitCount(8);
    ui->lcdNumber_2->setDigitCount(8);

    m_Timer1 = new QTimer;
    connect(m_Timer1,SIGNAL(timeout()),this,SLOT(onUpdateLcdNumber1()));
    m_Timer1->setTimerType(Qt::PreciseTimer);

    m_Timer2 = new QTimer;
    connect(m_Timer2,SIGNAL(timeout()),this,SLOT(onUpdateLcdNumber2()));
    m_Timer2->setTimerType(Qt::PreciseTimer);
//    m_Timer2->start(1000);
}

myTimer::~myTimer()
{
    delete ui;
}

void myTimer::on_pushButton_1_clicked()
{
    if(m_Timer1->isActive())
    {
        m_Timer1->stop();
        ui->pushButton_1->setText("Start");
    }
    else {
        m_Timer1->start(2000);
        ui->pushButton_1->setText("Stop");
    }
}

void myTimer::on_pushButton_2_clicked()
{
    if(m_Timer2->isActive())
    {
        m_Timer2->stop();
        ui->pushButton_1->setText("Start");
    }
    else {
        m_Timer2->start(1000);
        ui->pushButton_2->setText("Stop");
    }
}

void myTimer::onUpdateLcdNumber1()
{
    QString timerStr = QTime::currentTime().toString("hh:mm:ss");
    ui->lcdNumber_1->display(timerStr);
}

void myTimer::onUpdateLcdNumber2()
{
    QString timerStr = QTime::currentTime().toString("hh:mm:ss");
    ui->lcdNumber_2->display(timerStr);
}
