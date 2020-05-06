/********************************************************************************
** Form generated from reading UI file 'aboutus.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTUS_H
#define UI_ABOUTUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutUs
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *AboutUs)
    {
        if (AboutUs->objectName().isEmpty())
            AboutUs->setObjectName(QString::fromUtf8("AboutUs"));
        AboutUs->resize(400, 300);
        horizontalLayout = new QHBoxLayout(AboutUs);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(AboutUs);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(AboutUs);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        pushButton = new QPushButton(AboutUs);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: red;"));

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(AboutUs);

        QMetaObject::connectSlotsByName(AboutUs);
    } // setupUi

    void retranslateUi(QDialog *AboutUs)
    {
        AboutUs->setWindowTitle(QCoreApplication::translate("AboutUs", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AboutUs", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">About Us</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("AboutUs", "<html><head/><body><p align=\"center\">We are company aiming on resell/delivery of products from</p><p align=\"center\">AliExpress to rural areas. Rurals don't need to much</p><p align=\"center\">stuffs so variety of products are small but practical and useful.</p><p align=\"center\">P.S. Program was built in total in <span style=\" font-style:italic; text-decoration: underline;\">24 hours</span> plus minus another</p><p align=\"center\">24 hours with feeding up brain with sugar and coffee</p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("AboutUs", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutUs: public Ui_AboutUs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTUS_H
