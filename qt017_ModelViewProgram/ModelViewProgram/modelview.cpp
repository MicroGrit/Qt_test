#include "modelview.h"
#include "ui_modelview.h"

ModelView::ModelView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ModelView)
{
    ui->setupUi(this);
    m_pModel = new QStandardItemModel(20,5);
    m_pModel->setHorizontalHeaderLabels(QStringList()<<"Name"<<"Class"<<"Age"<<"Sex"<<"Grade");

    ui->tableView_1->setModel(m_pModel);
    ui->tableView_1->setAlternatingRowColors(true);
    ui->tableView_1->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView_1->horizontalHeader()->setStretchLastSection(true);


    ui->tableView_2->setModel(m_pModel);
    ui->tableView_2->horizontalHeader()->setAlternatingRowColors(true);//horizontalHeader()这里无效
    ui->tableView_2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView_2->horizontalHeader()->setStretchLastSection(true);

    connect(ui->BtnClear,SIGNAL(clicked(bool)),this,SLOT(onBtnClear()));
    showMaximized();
}

ModelView::~ModelView()
{
    delete ui;
}

void ModelView::onBtnClear()
{
    int rowCount=m_pModel->rowCount();
    for (int r= rowCount; r>=0; --r)
    {
        m_pModel->removeRow(r);
    }
    for (int r= 0; r<rowCount; ++r)
    {
        m_pModel->insertRow(r);
    }
}
