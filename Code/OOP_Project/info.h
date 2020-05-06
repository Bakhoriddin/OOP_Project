#ifndef INFO_H
#define INFO_H

#include <QDialog>
#include <QString>

namespace Ui {
class Info;
}

class Info : public QDialog
{
    Q_OBJECT

private:
    QString name = "";
    QString lname = "";
    QString cred = "";

public:
    explicit Info(QWidget *parent = nullptr);
    ~Info();
    QString getName() {
        return name;
    }
    QString getLName() {
        return lname;
    }
    QString getCredit() {
        return cred;
    }
    void setData(QString n, QString ln, QString c) {
        if (name.isEmpty()) {
        this->name = n;
        this->lname = ln;
        this->cred = c;
        }
    }
    void Update();


private slots:
    void on_pushButton_clicked();


private:
    Ui::Info *ui;
};

#endif // INFO_H
