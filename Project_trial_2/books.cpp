#include "books.h"
#include <QPixmap>
#include "buyer.h"
#include "mainwindow.h"

books::books(QWidget *parent) : Buyer_menu_page (parent)
{
    table1="booknote";

    setFixedSize(1186, 790);
    setWindowTitle("Books and Notes");


    set_layout();

     //FOR SCROLL AREA

    QLabel *scroll_back= new QLabel(this);
    scroll_back->setGeometry(0,137,1186,516);
    scroll_back->setStyleSheet("background-color:rgb(189,185,202);");


    QGroupBox *groupBox = new QGroupBox (tr(""));
    //scroll_back->setStyleSheet("background-color:white;");

    grid_layout *grid=new grid_layout(this,3);

    QWidget *scrollAreaContent=new QWidget;
    //scrollAreaContent->setStyleSheet("background-color:white");
    scrollAreaContent->setLayout(grid);

    QScrollArea *scrollarea=new QScrollArea();
    scrollarea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    scrollarea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    scrollarea->setWidgetResizable(true);
    scrollarea->setBackgroundRole(QPalette::Midlight);
    scrollarea->setWidget(scrollAreaContent);

    if(mydb.connOpen()){
            qDebug()<<"Connected";
        }
     else {
            qDebug()<<"Failed to Connect";
        }


    mydb.connOpen();
    QSqlQuery qry;
    qry.exec("select title from booknote");

    while(qry.next()){
        count++;
    }
    mydb.connClose();

    QSignalMapper *sendSignalMapper = new QSignalMapper(this);

    Database mydb1;
    int k=0;
    for(k=0;k<count;k++){
        int i=k+1;
        QString eID=QString::number(i);

        qDebug()<<eID;
        QString imagepath="";
        QString username="";
        QPushButton *button= new QPushButton(this);
        if(mydb1.connOpen()){
            qDebug()<<"Connected Successfully";
        }
        else {
            qDebug()<<"Failed to Connect";
        }
        mydb1.connOpen();
        QSqlQuery qry1;

        qry1.prepare("select * from booknote where eID='"+eID+"'");
        if(qry1.exec()){

             while(qry1.next()){
                 username=qry1.record().value(6).toString();
                 imagepath=qry1.record().value(9).toString();
                 qDebug()<<imagepath;
             }
        }
        else {
            QMessageBox::critical(this,tr("Saved"),qry1.lastError().text());
        }
        grid->add_Widget(button,imagepath,username);
        connect(button,SIGNAL(clicked()),sendSignalMapper,SLOT(map()));
        sendSignalMapper->setMapping(button,k+1);



    }


    connect(sendSignalMapper,SIGNAL(mapped(int)),this,SLOT(on_button_clicked(int)));

    QVBoxLayout *groupboxlayout= new QVBoxLayout;
    groupboxlayout->addWidget(scrollarea);
    groupBox->setLayout(groupboxlayout);

    QVBoxLayout *mainlayout=new QVBoxLayout;
    mainlayout->addWidget(groupBox);
    scroll_back->setLayout(mainlayout);

    QPushButton *backbutton=new QPushButton(this);
    backbutton->setGeometry(20,715,80,70);
    backbutton->setStyleSheet("border-image:url(:/new/prefix1/backbutton1.png);");


    connect(backbutton,SIGNAL(clicked()),this,SLOT(backbuttton_clicked()));

}

void books::on_button_clicked(int x)
{

    buyer_view_window vw(x,table1);
    vw.setModal(true);
    vw.exec();
}

void books::backbuttton_clicked()
{
    //hide();
    Buyer *b=new Buyer(this);
    b->show();
}


