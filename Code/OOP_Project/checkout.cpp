#include "checkout.h"
#include "ui_checkout.h"
#include "menu.h"
#include "info.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

Checkout::Checkout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Checkout)
{
    ui->setupUi(this);
}

Checkout::~Checkout()
{
    delete ui;
}

void Checkout::on_pushButton_clicked()
{
    Menu *mn = new Menu;
    mn->setData(getName(), getLName(), getCredit());
    mn->show();
    close();
}

void Checkout::ChangeData(double b, QString c) {
    QString s;
    s = QString::number(b, 'f', 2);
    ui->label_3->setText(s);
    ui->label_3->update();
    ui->label_5->setText(c);
}

void Checkout::on_pushButton_2_clicked()
{
    Menu *m = new Menu;
    m->setData(getName(), getLName(), getCredit());
    double a;
    QString s;
    s = ui->label_3->text();
    a = s.toDouble();
    QFile file("check outs.txt");
    if(!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
        QMessageBox::warning(this, "Error", "Error!");
    QTextStream stream(&file);
    stream << m->getCredit() << "\n" << s << "\n";
    decreaseAmmount(a);
    QMessageBox::about(this, "Success", "Successfully paid!");
}
