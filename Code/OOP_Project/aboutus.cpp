#include "aboutus.h"
#include "ui_aboutus.h"
#include "menu.h"

AboutUs::AboutUs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutUs)
{
    ui->setupUi(this);
}

AboutUs::~AboutUs()
{
    delete ui;
}

void AboutUs::on_pushButton_clicked()
{
    Menu *mn = new Menu;
    mn->setData(getName(), getLName(), getCredit());
    mn->show();
    close();
}
