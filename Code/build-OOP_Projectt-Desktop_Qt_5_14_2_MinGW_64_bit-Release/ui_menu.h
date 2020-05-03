/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QAction *actionLog_out;
    QAction *actionExit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->resize(618, 346);
        Menu->setStyleSheet(QString::fromUtf8("background-color: red;\n"
"color: white;"));
        actionLog_out = new QAction(Menu);
        actionLog_out->setObjectName(QString::fromUtf8("actionLog_out"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/Images/logout.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/imgs/C:/Users/Dell/Desktop/logout.jpg"), QSize(), QIcon::Normal, QIcon::On);
        actionLog_out->setIcon(icon);
        actionExit = new QAction(Menu);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Images/Actions-application-exit-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon1);
        centralwidget = new QWidget(Menu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"font-size: 18px;\n"
"background-color: #e50000;\n"
"border: 1px solid grey;\n"
"border-radius: 5px;\n"
"text-transform: uppercase;"));

        verticalLayout->addWidget(label_3);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"color: red;"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"color: red;"));

        horizontalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"color: red;"));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"color: red;"));

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"color: red;"));

        horizontalLayout_2->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"color: red;"));

        horizontalLayout_2->addWidget(pushButton_6);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"color: red;"));

        verticalLayout_2->addWidget(pushButton_7);

        Menu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Menu);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 618, 26));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        Menu->setMenuBar(menubar);
        statusbar = new QStatusBar(Menu);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Menu->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionLog_out);
        menuMenu->addAction(actionExit);

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QMainWindow *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "MainWindow", nullptr));
        actionLog_out->setText(QCoreApplication::translate("Menu", "Log out", nullptr));
        actionExit->setText(QCoreApplication::translate("Menu", "Exit", nullptr));
        label_3->setText(QCoreApplication::translate("Menu", "<h1>Aliexpress</h1>", nullptr));
        label->setText(QCoreApplication::translate("Menu", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">GOODS</span></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Menu", "For kitchen", nullptr));
        pushButton->setText(QCoreApplication::translate("Menu", "Furniture", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Menu", "Techno", nullptr));
        label_2->setText(QCoreApplication::translate("Menu", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">MORE</span></p></body></html>", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Menu", "About Us", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Menu", "Personal Details", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Menu", "Checkout", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Menu", "Checkout list", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("Menu", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
