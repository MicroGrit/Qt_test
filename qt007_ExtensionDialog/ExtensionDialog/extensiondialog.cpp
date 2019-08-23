#include "extensiondialog.h"
#include "ui_extensiondialog.h"
#include <QLayout>

ExtensionDialog::ExtensionDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ExtensionDialog)
{
    ui->setupUi(this);
    ui->detailGroupBox->hide();
    layout()->setSizeConstraint(QLayout::SetFixedSize);
}

ExtensionDialog::~ExtensionDialog()
{
    delete ui;
}

void ExtensionDialog::on_detailButton_clicked()
{
    if(ui->detailGroupBox->isVisible())
    {
        ui->detailGroupBox->hide();
        ui->detailButton->setText("详细信息<<<");
    }
    else {
        ui->detailGroupBox->show();
        ui->detailButton->setText("详细信息>>>");
    }
}
