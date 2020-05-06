#ifndef MENU_H
#define MENU_H

#include <QMainWindow>
#include <QString>
#include "info.h"

namespace Ui {
class Menu;
}

class Menu : public QMainWindow
{
    Q_OBJECT

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

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

private slots:
    void on_actionLog_out_triggered();

    void on_actionExit_triggered();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::Menu *ui;
    Info *i;
};

#endif // MENU_H
