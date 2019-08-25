#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QWidget>
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initUI();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initUI()
{
    m_pStuManager = new StuManager;
    ui->tabWidget->addTab(m_pStuManager,tr("学生管理"));
    m_pTeacherManager = new TeacherManager;
    ui->tabWidget->addTab(m_pTeacherManager,tr("教师管理"));

    ui->tabWidget->setStyleSheet("QTabBar::tab{min-width:30ex;min-height:15ex;}");
    createCornerBtn();
    showMaximized();
}

void MainWindow::createCornerBtn()
{
    QPushButton *btnFresh = new QPushButton(tr("刷新"));
    QPushButton *btnAdd = new QPushButton(tr("添加"));
    QPushButton *btnEdit = new QPushButton(tr("编辑"));
    QPushButton *btnDel = new QPushButton(tr("删除"));

    QWidget *cornerWidget = new QWidget;
    QHBoxLayout *hLayout = new QHBoxLayout;
    hLayout->addWidget(btnFresh);
    hLayout->addWidget(btnAdd );
    hLayout->addWidget(btnEdit);
    hLayout->addWidget(btnDel );
    cornerWidget->setLayout(hLayout);
    ui->tabWidget->setCornerWidget(cornerWidget,Qt::TopRightCorner);
}
