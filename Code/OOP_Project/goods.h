#ifndef GOODS_H
#define GOODS_H

#include <QDialog>

namespace Ui {
class Goods;
}

class Goods : public QDialog
{
    Q_OBJECT

public:
    explicit Goods(QWidget *parent = nullptr);
    ~Goods();
    void Sleepers();
    void Egg();
    void Garlic();
    void LLB();
    void EC();
    void PP();
    void MUF();
    void UW();
    void CAC();

private:
    QString name;
    QString lname;
    QString cred;

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
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Goods *ui;
};

#endif // GOODS_H
