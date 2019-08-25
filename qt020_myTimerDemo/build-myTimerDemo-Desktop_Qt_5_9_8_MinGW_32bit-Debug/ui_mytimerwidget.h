/********************************************************************************
** Form generated from reading UI file 'mytimerwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYTIMERWIDGET_H
#define UI_MYTIMERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myTimerWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *myTimerWidget)
    {
        if (myTimerWidget->objectName().isEmpty())
            myTimerWidget->setObjectName(QStringLiteral("myTimerWidget"));
        myTimerWidget->resize(333, 77);
        horizontalLayout_2 = new QHBoxLayout(myTimerWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_1 = new QPushButton(myTimerWidget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));

        horizontalLayout->addWidget(pushButton_1);

        pushButton_2 = new QPushButton(myTimerWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(myTimerWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(myTimerWidget);

        QMetaObject::connectSlotsByName(myTimerWidget);
    } // setupUi

    void retranslateUi(QWidget *myTimerWidget)
    {
        myTimerWidget->setWindowTitle(QApplication::translate("myTimerWidget", "myTimerWidget", Q_NULLPTR));
        pushButton_1->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class myTimerWidget: public Ui_myTimerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYTIMERWIDGET_H
