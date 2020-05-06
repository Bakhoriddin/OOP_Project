#include "register.h"
#include "ui_register.h"
#include "mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>


Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;
}

void Register::on_pushButton_clicked()
{
    MainWindow *mw = new MainWindow(this);
    QFile file("details.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
      QTextStream stream(&file);
      QString name = ui->Name->text();
      QString surname = ui->Surname->text();
      QString login = ui->Login->text();
      QString pass = ui->Pass->text();
      QString credit = ui->Credit->text();
      if(name != NULL && surname != NULL && login != NULL && pass != NULL && credit != NULL){
<<<<<<< HEAD
          if(credit.length() == 16) {
            stream << name << "\n" << surname << "\n" << login << "\n" << pass << "\n" << credit << "\n";
            file.close();
            QMessageBox::information(this, "Sucsess", "Your details are taken succsessfully!");
            mw->show();
            hide();
          }
          else {
             QMessageBox::warning(this, "Error!", "Enter valid credit card!");
          }
=======
        stream << name << "\n" << surname << "\n" << login << "\n" << pass << "\n" << credit << "\n";
        file.close();
        QMessageBox::information(this, "Sucsess", "Your details are taken succsessfully!");
        mw->show();
        hide();
>>>>>>> 6862c6ec56efce96c12d7f9c4afacd5296edd64d
      }
      else {
          QMessageBox::warning(this, "Failure", "Your details are not taken! Make sure you've filled all fields!");
      }
    }
}

void Register::on_pushButton_2_clicked()
{
    MainWindow *mw = new MainWindow;
    mw->show();
    close();
}
