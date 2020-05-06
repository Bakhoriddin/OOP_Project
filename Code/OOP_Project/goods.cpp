#include "goods.h"
#include "ui_goods.h"
#include "menu.h"
#include "checkout.h"
#include <QPixmap>
#include <QMessageBox>

Goods::Goods(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Goods)
{
    ui->setupUi(this);
}

Goods::~Goods()
{
    delete ui;
}

void Goods::Sleepers() {
    ui->label->setText("Lazy Sleppers");
    QPixmap pix(":/Images/For Kitchen/1.jpg");
    int w = 200;
    int h = 200;
    ui->label_2->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
    ui->label_3->setText("Characteristic:\n1. 100% brand new and high quality\n2. Material: ultra-thin chenille fabric\n3. Color: pink, purple, green, blue, orange\n4. Stretchable length: 24-35 cm / 9.45-13.78 inches\n5. Width: 12 cm");
    ui->label_6->setText("2.30");
}

void Goods::Egg() {
    ui->label->setText("Egg Separator");
    QPixmap pix(":/Images/For Kitchen/2.jpg");
    int w = 200;
    int h = 200;
    ui->label_2->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
    ui->label_3->setText("Characteristic:\nEgg Tool Type :  Egg Separators\nDescription :  Eco-Friendly\nWhisk Laying Method :  Capture\nFunction :  Egg Whisk\nWeight :  20g\nSize :  14 * 6.5cm\nMaterial :  Plastic\nColor :  blue / green / pink / beige");
    ui->label_6->setText("20");
}

void Goods::Garlic() {
    ui->label->setText("Garlic Crusher");
    QPixmap pix(":/Images/For Kitchen/3.jpg");
    int w = 200;
    int h = 200;
    ui->label_2->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
    ui->label_3->setText("Characteristic:\nBrand Name :  CABINA HOME\nMaterial :  Metal\nMetal Type :  Stainless Steel\nModel Number :  Garlic Press\nDescription :  Eco-Friendly\n");
    ui->label_6->setText("30");
}

void Goods::LLB() {
    ui->label->setText("Lazy Lean Bag");
    QPixmap pix(":/Images/Furniture/1.jpg");
    int w = 200;
    int h = 200;
    ui->label_2->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
    ui->label_3->setText("Characteristic:\nModel Number :  Bean Bag Sofas Chair Cover Only\nCustom Made :  Yes\nNumber of people :  One\nMaterial :  Cloth\nSize :  S / M / XL\n");
    ui->label_6->setText("30");
}

void Goods::PP() {
    ui->label->setText("Plush Pillow");
    QPixmap pix(":/Images/Furniture/2.jpg");
    int w = 200;
    int h = 200;
    ui->label_2->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
    ui->label_3->setText("Characteristic:\nBrand Name :  YMQY\nType :  Seat Cushion / Back Cushion\nDisassemble and wash :  Do not remove or wash\nStyle :  Modern\nApplication :  Bed, Sofa\n");
    ui->label_6->setText("250");
}

void Goods::EC() {
    ui->label->setText("Egg Carpet");
    QPixmap pix(":/Images/Furniture/3.jpg");
    int w = 200;
    int h = 200;
    ui->label_2->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
    ui->label_3->setText("Characteristic:\nCleaning Method :  Machine Washable\nMaterial :  100% Polyester\nCustom Made :  Yes\nPattern Type :  Geometric\nSize :  70 * 58cm\n");
    ui->label_6->setText("300");
}

void Goods::MUF() {
    ui->label->setText("Mini USB Fridge");
    QPixmap pix(":/Images/Techno/1.jpg");
    int w = 200;
    int h = 200;
    ui->label_2->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
    ui->label_3->setText("Characteristic:\nPacking :  Yes\nType :  USB Fridge\nBrand Name :  FFFAS\nModel Number :  Mini USB Fridge\n");
    ui->label_6->setText("20");
}

void Goods::UW() {
    ui->label->setText("Mini USB Fridge");
    QPixmap pix(":/Images/Techno/2.jpg");
    int w = 200;
    int h = 200;
    ui->label_2->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
    ui->label_3->setText("Characteristic:\nBrand Name :  BiNFUL\nInterface Type :  USB 2.0\nProduct weight :  25g\nMaterial :  Silicone\nStyle :  bracelet\n");
    ui->label_6->setText("2");
}

void Goods::CAC() {
    ui->label->setText("Charging Alarm Clock");
    QPixmap pix(":/Images/Techno/3.jpg");
    int w = 200;
    int h = 200;
    ui->label_2->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
    ui->label_3->setText("Characteristic:\nLength :  210mm\nWeight :  403.5g\nWidth :  95mm\nColor :  brown\nStyle :  Modern\n");
    ui->label_6->setText("20");
}

void Goods::on_pushButton_2_clicked()
{
    Menu *mn = new Menu;
    setData(getName(), getLName(), getCredit());
    mn->show();
    close();
}

void Goods::on_pushButton_clicked()
{
    Checkout *ch = new Checkout;
    ch->setData(getName(), getLName(), getCredit());
    double a;
    QString s, n;
    s = ui->lineEdit->text();
    n = ui->label_6->text();
    a = s.toDouble() * n.toDouble();
    if(s.toDouble() > 0) {
    ch->upgradeAmmount(a);
    QMessageBox::about(this, "Success", "You've successfully bought the item");
    }
    else {
        QMessageBox::warning(this, "Error!", "Enter valid ammount of goods which you want to buy!");
    }
    hide();
    ch->show();
}
