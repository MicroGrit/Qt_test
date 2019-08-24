#include "ratiobutton.h"
#include "ui_ratiobutton.h"
#include <QMessageBox>

RatioButton::RatioButton(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RatioButton)
{
    ui->setupUi(this);
//    ui->radioButton_1->setChecked(true);
    ui->radioButton_3->setChecked(false);
    ui->radioButton_1->setDisabled(true);

    ui->radioButton_4->setIcon(QIcon("://icon/clear.ico"));
}

RatioButton::~RatioButton()
{
    delete ui;
}

void RatioButton::on_pushButton_1_clicked()
{
    if(ui->radioButton_1->isChecked())
    {
        QMessageBox::information(this,"爱好",ui->radioButton_1->text());
    }
    else if (ui->radioButton_2->isChecked())
    {
        QMessageBox::information(this,"爱好",ui->radioButton_2->text());
    }
}

void RatioButton::on_pushButton_2_clicked()
{
    if(ui->radioButton_3->isChecked())
    {
        QMessageBox::information(this,"书籍",ui->radioButton_3->text());
    }
    else if (ui->radioButton_4->isChecked())
    {
        QMessageBox::information(this,"书籍",ui->radioButton_4->text());
    }
}

void RatioButton::on_radioButton_3_toggled(bool checked)
{
    if(checked)
    {
        QMessageBox::information(this,"书籍",ui->radioButton_3->text());
    }
}
