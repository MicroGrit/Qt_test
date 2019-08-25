#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mathplugin.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    MathPlugin math;
    ui->lineEdit_3->setText(QString::number(math.add(ui->lineEdit_1->text().toDouble(),ui->lineEdit_2->text().toDouble())));
}
