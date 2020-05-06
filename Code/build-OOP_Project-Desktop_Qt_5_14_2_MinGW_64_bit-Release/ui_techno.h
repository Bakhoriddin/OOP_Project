/********************************************************************************
** Form generated from reading UI file 'techno.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TECHNO_H
#define UI_TECHNO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Techno
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QPushButton *pushButton_3;
    QLabel *label_3;
    QPushButton *pushButton;

    void setupUi(QDialog *Techno)
    {
        if (Techno->objectName().isEmpty())
            Techno->setObjectName(QString::fromUtf8("Techno"));
        Techno->resize(400, 300);
        horizontalLayout = new QHBoxLayout(Techno);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Techno);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_2 = new QPushButton(Techno);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        label_2 = new QLabel(Techno);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(Techno);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 1, 2, 1, 1);

        label_4 = new QLabel(Techno);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        pushButton_3 = new QPushButton(Techno);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 1, 1, 1);

        label_3 = new QLabel(Techno);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        pushButton = new QPushButton(Techno);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Techno);

        QMetaObject::connectSlotsByName(Techno);
    } // setupUi

    void retranslateUi(QDialog *Techno)
    {
        Techno->setWindowTitle(QCoreApplication::translate("Techno", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Techno", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">TECHNO</span></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Techno", "Mini USB Fridge", nullptr));
        label_2->setText(QString());
        pushButton_4->setText(QCoreApplication::translate("Techno", "Charging Alarm Clock", nullptr));
        label_4->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("Techno", " USB Wristband", nullptr));
        label_3->setText(QString());
        pushButton->setText(QCoreApplication::translate("Techno", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Techno: public Ui_Techno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TECHNO_H
