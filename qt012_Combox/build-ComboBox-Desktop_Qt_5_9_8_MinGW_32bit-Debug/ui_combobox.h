/********************************************************************************
** Form generated from reading UI file 'combobox.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMBOBOX_H
#define UI_COMBOBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ComboBox
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QCheckBox *checkBox;
    QPushButton *pushButton;

    void setupUi(QWidget *ComboBox)
    {
        if (ComboBox->objectName().isEmpty())
            ComboBox->setObjectName(QStringLiteral("ComboBox"));
        ComboBox->resize(280, 96);
        verticalLayout = new QVBoxLayout(ComboBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        comboBox = new QComboBox(ComboBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);

        checkBox = new QCheckBox(ComboBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout->addWidget(checkBox);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(ComboBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(ComboBox);

        QMetaObject::connectSlotsByName(ComboBox);
    } // setupUi

    void retranslateUi(QWidget *ComboBox)
    {
        ComboBox->setWindowTitle(QApplication::translate("ComboBox", "ComboBox", Q_NULLPTR));
        checkBox->setText(QApplication::translate("ComboBox", "CheckBox", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ComboBox", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ComboBox: public Ui_ComboBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMBOBOX_H
