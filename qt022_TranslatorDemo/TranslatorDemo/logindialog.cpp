#include "logindialog.h"
#include "ui_logindialog.h"

LoginDialog::LoginDialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    m_QTranslator = new QTranslator(this);

    m_ISCN = true;
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::changeEvent(QEvent *e)
{
    switch(e->type())
    {
        case QEvent::LanguageChange:
            ui->retranslateUi(this);
            if(m_ISCN==false && ui->comboBox->currentIndex()==0)
            {
                ui->comboBox->setCurrentIndex(1);
            }
            break;
    default:
        break;
    }
}

void LoginDialog::on_comboBox_activated(int index)
{
    switch(index)
    {
    case 0:
        m_QTranslator->load("://Translate_CN.qm");
        break;
    case 1:
        m_QTranslator->load("://Translate_EN.qm");
        break;
    default:
        break;
    }
    qApp->installTranslator(m_QTranslator);
    ui->retranslateUi(this);
}
