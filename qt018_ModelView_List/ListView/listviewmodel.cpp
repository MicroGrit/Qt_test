#include "listviewmodel.h"
#include "ui_listviewmodel.h"
#include <QStandardItem>
#include <QMessageBox>
#include <QFile>

ListViewModel::ListViewModel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListViewModel)
{
    ui->setupUi(this);
    initModel();
    ui->listView->setModel(m_StuModel);

    setStyleSheet("dark");

}

ListViewModel::~ListViewModel()
{
    delete ui;
}

void ListViewModel::on_BtnOK_clicked()
{
    QString currentModel = ui->comboBox->currentText();
    QString checkedStr;
    if(currentModel.contains("学生"))
    {
        for(int i = 0;i<m_StuModel->rowCount();i++)
        {
            if(m_StuModel->item(i,0)->checkState()==Qt::Checked)
            {
                checkedStr += m_StuModel->item(i,0)->text()+"\n";
            }
        }
    }
    if(currentModel.contains("老师"))
    {
        for(int i = 0;i<m_TeacherModel->rowCount();i++)
        {
            if(m_TeacherModel->item(i,0)->checkState()==Qt::Checked)
            {
                checkedStr += m_TeacherModel->item(i,0)->text()+"\n";
            }
        }
    }
    if(currentModel.contains("工人"))
    {
        for(int i = 0;i<m_WorkerModel->rowCount();i++)
        {
            if(m_WorkerModel->item(i,0)->checkState()==Qt::Checked)
            {
                checkedStr += m_WorkerModel->item(i,0)->text()+"\n";
            }
        }
    }
    QMessageBox megBox;
    megBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    megBox.setText("当前模型："+currentModel);
    megBox.setInformativeText(checkedStr);

    if(megBox.exec() == QMessageBox::Accepted)
    {
        close();
    }
}

void ListViewModel::on_BtnCancel_clicked()
{

}

void ListViewModel::initModel()
{
    m_StuModel = new QStandardItemModel(0,1);
    for(int i = 0;i<10;i++)
    {
        QStandardItem *item = new QStandardItem(QString("学生%1").arg(i));
        item->setCheckable(true);
        item->setCheckState(Qt::Checked);
        m_StuModel->appendRow(item);
    }
    m_TeacherModel = new QStandardItemModel(0,1);
    for(int i = 0;i<10;i++)
    {
        QStandardItem *item = new QStandardItem(QString("老师%1").arg(i));
        item->setCheckable(true);
        item->setCheckState(Qt::Checked);
        m_TeacherModel->appendRow(item);
    }
    m_WorkerModel = new QStandardItemModel(0,1);
    for(int i = 0;i<10;i++)
    {
        QStandardItem *item = new QStandardItem(QString("工人%1").arg(i));
        item->setCheckable(true);
        item->setCheckState(Qt::Checked);
        m_WorkerModel->appendRow(item);
    }

}

void ListViewModel::setStyleSheet(QString sheetName)
{
    QFile file("://style/"+sheetName+".qss");
    file.open(QFile::ReadOnly);
    QString styleSheet = QString::fromLatin1(file.readAll());
    qApp->setStyleSheet(styleSheet);
}

void ListViewModel::on_comboBox_currentIndexChanged(const QString &arg1)
{
    if(arg1.contains("学生"))
    {
        ui->listView->setModel(m_StuModel);
        setStyleSheet("dark");
    }
    if(arg1.contains("老师"))
    {
        ui->listView->setModel(m_TeacherModel);
        setStyleSheet("black");
    }
    if(arg1.contains("工人"))
    {
        ui->listView->setModel(m_WorkerModel);
        setStyleSheet("white");
    }
}


