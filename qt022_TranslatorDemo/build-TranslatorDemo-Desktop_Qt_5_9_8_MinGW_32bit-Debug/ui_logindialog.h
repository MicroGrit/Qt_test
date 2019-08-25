/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(297, 151);
        verticalLayout = new QVBoxLayout(LoginDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(LoginDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        comboBox = new QComboBox(LoginDialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_4->addWidget(comboBox);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(LoginDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(LoginDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(LoginDialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton = new QPushButton(LoginDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(LoginDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);


        horizontalLayout_6->addLayout(horizontalLayout_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QWidget *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "LoginDialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("LoginDialog", "\350\257\255\350\250\200", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("LoginDialog", "\344\270\255\346\226\207", Q_NULLPTR)
         << QApplication::translate("LoginDialog", "\350\213\261\346\226\207", Q_NULLPTR)
        );
        label->setText(QApplication::translate("LoginDialog", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        label_2->setText(QApplication::translate("LoginDialog", "\345\257\206\347\240\201", Q_NULLPTR));
        pushButton->setText(QApplication::translate("LoginDialog", "\347\231\273\345\275\225", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("LoginDialog", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
