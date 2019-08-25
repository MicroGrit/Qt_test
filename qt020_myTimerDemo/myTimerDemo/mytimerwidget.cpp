#include "mytimerwidget.h"
#include "ui_mytimerwidget.h"
#include <QDebug>

myTimerWidget::myTimerWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myTimerWidget)
{
    ui->setupUi(this);
    qDebug()<< startTimer(1000);
    startTimer(2000);
    startTimer(3000);
}

myTimerWidget::~myTimerWidget()
{
    delete ui;
}

void myTimerWidget::timerEvent(QTimerEvent *event)
{
    if(event->timerId()==1)
    {
        ui->pushButton_1->setText(QTime::currentTime().toString());
    }
    if(event->timerId()==2)
    {
        ui->pushButton_2->setText(QTime::currentTime().toString());
    }
    if(event->timerId()==3)
    {
        ui->pushButton_3->setText(QTime::currentTime().toString());
    }
}
