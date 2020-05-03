#include "techno.h"
#include "ui_techno.h"
#include "menu.h"
#include "goods.h"

Techno::Techno(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Techno)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/Techno/1.jpg");
    QPixmap pix1(":/Images/Techno/2.jpg");
    QPixmap pix2(":/Images/Techno/3.jpg");
    int w = 100;
    int h = 100;
    int w1 = 100;
    int h1 = 100;
    int w2 = 100;
    int h2 = 100;
    ui->label_2->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
    ui->label_3->setPixmap(pix1.scaled(w1, h1, Qt::KeepAspectRatio));
    ui->label_4->setPixmap(pix2.scaled(w2, h2, Qt::KeepAspectRatio));
}

Techno::~Techno()
{
    delete ui;
}

void Techno::on_pushButton_clicked()
{
    Menu *mn = new Menu;
    mn->setData(getName(), getLName(), getCredit());
    mn->show();
    close();
}

void Techno::on_pushButton_2_clicked()
{
    Goods *g = new Goods(this);
    g->setData(getName(), getLName(), getCredit());
    g->MUF();
    g->show();
    hide();
}

void Techno::on_pushButton_3_clicked()
{
    Goods *g = new Goods(this);
    g->setData(getName(), getLName(), getCredit());
    g->UW();
    g->show();
    hide();
}

void Techno::on_pushButton_4_clicked()
{
    Goods *g = new Goods(this);
    g->setData(getName(), getLName(), getCredit());
    g->CAC();
    g->show();
    hide();
}
