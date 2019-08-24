#include "mylistwidget.h"
#include "ui_mylistwidget.h"
#include <QListWidgetItem>
#include <QMessageBox>

myListWidget::myListWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myListWidget)
{
    ui->setupUi(this);
    setWindowTitle("Device State");
    for(int row =0;row <= 20;++row)
    {
        QListWidgetItem *item= new QListWidgetItem("Device:"+QString::number(row));
        item->setCheckState(Qt::Unchecked);
        ui->listWidget->addItem(item);
    }

    connect(ui->pushButton_1,SIGNAL(clicked(bool)),this,SLOT(onOKBtn()));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(onCancelBtn()));

    setFixedSize(219,331);

}

myListWidget::~myListWidget()
{
    delete ui;
}

void myListWidget::onOKBtn()
{
    int rowCount = ui->listWidget->count();
    QString checkedItems;
    for(int row=0;row<rowCount;++row)
    {
        if(ui->listWidget->item(row)->checkState()==Qt::Checked)
        {
            checkedItems+=ui->listWidget->item(row)->text()+"\n";
        }
    }
    QMessageBox::information(this,"Info",checkedItems);
}

void myListWidget::onCancelBtn()
{
    close();
}
