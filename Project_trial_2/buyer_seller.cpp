#include "buyer_seller.h"
#include "secwindow.h"

buyer_seller::buyer_seller(QWidget *parent) : QWidget(parent)
{
    //SETTING THEWINDOWS SIIZE

    setFixedSize(1186,790);
    setWindowTitle("BUYER OR SELLER");

    // NEW BUYER AND SELLER OBJECTS ARE CREATED  AND THEIR STYLES ARE DEFINED

        buyer= new QPushButton(this);
        seller=new QPushButton(this);
        buyer->setText("");
        buyer->setGeometry(0,0,593,790);
        buyer->setStyleSheet("border-image:url(:/new/prefix1/therealbuyer.jpg);");
        seller->setGeometry(593,0,593,790);
        seller->setStyleSheet("border-image:url(:/new/prefix1/hritikdon.png);");

        QFont font("Times New Roman");
        font.setPointSize(25);
        QFont font2("Times New Roman");
        font2.setPointSize(35);

    // THREE LABELS ARE DEFINED TO DISPLAY THE TEXTS AND STYLES ARE SET

        label_que = new QLabel(this);
        label_que->setText("Who are You?");
        label_que->setGeometry(435,10,500,50);
        label_que->setFont(font2);
        label_que->setStyleSheet("color:white");

        label_buyer = new QLabel(this);
        label_buyer->setText("Buyer");
        label_buyer->setFont(font);
        label_buyer->setStyleSheet("color:white");
        label_buyer->setGeometry(250,650,200,200);

        label_seller = new QLabel(this);
        label_seller->setText("Seller");
        label_seller->setFont(font);
        label_seller->setStyleSheet("color:white");
        label_seller->setGeometry(850,650,200,200);

        QPushButton *backbutton=new QPushButton(this);
        backbutton->setGeometry(10,710,80,70);
        backbutton->setStyleSheet("border-image:url(:/new/prefix1/backbutton1.png);");

        connect(seller,SIGNAL(clicked()),this,SLOT(seller_clicked()));
        connect(buyer,SIGNAL(clicked()),this,SLOT(buyer_clicked()));
        connect(backbutton,SIGNAL(clicked()),this,SLOT(backbuttton_clicked()));
}



void buyer_seller::seller_clicked()
{
    //hide();
    l=new loginpage(this);
    l->show();
}

void buyer_seller::buyer_clicked()
{
    //hide();
    b= new Buyer(this);
    b->show();
}

void buyer_seller::backbuttton_clicked()
{
    //hide();
    SecWindow *b=new SecWindow(this);
    b->show();
}
