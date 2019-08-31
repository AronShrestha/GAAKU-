#include "buyer.h"
#include "mainwindow.h"
#include "buyer_seller.h"


Buyer::Buyer(QWidget *parent) : QWidget(parent)
{
    setFixedSize(1186,790);
    setWindowTitle("Buyers Page");

    back_pic=new QLabel(this);
    back_pic->setGeometry(0,0,1186,790);
    back_pic->setStyleSheet("background-color:rgba(81,52,139,50);");

    login_back= new QLabel(this);
    login_back->setGeometry(0,0,1186,101);
    login_back->setStyleSheet("background-color:rgb(81, 52, 139)");

    loginborder=new QLabel(this);
    loginborder->setGeometry(0,101,1186,25);
    loginborder->setStyleSheet("background-color:rgb(69, 36, 99)");

    logo=new QLabel(this);
    logo->setGeometry(10,-20,281,150);
    logo->setStyleSheet("border-image:url(:/new/prefix1/logo.png);");

    login_back= new QLabel(this);
    login_back->setGeometry(0,710,1186,80);
    login_back->setStyleSheet("background-color:rgb(81, 52, 139)");

    loginborder=new QLabel(this);
    loginborder->setGeometry(0,685,1186,25);
    loginborder->setStyleSheet("background-color:rgb(69, 36, 99)");

    furniture=new QPushButton(this);
    furniture->setGeometry(0,125,401,280);
    int w1,h1;
    w1=furniture->width();
    h1=furniture->height();
    QPixmap pix(":/new/prefix1/Furniture.jpg");
    pix.scaled(QSize(w1,h1),Qt::KeepAspectRatio);
    QPalette p;
    p.setBrush(furniture->backgroundRole(),QBrush(pix));
    furniture->setFlat(true);
    furniture->setAutoFillBackground(true);
    furniture->setPalette(p);


    book =new QPushButton(this);
    book->setGeometry(400,125,401,280);
    int w2,h2;
    w2=book->width();
    h2=book->height();
    QPixmap pix1(":/new/prefix1/books.jpg");
    pix1.scaled(QSize(w2,h2),Qt::KeepAspectRatio);
    QPalette p1;
    p1.setBrush(book->backgroundRole(),QBrush(pix1));
    book->setFlat(true);
    book->setAutoFillBackground(true);
    book->setPalette(p1);


    musical=new QPushButton(this);
    musical->setGeometry(400,405,401,280);
    int w3,h3;
    w3=musical->width();
    h3=musical->height();
    QPixmap pix3(":/new/prefix1/musical.jpg");
    pix3.scaled(QSize(w3,h3),Qt::KeepAspectRatio);
    QPalette p2;
    p2.setBrush(musical->backgroundRole(),QBrush(pix3));
    musical->setFlat(true);
    musical->setAutoFillBackground(true);
    musical->setPalette(p2);

    electrical=new QPushButton(this);
    electrical->setGeometry(0,405,401,280);
    int w4,h4;
    w4=electrical->width();
    h4=electrical->height();
    QPixmap pix4(":/new/prefix1/electrical.jpg");
    pix4.scaled(QSize(w4,h4),Qt::IgnoreAspectRatio);
    QPalette p3;
    p3.setBrush(electrical->backgroundRole(),QBrush(pix4));
    electrical->setFlat(true);
    electrical->setAutoFillBackground(true);
    electrical->setPalette(p3);


    drawing=new QPushButton(this);
    drawing->setGeometry(800,125,401,280);
    int w5,h5;
    w5=drawing->width();
    h5=drawing->height();
    QPixmap pix5(":/new/prefix1/drawing.jpg");
    pix5.scaled(QSize(w5,h5),Qt::KeepAspectRatio);
    QPalette p4;
    p4.setBrush(musical->backgroundRole(),QBrush(pix5));
    drawing->setFlat(true);
    drawing->setAutoFillBackground(true);
    drawing->setPalette(p4);


    other=new QPushButton(this);
    other->setGeometry(800,405,401,280);
    int w6,h6;
    w6=drawing->width();
    h6=drawing->height();
    QPixmap pix6(":/new/prefix1/other.png");
    pix6.scaled(QSize(w6,h6),Qt::KeepAspectRatio);
    QPalette p5;
    p5.setBrush(other->backgroundRole(),QBrush(pix6));
    other->setFlat(true);
    other->setAutoFillBackground(true);
    other->setPalette(p5);

    QLabel *categories_details=new QLabel(this);
    categories_details->setGeometry(600,70,400,20);
    categories_details->setText("CATEGORIES TO CHOOSE FROM");
    QFont font("Times New Roman");
    font.setPointSize(16);
    categories_details->setStyleSheet("color:white");
    categories_details->setFont(font);

    QPushButton *backbutton=new QPushButton(this);
    backbutton->setGeometry(20,715,80,70);
    backbutton->setStyleSheet("border-image:url(:/new/prefix1/backbutton1.png);");



    connect(furniture,SIGNAL(clicked()),this,SLOT(table_clicked()));
    connect(book,SIGNAL(clicked()),this,SLOT(bed_clicked()));
    connect(drawing,SIGNAL(clicked()),this,SLOT(drawing_clicked()));
    connect(musical,SIGNAL(clicked()),this,SLOT(musical_clicked()));
    connect(electrical,SIGNAL(clicked()),this,SLOT(electrical_clicked()));
    connect(other,SIGNAL(clicked()),this,SLOT(other_clicked()));
    connect(backbutton,SIGNAL(clicked()),this,SLOT(backbuttton_clicked()));


    }
void Buyer::table_clicked()
    {
        //hide();
        furniture1=new class furniture(this);
        furniture1->show();
    }

void Buyer::bed_clicked()
    {
        //hide();
        books=new class books(this);
        books->show();
    }

void Buyer::drawing_clicked()
    {
        //hide();
        drawing1=new class drawing(this);
        drawing1->show();
    }

void Buyer::musical_clicked()
    {
        //hide();
        musical1=new class musical(this);
        musical1->show();
    }

void Buyer::electrical_clicked()
    {
        //hide();
        electrical1=new class electrical(this);
        electrical1->show();
    }

void Buyer::other_clicked()
    {
        //hide();
        other1=new class others(this);
        other1->show();
    }

Buyer::~Buyer()
{

}

void Buyer::backbuttton_clicked()
{
    //hide();
    buyer_seller *b=new buyer_seller(this);
    b->show();
}




