#ifndef FURNITURE_H
#define FURNITURE_H

#include <QDialog>

namespace Ui {
class Furniture;
}

class Furniture : public QDialog
{
    Q_OBJECT

public:
    explicit Furniture(QWidget *parent = nullptr);
    ~Furniture();

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

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Furniture *ui;
};

#endif // FURNITURE_H
