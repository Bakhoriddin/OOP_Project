#include "forkitchen.h"
#include "ui_forkitchen.h"
#include "menu.h"
#include "goods.h"
#include <QPixmap>

ForKitchen::ForKitchen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ForKitchen)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/For Kitchen/1.jpg");
    QPixmap pix1(":/Images/For Kitchen/2.jpg");
    QPixmap pix2(":/Images/For Kitchen/3.jpg");
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

ForKitchen::~ForKitchen()
{
    delete ui;
}

void ForKitchen::on_pushButton_4_clicked()
{
    Menu *mn = new Menu;
    mn->setData(getName(), getLName(), getCredit());
    mn->show();
    close();
}

void ForKitchen::on_pushButton_clicked()
{
    Goods *g = new Goods(this);
    g->setData(getName(), getLName(), getCredit());
    g->Sleepers();
    g->show();
    hide();
}

void ForKitchen::on_pushButton_2_clicked()
{
    Goods *g = new Goods(this);
    g->setData(getName(), getLName(), getCredit());
    g->Egg();
    g->show();
    hide();
}

void ForKitchen::on_pushButton_3_clicked()
{
    Goods *g = new Goods(this);
    g->setData(getName(), getLName(), getCredit());
    g->Garlic();
    g->show();
    hide();
}
