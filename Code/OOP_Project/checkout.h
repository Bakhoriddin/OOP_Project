#ifndef CHECKOUT_H
#define CHECKOUT_H

#include <QDialog>
#include <QString>

namespace Ui {
class Checkout;
}

class Checkout : public QDialog
{
    Q_OBJECT

private:
    QString name;
    QString lname;
    QString cred;
    double ammount = 0;

public:
    void setData(QString n, QString ln, QString c) {
        this->name = n;
        this->lname = ln;
        this->cred = c;
    }
    QString getName() {
        return name;
    }
    QString getLName() {
        return lname;
    }
    QString getCredit() {
        return cred;
    }

public:
    explicit Checkout(QWidget *parent = nullptr);
    ~Checkout();
    void ChangeData(double b, QString c);
    void upgradeAmmount(double a) {
        ammount += a;
        ChangeData(ammount, cred);
    }
    void decreaseAmmount(double a) {
        ammount -= a;
        ChangeData(ammount, cred);
    }

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Checkout *ui;
};

#endif // CHECKOUT_H
