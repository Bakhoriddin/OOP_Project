#ifndef REGISTER_H
#define REGISTER_H

#include <QDialog>
#include <QFile>

namespace Ui {
class Register;
}

class Register : public QDialog
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Register *ui;
    QFile *write;
};

#endif // REGISTER_H
