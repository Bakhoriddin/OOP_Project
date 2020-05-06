#ifndef LIST_H
#define LIST_H

#include <QDialog>

namespace Ui {
class List;
}

class List : public QDialog
{
    Q_OBJECT

public:
    explicit List(QWidget *parent = nullptr);
    ~List();

private:
    QString name;
    QString lname;
    QString credit;

public:
    void setData(QString n, QString ln, QString c) {
        this->name = n;
        this->lname = ln;
        this->credit = c;
    }
    void setCred(QString c) {
        this->credit = c;
    }
    QString getName() {
        return name;
    }
    QString getLName() {
        return lname;
    }
    QString getCredit() {
        return credit;
    }

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::List *ui;
};

#endif // LIST_H
