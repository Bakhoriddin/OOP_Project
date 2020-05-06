#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include "menu.h"
#include "info.h"
#include <QMessageBox>
#include <QString>
#include <QFile>
#include <QTextStream>

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_2_clicked()
{
    MainWindow *mw = new MainWindow(this);
    mw->show();
    hide();
}

void Login::on_pushButton_clicked()
{
    Menu *m = new Menu(this);
    QString login = ui->login->text();
    QString pass = ui->pass->text();
    QFile file("details.txt");
    bool t = false;
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::warning(this, "Error!", "File cannot be found");
    }
    QTextStream stream(&file);
    while(!stream.atEnd()) {
        QString n = stream.readLine();
        QString ln = stream.readLine();
        QString l = stream.readLine();
        QString p = stream.readLine();
        QString c = stream.readLine();
        if((login == l) && (pass == p))
        {
            m->setData(n, ln, c);
            file.close();
            QMessageBox::about(this, "Success", "You're logged in");
            t = true;
            m->show();
            hide();
            break;
        }
    }
    if(!t) {
        QMessageBox::warning(this, "Failure", "We couldn't find you. Please check your pass and login one more time and retry");
    }
}
