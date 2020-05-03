#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    login = new Login;
    login->show();
    hide();
}

void MainWindow::on_pushButton_2_clicked()
{
    reg = new Register;
    reg->show();
    hide();
}
