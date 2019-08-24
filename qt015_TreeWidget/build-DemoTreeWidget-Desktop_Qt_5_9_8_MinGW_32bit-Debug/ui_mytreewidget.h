/********************************************************************************
** Form generated from reading UI file 'mytreewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYTREEWIDGET_H
#define UI_MYTREEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myTreeWidget
{
public:
    QHBoxLayout *horizontalLayout_3;
    QTreeWidget *treeWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *schoolLabel;
    QLabel *schoolLabelValue;
    QHBoxLayout *horizontalLayout_2;
    QLabel *classLabel;
    QLabel *classLabelValue;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *myTreeWidget)
    {
        if (myTreeWidget->objectName().isEmpty())
            myTreeWidget->setObjectName(QStringLiteral("myTreeWidget"));
        myTreeWidget->resize(445, 273);
        horizontalLayout_3 = new QHBoxLayout(myTreeWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        treeWidget = new QTreeWidget(myTreeWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        horizontalLayout_3->addWidget(treeWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        schoolLabel = new QLabel(myTreeWidget);
        schoolLabel->setObjectName(QStringLiteral("schoolLabel"));

        horizontalLayout->addWidget(schoolLabel);

        schoolLabelValue = new QLabel(myTreeWidget);
        schoolLabelValue->setObjectName(QStringLiteral("schoolLabelValue"));

        horizontalLayout->addWidget(schoolLabelValue);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        classLabel = new QLabel(myTreeWidget);
        classLabel->setObjectName(QStringLiteral("classLabel"));

        horizontalLayout_2->addWidget(classLabel);

        classLabelValue = new QLabel(myTreeWidget);
        classLabelValue->setObjectName(QStringLiteral("classLabelValue"));

        horizontalLayout_2->addWidget(classLabelValue);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout);


        retranslateUi(myTreeWidget);

        QMetaObject::connectSlotsByName(myTreeWidget);
    } // setupUi

    void retranslateUi(QWidget *myTreeWidget)
    {
        myTreeWidget->setWindowTitle(QApplication::translate("myTreeWidget", "myTreeWidget", Q_NULLPTR));
        schoolLabel->setText(QApplication::translate("myTreeWidget", "\345\255\246\346\240\241", Q_NULLPTR));
        schoolLabelValue->setText(QApplication::translate("myTreeWidget", "TextLabel", Q_NULLPTR));
        classLabel->setText(QApplication::translate("myTreeWidget", "\347\217\255\347\272\247", Q_NULLPTR));
        classLabelValue->setText(QApplication::translate("myTreeWidget", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class myTreeWidget: public Ui_myTreeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYTREEWIDGET_H
