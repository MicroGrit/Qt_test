#include "mytreewidget.h"
#include "ui_mytreewidget.h"
#include <QDebug>
#include <QInputDialog>
#include <QMessageBox>

//添加学校，添加班级
//右键弹出菜单
//删除学校，删除班级

myTreeWidget::myTreeWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myTreeWidget)
{
    ui->setupUi(this);
    ui->schoolLabel->setMinimumWidth(150);
    ui->classLabel->setMinimumWidth(150);
    ui->treeWidget->setHeaderLabel("School/Class");

    connect(ui->treeWidget,SIGNAL(itemClicked(QTreeWidgetItem *,int)),this,SLOT(onSetLabText(QTreeWidgetItem *,int)));
    initTreeWidget();
    createMenu();
//    m_PopMenu->show();
//    m_PopMenu->exec();
}

myTreeWidget::~myTreeWidget()
{
    delete ui;
}

void myTreeWidget::initTreeWidget()
{
    {
        QTreeWidgetItem *JinNiuSchool = new QTreeWidgetItem(ui->treeWidget);
        JinNiuSchool->setText(0,"JinNiu School");//列，文本

        QTreeWidgetItem *JinNiuClassOne = new QTreeWidgetItem(JinNiuSchool);
        JinNiuClassOne->setText(0,"JinNiuClassOne");//列，文本

        QTreeWidgetItem *JinNiuClassTwo = new QTreeWidgetItem(JinNiuSchool);
        JinNiuClassTwo->setText(0,"JinNiuClassTwo");//列，文本

        QTreeWidgetItem *JinNiuClassThree = new QTreeWidgetItem(JinNiuSchool);
        JinNiuClassThree->setText(0,"JinNiuClassThree");//列，文本
    }

    {
        QTreeWidgetItem *USTCSchool = new QTreeWidgetItem(ui->treeWidget);
        USTCSchool->setText(0,"USTCSchool");//列，文本

        QTreeWidgetItem *USTCClassOne = new QTreeWidgetItem(USTCSchool);
        USTCClassOne->setText(0,"USTCClassOne");//列，文本

        QTreeWidgetItem *USTCClassTwo = new QTreeWidgetItem(USTCSchool);
        USTCClassTwo->setText(0,"USTCClassTwo");//列，文本

        QTreeWidgetItem *USTCClassThree = new QTreeWidgetItem(USTCSchool);
        USTCClassThree->setText(0,"USTCClassThree");//列，文本
    }
}

void myTreeWidget::createMenu()
{
    m_PopMenu = new QMenu;

    m_AddMenu = new QMenu;
    m_AddMenu->setTitle("Add Action");
    m_AddMenu->setIcon(QIcon("://Icons/add.ico"));
    m_AddSchoolAction = new QAction("Add School");
    m_AddClassAction = new QAction("Add Class");
    m_AddMenu->addAction(m_AddSchoolAction);
    m_AddMenu->addAction(m_AddClassAction);

    m_DelAction = new QAction("Del Action");
    m_DelAction->setIcon(QIcon("://Icons/del.ico"));

    m_PopMenu->addMenu(m_AddMenu);
    m_PopMenu->addAction(m_DelAction);

    connect(m_AddSchoolAction,SIGNAL(triggered(bool)),this,SLOT(onAddSchool()));
    connect(m_AddClassAction,SIGNAL(triggered(bool)),this,SLOT(onAddClass()));
    connect(m_DelAction,SIGNAL(triggered(bool)),this,SLOT(onDelAction()));

}

void myTreeWidget::contextMenuEvent(QContextMenuEvent *e)
{
    if(ui->treeWidget->hasFocus())
    {
        m_PopMenu->move(cursor().pos());
        m_PopMenu->show();
    }
}

void myTreeWidget::onSetLabText(QTreeWidgetItem *item,int)
{
    qDebug()<<"clicked";
    if(item->parent())
    {
        ui->schoolLabelValue->setText(item->parent()->text(0));
        ui->classLabelValue->setText(item->text(0));
    }
    else {
        ui->schoolLabelValue->setText(item->text(0));
        ui->classLabelValue->setText("Not Choose Class");
    }
}

void myTreeWidget::onAddSchool()
{
    //添加学校
    qDebug()<<"Add School";

    bool ok;
    QString schoolText = QInputDialog::getText(this, tr("Input School Name"),
                                         tr("School Name:"), QLineEdit::Normal,
                                         "", &ok);
    if (ok && !schoolText.isEmpty())
    {
        QTreeWidgetItem *schoolItem = new QTreeWidgetItem(ui->treeWidget);
        schoolItem->setText(0,schoolText);
    }
}

void myTreeWidget::onAddClass()
{
    //添加学校
    qDebug()<<"Add Class";
    QTreeWidgetItem *currentItem = ui->treeWidget->currentItem();
    if(!currentItem)
    {
        QMessageBox::information(this,"Information","Did not Choose School");
        return;
    }
    else if(currentItem->parent())//选择的是子项，选择的是班级
    {
        bool ok;
        QString classText = QInputDialog::getText(this, tr("Input Class Name"),
                                             tr("Class Name:"), QLineEdit::Normal,
                                             "", &ok);
        if (ok && !classText.isEmpty())
        {
            QTreeWidgetItem *classItem = new QTreeWidgetItem(currentItem->parent());
            classItem->setText(0,classText);
        }
    }
    else //选择的是顶层item，选择的是学校
    {
        bool ok;
        QString classText = QInputDialog::getText(this, tr("Input Class Name"),
                                             tr("Class Name:"), QLineEdit::Normal,
                                             "", &ok);
        if (ok && !classText.isEmpty())
        {
            QTreeWidgetItem *classItem = new QTreeWidgetItem(currentItem);
            classItem->setText(0,classText);
        }
    }
}

void myTreeWidget::onDelAction()
{
    //删除学校，班级
    qDebug()<<"Del School Class";
    QTreeWidgetItem *currentItem = ui->treeWidget->currentItem();
    if(currentItem->parent())
    {
        currentItem->parent()->removeChild(currentItem);
    }
    else {
        ui->treeWidget->takeTopLevelItem(ui->treeWidget->indexOfTopLevelItem(currentItem));
    }
}

