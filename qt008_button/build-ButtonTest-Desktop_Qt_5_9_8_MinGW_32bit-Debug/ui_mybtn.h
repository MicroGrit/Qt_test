/********************************************************************************
** Form generated from reading UI file 'mybtn.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYBTN_H
#define UI_MYBTN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MyBtn
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *MyBtn)
    {
        if (MyBtn->objectName().isEmpty())
            MyBtn->setObjectName(QStringLiteral("MyBtn"));
        MyBtn->resize(260, 125);
        gridLayout = new QGridLayout(MyBtn);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_1 = new QPushButton(MyBtn);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));

        gridLayout->addWidget(pushButton_1, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(MyBtn);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(MyBtn);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(MyBtn);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 1, 1, 1, 1);


        retranslateUi(MyBtn);

        QMetaObject::connectSlotsByName(MyBtn);
    } // setupUi

    void retranslateUi(QDialog *MyBtn)
    {
        MyBtn->setWindowTitle(QApplication::translate("MyBtn", "MyBtn", Q_NULLPTR));
        pushButton_1->setText(QApplication::translate("MyBtn", "PushButton1", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MyBtn", "PushButton2", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MyBtn", "PushButton3", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MyBtn", "PushButton4", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyBtn: public Ui_MyBtn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYBTN_H
