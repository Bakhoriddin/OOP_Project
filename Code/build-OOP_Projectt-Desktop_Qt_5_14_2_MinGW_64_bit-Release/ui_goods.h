/********************************************************************************
** Form generated from reading UI file 'goods.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOODS_H
#define UI_GOODS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Goods
{
public:
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Goods)
    {
        if (Goods->objectName().isEmpty())
            Goods->setObjectName(QString::fromUtf8("Goods"));
        Goods->resize(400, 300);
        horizontalLayout_4 = new QHBoxLayout(Goods);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(Goods);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(Goods);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(Goods);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(Goods);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        label_6 = new QLabel(Goods);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(Goods);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit = new QLineEdit(Goods);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        pushButton = new QPushButton(Goods);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: red;"));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton_2 = new QPushButton(Goods);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: red;"));

        verticalLayout_2->addWidget(pushButton_2);


        horizontalLayout_4->addLayout(verticalLayout_2);


        retranslateUi(Goods);

        QMetaObject::connectSlotsByName(Goods);
    } // setupUi

    void retranslateUi(QDialog *Goods)
    {
        Goods->setWindowTitle(QCoreApplication::translate("Goods", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Goods", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">A</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Goods", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("Goods", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("Goods", "Cost ($) :", nullptr));
        label_6->setText(QCoreApplication::translate("Goods", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("Goods", "Please enter ammount of goods which you want to buy:", nullptr));
        pushButton->setText(QCoreApplication::translate("Goods", "Buy", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Goods", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Goods: public Ui_Goods {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOODS_H
