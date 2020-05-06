#include "list.h"
#include "ui_list.h"
#include "menu.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QString>

List::List(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::List)
{
    ui->setupUi(this);
}

List::~List()
{
    delete ui;
}

void List::on_pushButton_clicked()
{
    Menu *m;
    m = new Menu(this);
    m->setData(name, lname, credit);
    m->show();
    hide();
}

void List::on_pushButton_2_clicked()
{
    QFile file("check outs.txt");
    QString c = "";
    QString a = "";
    QString s = "";
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::warning(this, "Error!", "File cannot be found");
    }
    QTextStream stream(&file);
    while(!stream.atEnd()) {
            c = "Credit card: " + stream.readLine() + "\n";
            a = "Ammount: " + stream.readLine() + "\n";
            s += c + a + "\n";
    }
    ui->label->setText(s);
    file.close();
}
