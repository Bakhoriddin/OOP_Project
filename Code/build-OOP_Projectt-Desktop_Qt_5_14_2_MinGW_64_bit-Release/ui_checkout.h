/********************************************************************************
** Form generated from reading UI file 'checkout.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKOUT_H
#define UI_CHECKOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Checkout
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_4;

    void setupUi(QDialog *Checkout)
    {
        if (Checkout->objectName().isEmpty())
            Checkout->setObjectName(QString::fromUtf8("Checkout"));
        Checkout->resize(400, 300);
        Checkout->setStyleSheet(QString::fromUtf8("background-color: red;\n"
"color: white;"));
        horizontalLayout = new QHBoxLayout(Checkout);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Checkout);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_2 = new QPushButton(Checkout);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: red;"));

        gridLayout->addWidget(pushButton_2, 3, 1, 1, 1);

        label_2 = new QLabel(Checkout);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        pushButton = new QPushButton(Checkout);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: red;"));

        gridLayout->addWidget(pushButton, 3, 0, 1, 1);

        label_3 = new QLabel(Checkout);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        label_5 = new QLabel(Checkout);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 1, 1, 1);

        label_4 = new QLabel(Checkout);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Checkout);

        QMetaObject::connectSlotsByName(Checkout);
    } // setupUi

    void retranslateUi(QDialog *Checkout)
    {
        Checkout->setWindowTitle(QCoreApplication::translate("Checkout", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Checkout", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">Check out</span></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Checkout", "Pay", nullptr));
        label_2->setText(QCoreApplication::translate("Checkout", "You have to pay:", nullptr));
        pushButton->setText(QCoreApplication::translate("Checkout", "Cancel", nullptr));
        label_3->setText(QCoreApplication::translate("Checkout", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("Checkout", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("Checkout", "Your credit card:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Checkout: public Ui_Checkout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKOUT_H
