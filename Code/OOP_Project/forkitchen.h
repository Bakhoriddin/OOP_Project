#ifndef FORKITCHEN_H
#define FORKITCHEN_H

#include <QDialog>

namespace Ui {
class ForKitchen;
}

class ForKitchen : public QDialog
{
    Q_OBJECT

public:
    explicit ForKitchen(QWidget *parent = nullptr);
    ~ForKitchen();

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
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::ForKitchen *ui;
};

#endif // FORKITCHEN_H
