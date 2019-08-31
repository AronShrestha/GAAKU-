#include "buyer_view_window.h"

buyer_view_window::buyer_view_window(QWidget *parent) : QDialog (parent)
{

}

buyer_view_window::buyer_view_window(int entry_no, QString table_name)
{
    QFont font;
    font.setPointSize(12);
    font.setBold(true);

    QFont font1;
    font1.setPointSize(12);

    setFixedSize(550,600);
    setWindowTitle("ITEM INFO");

    QLabel *map=new QLabel(this);
    map->setGeometry(0,0,550,600);
    map->setStyleSheet("border-image:url(:/new/prefix1/t4.png);");

    back_pic=new QLabel(this);
    back_pic->setGeometry(90,0,368,150);
    back_pic->setStyleSheet("background-color:rgb(81,52,139);");

    logo=new QLabel(this);
    logo->setGeometry(160,20,200,150);
    logo->setStyleSheet("border-image:url(:/new/prefix1/logo.png);");


    parent_layout=new QLabel(this);
    parent_layout->setGeometry(90,159,368,541);
    parent_layout->setText("");

    /*QLabel *l1= new QLabel(this);
    l1->setText("<font color=white>ITEM INFO</font>");
    QFont font2;
    font2.setPointSize(13);
    font2.setBold(true);*/

    lbl_name=new QLabel(this);
    lbl_used=new QLabel(this);
    lbl_condition=new QLabel(this);
    lbl_negotiable=new QLabel(this);
    lbl_details=new QLabel(this);
    lbl_price=new QLabel(this);
    lbl_username=new QLabel(this);
    lbl_phonenum=new QLabel(this);

    lbl_name->setFont(font);
    lbl_used->setFont(font);
    lbl_condition->setFont(font);
    lbl_negotiable->setFont(font);
    lbl_details->setFont(font);
    lbl_price->setFont(font);
    lbl_username->setFont(font);
    lbl_phonenum->setFont(font);

    l_name=new QLabel(this);
    l_used=new QLabel(this);
    l_condition=new QLabel(this);
    l_negotiable=new QLabel(this);
    l_details=new QLabel(this);
    l_price=new QLabel(this);
    l_username=new QLabel(this);
    l_phonenum= new QLabel(this);

    l_name->setFont(font1);
    l_used->setFont(font1);
    l_condition->setFont(font1);
    l_negotiable->setFont(font1);
    l_details->setFont(font1);
    l_price->setFont(font1);
    l_username->setFont(font1);
    l_phonenum->setFont(font1);



    lbl_name->setText("Name");
    lbl_used->setText("Used");
    lbl_condition->setText("Condition");
    lbl_negotiable->setText("Negotiable");
    lbl_details->setText("Details");
    lbl_price->setText("Price");
    lbl_username->setText("Username");
    lbl_phonenum->setText("Phone Number");

    QFormLayout *form= new QFormLayout();
    form->addRow(lbl_username,l_username);
    form->addRow(lbl_phonenum,l_phonenum);
    form->addRow(lbl_name,l_name);
    form->addRow(lbl_used,l_used);
    form->addRow(lbl_condition,l_condition);
    form->addRow(lbl_negotiable,l_negotiable);
    form->addRow(lbl_details,l_details);
    form->addRow(lbl_price,l_price);

   /* QVBoxLayout *v=new QVBoxLayout();
    v->addWidget();
    v->addLayout(form);*/

    parent_layout->setLayout(form);

    eID=QString ::number(entry_no);
    QString table=table_name;
    qDebug()<<eID;
    qDebug()<<table;

    Database mydb;
    if(mydb.connOpen()){
        qDebug()<<"Connected Successfully";
    }
    else {
        qDebug()<<"Failed to Connect";
    }

    mydb.connOpen();
    QSqlQuery qry;
    qry.prepare("select * from '"+table+"' where eID='"+eID+"'");
    if(!qry.exec()){
        QMessageBox::critical(this,tr("ERROR"),qry.lastError().text());
    }
    else {
        while(qry.next()){
            l_name->setText(qry.record().value(0).toString());
            l_used->setText(qry.record().value(3).toString()+" months");
            l_condition->setText(qry.record().value(2).toString());
            l_negotiable->setText(qry.record().value(4).toString());
            l_details->setText(qry.record().value(5).toString());
            l_price->setText("Rs."+qry.record().value(1).toString());
            l_username->setText(qry.record().value(6).toString());
            l_phonenum->setText(qry.record().value(7).toString());
         }

        mydb.connClose();
    }
}
