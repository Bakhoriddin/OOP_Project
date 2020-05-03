/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *Name;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *Surname;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *Login;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *Pass;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *Credit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->resize(496, 339);
        Register->setStyleSheet(QString::fromUtf8("background-color: red;\n"
"color: white;"));
        horizontalLayout = new QHBoxLayout(Register);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(Register);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        Name = new QLineEdit(groupBox);
        Name->setObjectName(QString::fromUtf8("Name"));
        Name->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"color: #000;"));

        horizontalLayout_2->addWidget(Name);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        Surname = new QLineEdit(groupBox);
        Surname->setObjectName(QString::fromUtf8("Surname"));
        Surname->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"color: #000;"));

        horizontalLayout_3->addWidget(Surname);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        Login = new QLineEdit(groupBox);
        Login->setObjectName(QString::fromUtf8("Login"));
        Login->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"color: #000;"));

        horizontalLayout_4->addWidget(Login);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        Pass = new QLineEdit(groupBox);
        Pass->setObjectName(QString::fromUtf8("Pass"));
        Pass->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"color: #000;"));

        horizontalLayout_5->addWidget(Pass);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        Credit = new QLineEdit(groupBox);
        Credit->setObjectName(QString::fromUtf8("Credit"));
        Credit->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"color: #000;"));

        horizontalLayout_6->addWidget(Credit);


        verticalLayout->addLayout(horizontalLayout_6);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"color: red;"));

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"color: red;"));

        verticalLayout_2->addWidget(pushButton_2);


        horizontalLayout->addWidget(groupBox);


        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Register", "Register", nullptr));
        label->setText(QCoreApplication::translate("Register", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("Register", "Surname", nullptr));
        label_3->setText(QCoreApplication::translate("Register", "Login", nullptr));
        label_4->setText(QCoreApplication::translate("Register", "Password", nullptr));
        label_5->setText(QCoreApplication::translate("Register", "Number of your creditcard", nullptr));
        pushButton->setText(QCoreApplication::translate("Register", "Submit", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Register", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
