/********************************************************************************
** Form generated from reading UI file 'mytimer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYTIMER_H
#define UI_MYTIMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myTimer
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_1;
    QLCDNumber *lcdNumber_1;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLCDNumber *lcdNumber_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *myTimer)
    {
        if (myTimer->objectName().isEmpty())
            myTimer->setObjectName(QStringLiteral("myTimer"));
        myTimer->resize(288, 102);
        horizontalLayout_3 = new QHBoxLayout(myTimer);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_1 = new QLabel(myTimer);
        label_1->setObjectName(QStringLiteral("label_1"));

        verticalLayout->addWidget(label_1);

        lcdNumber_1 = new QLCDNumber(myTimer);
        lcdNumber_1->setObjectName(QStringLiteral("lcdNumber_1"));

        verticalLayout->addWidget(lcdNumber_1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_1 = new QPushButton(myTimer);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));

        horizontalLayout->addWidget(pushButton_1);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(myTimer);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        lcdNumber_2 = new QLCDNumber(myTimer);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));

        verticalLayout_2->addWidget(lcdNumber_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_2 = new QPushButton(myTimer);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(myTimer);

        QMetaObject::connectSlotsByName(myTimer);
    } // setupUi

    void retranslateUi(QWidget *myTimer)
    {
        myTimer->setWindowTitle(QApplication::translate("myTimer", "myTimer", Q_NULLPTR));
        label_1->setText(QApplication::translate("myTimer", "Tmier1", Q_NULLPTR));
        pushButton_1->setText(QApplication::translate("myTimer", "Start", Q_NULLPTR));
        label_2->setText(QApplication::translate("myTimer", "Timer2", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("myTimer", "Start", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class myTimer: public Ui_myTimer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYTIMER_H
