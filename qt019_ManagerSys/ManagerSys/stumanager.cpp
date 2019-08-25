#include "stumanager.h"
#include "ui_stumanager.h"

StuManager::StuManager(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StuManager)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(7);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<tr("姓名")
                                               <<tr("学号")<<tr("性别")
                                               <<tr("年龄")<<tr("家庭住址")
                                               <<tr("联系电话")<<tr("描述"));
    ui->tableWidget->setAlternatingRowColors(true);//隔行变色
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

}

StuManager::~StuManager()
{
    delete ui;
}
