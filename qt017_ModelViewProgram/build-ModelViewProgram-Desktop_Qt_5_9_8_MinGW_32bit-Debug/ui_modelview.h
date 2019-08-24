/********************************************************************************
** Form generated from reading UI file 'modelview.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODELVIEW_H
#define UI_MODELVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModelView
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableView *tableView_1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTableView *tableView_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *BtnClear;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *ModelView)
    {
        if (ModelView->objectName().isEmpty())
            ModelView->setObjectName(QStringLiteral("ModelView"));
        ModelView->resize(414, 316);
        verticalLayout_3 = new QVBoxLayout(ModelView);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(ModelView);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        tableView_1 = new QTableView(ModelView);
        tableView_1->setObjectName(QStringLiteral("tableView_1"));

        verticalLayout->addWidget(tableView_1);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(ModelView);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        tableView_2 = new QTableView(ModelView);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));

        verticalLayout_2->addWidget(tableView_2);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        BtnClear = new QPushButton(ModelView);
        BtnClear->setObjectName(QStringLiteral("BtnClear"));

        horizontalLayout_2->addWidget(BtnClear);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(ModelView);

        QMetaObject::connectSlotsByName(ModelView);
    } // setupUi

    void retranslateUi(QWidget *ModelView)
    {
        ModelView->setWindowTitle(QApplication::translate("ModelView", "ModelView", Q_NULLPTR));
        label->setText(QApplication::translate("ModelView", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("ModelView", "TextLabel", Q_NULLPTR));
        BtnClear->setText(QApplication::translate("ModelView", "\346\270\205\346\245\232\346\225\260\346\215\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ModelView: public Ui_ModelView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODELVIEW_H
