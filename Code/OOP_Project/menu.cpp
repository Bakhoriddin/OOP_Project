#include "menu.h"
#include "ui_menu.h"
#include "mainwindow.h"
#include "forkitchen.h"
#include "furniture.h"
#include "techno.h"
#include "aboutus.h"
#include "checkout.h"
#include "list.h"
#include <QMessageBox>

Menu::Menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_actionLog_out_triggered()
{
    MainWindow *mw = new MainWindow(this);
    mw->show();
    hide();
}

void Menu::on_actionExit_triggered()
{
    close();
}

void Menu::on_pushButton_2_clicked()
{
    ForKitchen *kt = new ForKitchen(this);
    kt->setData(getName(), getLName(), getCredit());
    kt->show();
    hide();
}

void Menu::on_pushButton_clicked()
{
    Furniture *fr = new Furniture(this);
    fr->setData(getName(), getLName(), getCredit());
    fr->show();
    hide();
}

void Menu::on_pushButton_3_clicked()
{
    Techno *th = new Techno(this);
    th->setData(getName(), getLName(), getCredit());
    th->show();
    hide();
}

void Menu::on_pushButton_5_clicked()
{
    i = new Info(this);
    i->setData(getName(), getLName(), getCredit());
    i->Update();
    i->show();
    hide();
}

void Menu::on_pushButton_4_clicked()
{
    AboutUs *au = new AboutUs(this);
    au->setData(getName(), getLName(), getCredit());
    au->show();
    hide();
}

void Menu::on_pushButton_6_clicked()
{
    Checkout *ch = new Checkout(this);
    ch->setData(getName(), getLName(), getCredit());
    ch->upgradeAmmount(0);
    ch->show();
    hide();
}

void Menu::on_pushButton_7_clicked()
{
    List *l = new List(this);
    l->setData(getName(), getLName(), getCredit());
    l->show();
    hide();
}
