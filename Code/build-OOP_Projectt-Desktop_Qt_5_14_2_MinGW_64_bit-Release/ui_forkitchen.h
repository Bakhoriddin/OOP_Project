/********************************************************************************
** Form generated from reading UI file 'forkitchen.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORKITCHEN_H
#define UI_FORKITCHEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ForKitchen
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_4;

    void setupUi(QDialog *ForKitchen)
    {
        if (ForKitchen->objectName().isEmpty())
            ForKitchen->setObjectName(QString::fromUtf8("ForKitchen"));
        ForKitchen->resize(400, 300);
        horizontalLayout_2 = new QHBoxLayout(ForKitchen);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(ForKitchen);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_3 = new QPushButton(ForKitchen);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 2, 1, 1);

        pushButton_2 = new QPushButton(ForKitchen);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);

        pushButton = new QPushButton(ForKitchen);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        label_2 = new QLabel(ForKitchen);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(ForKitchen);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        label_4 = new QLabel(ForKitchen);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        pushButton_4 = new QPushButton(ForKitchen);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(ForKitchen);

        QMetaObject::connectSlotsByName(ForKitchen);
    } // setupUi

    void retranslateUi(QDialog *ForKitchen)
    {
        ForKitchen->setWindowTitle(QCoreApplication::translate("ForKitchen", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ForKitchen", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">FOR KITCHEN</span></p></body></html>", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ForKitchen", "Garlic Crusher", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ForKitchen", "Egg Separator", nullptr));
        pushButton->setText(QCoreApplication::translate("ForKitchen", "Lazy Slippers", nullptr));
        label_2->setText(QCoreApplication::translate("ForKitchen", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("ForKitchen", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("ForKitchen", "TextLabel", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ForKitchen", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ForKitchen: public Ui_ForKitchen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORKITCHEN_H
