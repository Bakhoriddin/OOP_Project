/********************************************************************************
** Form generated from reading UI file 'furniture.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FURNITURE_H
#define UI_FURNITURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Furniture
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton;

    void setupUi(QDialog *Furniture)
    {
        if (Furniture->objectName().isEmpty())
            Furniture->setObjectName(QString::fromUtf8("Furniture"));
        Furniture->resize(400, 300);
        horizontalLayout = new QHBoxLayout(Furniture);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Furniture);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(Furniture);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(Furniture);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        label_4 = new QLabel(Furniture);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        pushButton_2 = new QPushButton(Furniture);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(Furniture);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 1, 1, 1);

        pushButton_4 = new QPushButton(Furniture);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        pushButton = new QPushButton(Furniture);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Furniture);

        QMetaObject::connectSlotsByName(Furniture);
    } // setupUi

    void retranslateUi(QDialog *Furniture)
    {
        Furniture->setWindowTitle(QCoreApplication::translate("Furniture", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Furniture", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">FURNITURE</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Furniture", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("Furniture", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("Furniture", "TextLabel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Furniture", "Lazy Bean Bag", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Furniture", "Plush Pillow", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Furniture", "Egg Carpet", nullptr));
        pushButton->setText(QCoreApplication::translate("Furniture", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Furniture: public Ui_Furniture {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FURNITURE_H
