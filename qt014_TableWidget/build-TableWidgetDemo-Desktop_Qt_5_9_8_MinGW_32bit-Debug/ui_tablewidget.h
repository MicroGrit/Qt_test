/********************************************************************************
** Form generated from reading UI file 'tablewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEWIDGET_H
#define UI_TABLEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TableWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEditSearch;
    QPushButton *BtnAdd;
    QPushButton *BtnDel;
    QTableWidget *tableWidget;

    void setupUi(QWidget *TableWidget)
    {
        if (TableWidget->objectName().isEmpty())
            TableWidget->setObjectName(QStringLiteral("TableWidget"));
        TableWidget->resize(459, 335);
        verticalLayout_2 = new QVBoxLayout(TableWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lineEditSearch = new QLineEdit(TableWidget);
        lineEditSearch->setObjectName(QStringLiteral("lineEditSearch"));

        horizontalLayout->addWidget(lineEditSearch);

        BtnAdd = new QPushButton(TableWidget);
        BtnAdd->setObjectName(QStringLiteral("BtnAdd"));

        horizontalLayout->addWidget(BtnAdd);

        BtnDel = new QPushButton(TableWidget);
        BtnDel->setObjectName(QStringLiteral("BtnDel"));

        horizontalLayout->addWidget(BtnDel);


        verticalLayout->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(TableWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(TableWidget);

        QMetaObject::connectSlotsByName(TableWidget);
    } // setupUi

    void retranslateUi(QWidget *TableWidget)
    {
        TableWidget->setWindowTitle(QApplication::translate("TableWidget", "TableWidget", Q_NULLPTR));
        BtnAdd->setText(QApplication::translate("TableWidget", "\346\217\222\345\205\245\350\241\214", Q_NULLPTR));
        BtnDel->setText(QApplication::translate("TableWidget", "\345\210\240\351\231\244\350\241\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TableWidget: public Ui_TableWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEWIDGET_H
