/********************************************************************************
** Form generated from reading UI file 'extensiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTENSIONDIALOG_H
#define UI_EXTENSIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExtensionDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_2;
    QPushButton *detailButton;
    QGroupBox *detailGroupBox;
    QGridLayout *gridLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QLineEdit *lineEdit_6;

    void setupUi(QDialog *ExtensionDialog)
    {
        if (ExtensionDialog->objectName().isEmpty())
            ExtensionDialog->setObjectName(QStringLiteral("ExtensionDialog"));
        ExtensionDialog->resize(345, 236);
        horizontalLayout_2 = new QHBoxLayout(ExtensionDialog);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox = new QGroupBox(ExtensionDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_3->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout_3->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout_3->addWidget(lineEdit_3, 2, 1, 1, 1);


        horizontalLayout->addWidget(groupBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(ExtensionDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(ExtensionDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        verticalSpacer_2 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        detailButton = new QPushButton(ExtensionDialog);
        detailButton->setObjectName(QStringLiteral("detailButton"));

        verticalLayout->addWidget(detailButton);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        detailGroupBox = new QGroupBox(ExtensionDialog);
        detailGroupBox->setObjectName(QStringLiteral("detailGroupBox"));
        gridLayout_4 = new QGridLayout(detailGroupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_4 = new QLabel(detailGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        lineEdit_4 = new QLineEdit(detailGroupBox);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        gridLayout_4->addWidget(lineEdit_4, 0, 1, 1, 1);

        label_5 = new QLabel(detailGroupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_4->addWidget(label_5, 1, 0, 1, 1);

        lineEdit_5 = new QLineEdit(detailGroupBox);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        gridLayout_4->addWidget(lineEdit_5, 1, 1, 1, 1);

        label_6 = new QLabel(detailGroupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_4->addWidget(label_6, 2, 0, 1, 1);

        lineEdit_6 = new QLineEdit(detailGroupBox);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        gridLayout_4->addWidget(lineEdit_6, 2, 1, 1, 1);


        verticalLayout_2->addWidget(detailGroupBox);


        horizontalLayout_2->addLayout(verticalLayout_2);


        retranslateUi(ExtensionDialog);

        QMetaObject::connectSlotsByName(ExtensionDialog);
    } // setupUi

    void retranslateUi(QDialog *ExtensionDialog)
    {
        ExtensionDialog->setWindowTitle(QApplication::translate("ExtensionDialog", "ExtensionDialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ExtensionDialog", "\345\237\272\346\234\254\344\277\241\346\201\257\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("ExtensionDialog", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("ExtensionDialog", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("ExtensionDialog", "\345\256\266\345\272\255\344\275\217\345\235\200\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ExtensionDialog", "\347\241\256\345\256\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ExtensionDialog", "\345\217\226\346\266\210", Q_NULLPTR));
        detailButton->setText(QApplication::translate("ExtensionDialog", "\350\257\246\347\273\206\344\277\241\346\201\257<<<", Q_NULLPTR));
        detailGroupBox->setTitle(QApplication::translate("ExtensionDialog", "\350\257\246\347\273\206\344\277\241\346\201\257\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("ExtensionDialog", "\350\272\253\351\253\230\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("ExtensionDialog", "\345\271\264\351\276\204\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("ExtensionDialog", "\350\201\224\347\263\273\347\224\265\350\257\235\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ExtensionDialog: public Ui_ExtensionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTENSIONDIALOG_H
