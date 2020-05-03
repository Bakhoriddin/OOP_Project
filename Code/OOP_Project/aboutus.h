#ifndef ABOUTUS_H
#define ABOUTUS_H

#include <QDialog>

namespace Ui {
class AboutUs;
}

class AboutUs : public QDialog
{
    Q_OBJECT

public:
    explicit AboutUs(QWidget *parent = nullptr);
    ~AboutUs();

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

private:
    Ui::AboutUs *ui;
};

#endif // ABOUTUS_H
