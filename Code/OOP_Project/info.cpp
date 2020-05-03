#include "info.h"
#include "ui_info.h"
#include "menu.h"

Info::Info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Info)
{
    ui->setupUi(this);
}

Info::~Info()
{
    delete ui;
}

void Info::Update() {
    ui->label_3->setText(name);
    ui->label_5->setText(lname);
    ui->label_6->setText(cred);
}

void Info::on_pushButton_clicked()
{
    Menu *m;
    m = new Menu(this);
    m->setData(name, lname, cred);
    m->show();
    hide();
}

