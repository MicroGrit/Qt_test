/********************************************************************************
** Form generated from reading UI file 'listviewmodel.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTVIEWMODEL_H
#define UI_LISTVIEWMODEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListViewModel
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QComboBox *comboBox;
    QListView *listView;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *BtnOK;
    QPushButton *BtnCancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *ListViewModel)
    {
        if (ListViewModel->objectName().isEmpty())
            ListViewModel->setObjectName(QStringLiteral("ListViewModel"));
        ListViewModel->resize(261, 346);
        verticalLayout = new QVBoxLayout(ListViewModel);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label = new QLabel(ListViewModel);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(ListViewModel);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout);

        listView = new QListView(ListViewModel);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout->addWidget(listView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        BtnOK = new QPushButton(ListViewModel);
        BtnOK->setObjectName(QStringLiteral("BtnOK"));

        horizontalLayout_2->addWidget(BtnOK);

        BtnCancel = new QPushButton(ListViewModel);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));

        horizontalLayout_2->addWidget(BtnCancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(ListViewModel);

        QMetaObject::connectSlotsByName(ListViewModel);
    } // setupUi

    void retranslateUi(QWidget *ListViewModel)
    {
        ListViewModel->setWindowTitle(QApplication::translate("ListViewModel", "ListViewModel", Q_NULLPTR));
        label->setText(QApplication::translate("ListViewModel", "\346\250\241\345\236\213", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("ListViewModel", "\345\255\246\347\224\237", Q_NULLPTR)
         << QApplication::translate("ListViewModel", "\350\200\201\345\270\210", Q_NULLPTR)
         << QApplication::translate("ListViewModel", "\345\267\245\344\272\272", Q_NULLPTR)
        );
        BtnOK->setText(QApplication::translate("ListViewModel", "\347\241\256\345\256\232", Q_NULLPTR));
        BtnCancel->setText(QApplication::translate("ListViewModel", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ListViewModel: public Ui_ListViewModel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTVIEWMODEL_H
