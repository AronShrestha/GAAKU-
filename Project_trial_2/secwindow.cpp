//FINISHED

#include "secwindow.h"

SecWindow::SecWindow(QWidget *parent):QWidget (parent)
{
    setFixedSize(QSize(1186,790));
    setWindowTitle("GAAKU: GET ANYTHING AT KU");

    // TRANSCATION E_LEARN AND MAPPING ARE THE SUBCLASS OF Q_PUSHBUTTON WITH ENTEREVENT AND LEAVE EVENT OVERRIDEDD
    transaction= new Transaction(this);
    e_learning=new E_learning(this);
    mapping =new map(this);

    set_Transaction_btn();
    set_ELearning_btn();
    set_Mapping_btn();

    connect(transaction,SIGNAL(clicked()),this,SLOT(transaction_clicked()));
    connect(mapping,SIGNAL(clicked()),this,SLOT(mapping_clicked()));
    connect(e_learning,SIGNAL(clicked()),this,SLOT(e_learning_clicked()));
}

void SecWindow::set_Transaction_btn()
{
    int tw,th;                                                          //Defining variables to store width and height
    transaction->setGeometry(0,0,1186,395);                              //Defining the position and geometry
    QPixmap trans1(":/new/prefix1/Transcation.png");                    //Defining pixmap and storing the image address
    tw=transaction->width();
    th=transaction->height();
    trans1.scaled(QSize(tw,th),Qt::KeepAspectRatio);                    //scaling the pixmap to the size of button keeping aspect ratio;
    QPalette p;                                                         //Defining QPalette
    p.setBrush(transaction->backgroundRole(),QBrush(trans1));           //setting brush for the palette
    transaction->setFlat(true);
    transaction->setAutoFillBackground(true);
    transaction->setPalette(p);                                         //setting pallete to the label
}

void SecWindow::set_ELearning_btn()
{
    int ew,eh;
    e_learning->setGeometry(0,395,593,395);
    QPixmap e_learn(":/new/prefix1/E learning.png");
    ew=e_learning->width();
    eh=e_learning->height();
    e_learn.scaled(QSize(ew,eh),Qt::KeepAspectRatio);
    QPalette p1;
    p1.setBrush(e_learning->backgroundRole(),QBrush(e_learn));
    e_learning->setFlat(true);
    e_learning->setAutoFillBackground(true);
    e_learning->setPalette(p1);
}

void SecWindow::set_Mapping_btn()
{
    int mw,mh;
    mapping->setGeometry(593,395,593,395);
    QPixmap map(":/new/prefix1/mapping.png");
    mw=mapping->width();
    mh=mapping->height();
    map.scaled(QSize(mw,mh),Qt::KeepAspectRatio);
    QPalette p2;
    p2.setBrush(mapping->backgroundRole(),QBrush(map));
    mapping->setFlat(true);
    mapping->setAutoFillBackground(true);
    mapping->setPalette(p2);
}

void SecWindow::transaction_clicked()
{
    s=new buyer_seller(this);
    //hide();
    s->show();
}

void SecWindow::mapping_clicked()
{
    m=new Mapping(this);
    //hide();
    m->show();
}

void SecWindow::e_learning_clicked(){
    e=new elearning1(this);
    //hide();
    e->show();
}
