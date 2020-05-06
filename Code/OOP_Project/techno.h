#ifndef TECHNO_H
#define TECHNO_H

#include <QDialog>

namespace Ui {
class Techno;
}

class Techno : public QDialog
{
    Q_OBJECT

public:
    explicit Techno(QWidget *parent = nullptr);
    ~Techno();

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
    Ui::Techno *ui;
};

#endif // TECHNO_H
