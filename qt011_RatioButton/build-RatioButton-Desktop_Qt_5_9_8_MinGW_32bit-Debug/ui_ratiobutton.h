/********************************************************************************
** Form generated from reading UI file 'ratiobutton.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RATIOBUTTON_H
#define UI_RATIOBUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RatioButton
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_1;
    QRadioButton *radioButton_2;
    QPushButton *pushButton_1;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QPushButton *pushButton_2;

    void setupUi(QDialog *RatioButton)
    {
        if (RatioButton->objectName().isEmpty())
            RatioButton->setObjectName(QStringLiteral("RatioButton"));
        RatioButton->resize(287, 216);
        verticalLayout_3 = new QVBoxLayout(RatioButton);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(RatioButton);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        radioButton_1 = new QRadioButton(groupBox);
        radioButton_1->setObjectName(QStringLiteral("radioButton_1"));

        verticalLayout->addWidget(radioButton_1);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);


        horizontalLayout->addLayout(verticalLayout);

        pushButton_1 = new QPushButton(groupBox);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));

        horizontalLayout->addWidget(pushButton_1);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(RatioButton);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        verticalLayout_2->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(groupBox_2);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        verticalLayout_2->addWidget(radioButton_4);


        horizontalLayout_2->addLayout(verticalLayout_2);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout_3->addWidget(groupBox_2);


        retranslateUi(RatioButton);

        QMetaObject::connectSlotsByName(RatioButton);
    } // setupUi

    void retranslateUi(QDialog *RatioButton)
    {
        RatioButton->setWindowTitle(QApplication::translate("RatioButton", "RatioButton", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("RatioButton", "\347\210\261\345\245\275", Q_NULLPTR));
        radioButton_1->setText(QApplication::translate("RatioButton", "\347\234\213\344\271\246", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("RatioButton", "\350\267\221\346\255\245", Q_NULLPTR));
        pushButton_1->setText(QApplication::translate("RatioButton", "PushButton1", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("RatioButton", "\344\271\246\347\261\215", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("RatioButton", "Qt GUI4", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("RatioButton", "Qt GUI5", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("RatioButton", "PushButton2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RatioButton: public Ui_RatioButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RATIOBUTTON_H
