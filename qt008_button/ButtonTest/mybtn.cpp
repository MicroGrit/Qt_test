#include "mybtn.h"
#include "ui_mybtn.h"
#include <QDebug>
#include <QMessageBox>
#include <QMenu>

MyBtn::MyBtn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyBtn)
{
    ui->setupUi(this);
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(on_Btn_2()));
    ui->pushButton_3->installEventFilter(this);

    QMenu *menu = new QMenu;
    menu->addAction("打开");
    menu->addAction("关闭");
    ui->pushButton_4->setMenu(menu);
}

MyBtn::~MyBtn()
{
    delete ui;
}

void MyBtn::on_pushButton_1_clicked()
{
    qDebug()<<"You Clicked Btn1";
}

void MyBtn::on_Btn_2()
{
    QMessageBox::information(this,"Btn_2","You chlicked Btn_2");
}

void MyBtn::enterEvent(QEvent *event)
{
    //ui->pushButton_3->setStyleSheet("background-color: rgb(85, 170, 0);");
}

void MyBtn::leaveEvent(QEvent *event)
{

}

bool MyBtn::eventFilter(QObject *obj, QEvent *event)
{
    if(event->type() == QEvent::HoverEnter){
        if(obj==ui->pushButton_3){
            ui->pushButton_3->setStyleSheet("background-color: rgb(85, 170, 0);");
            qDebug()<<"Btn_3 Enter!";
            return true;
        }
        else {
            return QObject::eventFilter(obj,event);
        }
    }
    else if(event->type() == QEvent::HoverLeave){
        if(obj==ui->pushButton_3){
            ui->pushButton_3->setStyleSheet("background-color: rgb(255, 255, 0);");
            qDebug()<<"Btn_3 Leave!";
            return true;
        }
        else {
            return QObject::eventFilter(obj,event);
        }
    }
    else {
        return QObject::eventFilter(obj,event);
    }

}
