#include "lineedit.h"
#include "ui_lineedit.h"


LineEdit::LineEdit(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LineEdit)
{
    ui->setupUi(this);

    ui->lineEdit_1->setEchoMode(QLineEdit::Normal);
    ui->lineEdit_1->setPlaceholderText("QLineEdit::Normal");

    ui->lineEdit_2->setEchoMode(QLineEdit::NoEcho);
    ui->lineEdit_2->setPlaceholderText("QLineEdit::NoEcho");

    ui->lineEdit_3->setEchoMode(QLineEdit::Password);
    ui->lineEdit_3->setPlaceholderText("QLineEdit::Password");

    ui->lineEdit_4->setEchoMode(QLineEdit::PasswordEchoOnEdit);
    ui->lineEdit_4->setPlaceholderText("QLineEdit::PasswordEchoOnEdit");

    QAction *action = new QAction;
    action->setIcon(QIcon("://icon/clear.ico"));

    ui->lineEdit_5->addAction(action,QLineEdit::TrailingPosition);
    connect(action,SIGNAL(triggered(bool)),this,SLOT(on_ClearContents()));
}

LineEdit::~LineEdit()
{
    delete ui;
}

void LineEdit::on_ClearContents()
{
    ui->lineEdit_5->clear();
}

void LineEdit::on_pushButton_1_clicked()
{
    QMessageBox::information(this,"Echo",ui->lineEdit_1->text());
    ui->lineEdit_1->clear();
}

void LineEdit::on_pushButton_2_clicked()
{
    QMessageBox::information(this,"Echo",ui->lineEdit_2->text());
    ui->lineEdit_2->clear();
}

void LineEdit::on_pushButton_3_clicked()
{
    QMessageBox::information(this,"Echo",ui->lineEdit_3->text());
    ui->lineEdit_3->clear();
}

void LineEdit::on_pushButton_4_clicked()
{
    QMessageBox::information(this,"Echo",ui->lineEdit_4->text());
    ui->lineEdit_4->clear();
}
