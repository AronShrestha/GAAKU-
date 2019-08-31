//FINISHED

#include "elearning1.h"
#include "secwindow.h"

elearning1::elearning1(QWidget *parent) : QWidget(parent)
{
    setFixedSize(1186,790);

    QFont font("Bauhaus 93");
    font.setPointSize(15);

    QFont font2("Bodoni MT Black");
    font2.setPointSize(8);

    QFont font3("Mistral");
    font3.setPointSize(25);

    QFont font5("Broadway");
    font5.setPointSize(30);

    back = new QLabel(this);
    back->setGeometry(0,116,1186,1070);
    back->setStyleSheet("border-image:url(:/new/prefix1/apple-blank-data-442574.jpg)");

    ebooks = new QPushButton(this);
    ebooks->setGeometry(320,190,121,41);
    ebooks->setText("LETS GET IT!");
    ebooks->setFont(font2);

    enotes = new QPushButton(this);
    enotes->setGeometry(360,240,121,41);
    enotes->setText("LETS GET IT!");
    enotes->setFont(font2);

    pastque = new QPushButton(this);
    pastque->setGeometry(400,290,121,41);
    pastque->setText("LETS GET IT!");
    pastque->setFont(font2);

    pracques = new QPushButton(this);
    pracques->setGeometry(440,340,121,41);
    pracques->setText("LETS GET IT!");
    pracques->setFont(font2);

    ebooksl = new QLabel(this);
    ebooksl->setGeometry(480,190,121,41);
    ebooksl->setText("e_Books");
    ebooksl->setFont(font);

    enotesl = new QLabel(this);
    enotesl->setGeometry(530,240,121,41);
    enotesl->setText("e_Notes");
    enotesl->setFont(font);

    pastquel = new QLabel(this);
    pastquel->setGeometry(570,290,201,41);
    pastquel->setText("Past Questions");
    pastquel->setFont(font);

    pracquesl = new QLabel(this);
    pracquesl->setGeometry(610,340,281,41);
    pracquesl->setText("Practice Questions");
    pracquesl->setFont(font);

    head = new QLabel(this);
    head->setGeometry(0,0,1186,100);
    head->setStyleSheet("background-color:rgb(113,0,170)");

    line = new QLabel(this);
    line->setGeometry(0,100,1186,16);
    line->setStyleSheet("background-color:rgb(69, 36, 99);");

    logo = new QLabel(this);
    logo->setGeometry(30,-20,241,141);
    logo->setStyleSheet("border-image:url(:/new/prefix1/logo.png)");

    slogo = new QLabel(this);
    slogo->setGeometry(920,30,241,51);
    slogo->setText("e_lreaning@KU");
    slogo->setFont(font3);


    goback = new QPushButton(this);
    goback->setGeometry(0,395,65,45);
    goback->setText("<<");
    goback->setFont(font5);

    connect(ebooks,SIGNAL(clicked()),this,SLOT(ebooks_clicked()));
    connect(enotes,SIGNAL(clicked()),this,SLOT(enotes_clicked()));
    connect(pastque,SIGNAL(clicked()),this,SLOT(pastque_clicked()));
    connect(pracques,SIGNAL(clicked()),this,SLOT(pracques_clicked()));
    connect(goback,SIGNAL(clicked()),this,SLOT(goback_clicked()));
}

void elearning1 :: ebooks_clicked(){

    hide();
    r = new readebooks();
    r->show();
}

void elearning1:: enotes_clicked(){
    hide();
    n = new readenotes();
    n->show();
}

void elearning1:: pastque_clicked(){
    hide();
    s = new readpastque();
    s->show();

}

void elearning1:: pracques_clicked(){
    hide();
    c = new readpracque();
    c->show();
}

void elearning1:: goback_clicked(){
    hide();
    SecWindow *bsm = new SecWindow();
    bsm->show();

}
