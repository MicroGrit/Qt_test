#include "finddialog.h"
#include <QHBoxLayout>
#include <QVBoxLayout>

FindDialog::FindDialog(QWidget *parent)
    : QDialog(parent)
{
    mLabel = new QLabel(tr("Find &What:"));
    mLineEdit = new QLineEdit;
    mLabel->setBuddy(mLineEdit);

    mCaseMatch = new QCheckBox(tr("Match &Case"));
    mBackWard = new QCheckBox(tr("Search &BackWard"));

    mFindBtn = new QPushButton(tr("&Find"));
    mFindBtn->setEnabled(false);

    mCloseBtn = new QPushButton(tr("Close"));

    connect(mLineEdit,SIGNAL(textChanged(QString)),this,SLOT(onEnableFindBtn(QString)));
    connect(mFindBtn,SIGNAL(clicked(bool)),this,SLOT(onFindClicked()));
    connect(mCloseBtn,SIGNAL(clicked(bool)),this,SLOT(close()));

    QHBoxLayout *leftTopLayout = new QHBoxLayout;
    leftTopLayout->addWidget(mLabel);
    leftTopLayout->addWidget(mLineEdit);

    QVBoxLayout *leftLayout = new QVBoxLayout;
    leftLayout->addLayout(leftTopLayout);
    leftLayout->addWidget(mCaseMatch);
    leftLayout->addWidget(mBackWard);

    QVBoxLayout *rightLayout = new QVBoxLayout;
    rightLayout->addWidget(mFindBtn);
    rightLayout->addWidget(mCloseBtn);

    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->addLayout(leftLayout);
    mainLayout->addLayout(rightLayout);

    setWindowTitle(tr("Find"));
    setLayout(mainLayout);
}

FindDialog::~FindDialog()
{

}

void FindDialog::onFindClicked()
{
    QString text = mLineEdit->text();
    Qt::CaseSensitivity cs = mCaseMatch->isChecked() ? Qt::CaseSensitive : Qt::CaseInsensitive;

    if(mBackWard->isChecked())
    {
        emit findPrevious(text,cs);
    }
    else
    {
        emit findNext(text,cs);
    }
}

void FindDialog::onEnableFindBtn(const QString &text)
{
    mFindBtn->setEnabled(!text.isEmpty());
}
