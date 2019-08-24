/********************************************************************************
** Form generated from reading UI file 'checkbox.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKBOX_H
#define UI_CHECKBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CheckBox
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_2;
    QPushButton *pushButton_2;

    void setupUi(QDialog *CheckBox)
    {
        if (CheckBox->objectName().isEmpty())
            CheckBox->setObjectName(QStringLiteral("CheckBox"));
        CheckBox->resize(254, 182);
        verticalLayout = new QVBoxLayout(CheckBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(CheckBox);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout->addWidget(checkBox);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(CheckBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        checkBox_2 = new QCheckBox(groupBox_2);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        horizontalLayout_2->addWidget(checkBox_2);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addWidget(groupBox_2);


        retranslateUi(CheckBox);

        QMetaObject::connectSlotsByName(CheckBox);
    } // setupUi

    void retranslateUi(QDialog *CheckBox)
    {
        CheckBox->setWindowTitle(QApplication::translate("CheckBox", "CheckBox", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("CheckBox", "\350\216\267\345\217\226\347\212\266\346\200\201", Q_NULLPTR));
        checkBox->setText(QApplication::translate("CheckBox", "\345\210\233\345\273\272\347\225\214\351\235\242", Q_NULLPTR));
        pushButton->setText(QApplication::translate("CheckBox", "\344\270\213\344\270\200\346\255\245", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("CheckBox", "\347\202\271\345\207\273\345\213\276\351\200\211", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("CheckBox", "\345\213\276\351\200\211", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("CheckBox", "\344\270\213\344\270\200\346\255\245", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CheckBox: public Ui_CheckBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKBOX_H
