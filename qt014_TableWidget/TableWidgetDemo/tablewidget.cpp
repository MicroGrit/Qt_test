#include "tablewidget.h"
#include "ui_tablewidget.h"

TableWidget::TableWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TableWidget)
{
    ui->setupUi(this);

    ui->lineEditSearch->setMaximumWidth(200);
    ui->lineEditSearch->setPlaceholderText("Search..");

    ui->tableWidget->setRowCount(5);
    ui->tableWidget->setColumnCount(15);
    ui->tableWidget->setAlternatingRowColors(true);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

TableWidget::~TableWidget()
{
    delete ui;
}

void TableWidget::on_BtnAdd_clicked()
{
    //添加行
    int currentRow = ui->tableWidget->currentRow();
    ui->tableWidget->insertRow(currentRow+1);
}

void TableWidget::on_BtnDel_clicked()
{
    //删除行
    int currentRow = ui->tableWidget->currentRow();
    ui->tableWidget->removeRow(currentRow);
}

void TableWidget::on_lineEditSearch_textChanged(const QString &arg1)
{
    //搜索
    if(arg1.isEmpty())
    {
        int rowCount=ui->tableWidget->rowCount();
        for(int row=0;row<rowCount;row++)
        {
            ui->tableWidget->showRow(row);
        }
        return;
    }

    int rowCount = ui->tableWidget->rowCount();
    int columnCount = ui->tableWidget->columnCount();
    for(int row =0;row<rowCount;row++)
    {
        QString rowData;
        for(int colomn=0;colomn<columnCount;colomn++)
        {
            if(ui->tableWidget->item(row,colomn))
            {
                rowData+=ui->tableWidget->item(row,colomn)->text();
            }
        }

        if(!rowData.isEmpty())//有数据
        {
            if(rowData.contains(arg1))
            {
                ui->tableWidget->showRow(row);
            }
            else {
                ui->tableWidget->hideRow(row);
            }
        }
        else //无数据
        {
            ui->tableWidget->hideRow(row);
        }
    }


}
