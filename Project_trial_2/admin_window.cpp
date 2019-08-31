#include "admin_window.h"

Admin_window::Admin_window(QWidget *parent) : QDialog(parent)
{
    setFixedSize(550,600);


    QLabel *map=new QLabel(this);
    map->setGeometry(0,0,550,600);
    map->setStyleSheet("border-image:url(:/new/prefix1/map2.png);");

    logo=new QLabel(this);
    logo->setGeometry(130,0,300,250);
    logo->setStyleSheet("border-image:url(:/new/prefix1/logo.png);");


    signup_back= new QLabel(this);
    signup_back->setGeometry(100,200,350,300);
    signup_back->setStyleSheet("color:white");
    signup_back->setText("LOGIN TO ACCESS NOW");
    signup_back->setAlignment(Qt::AlignCenter);
    QFont font1;
    font1.setPointSize(14);
    font1.setBold(true);
    font1.setUnderline(true);
    signup_back->setFont(font1);

    signup_front=new QLabel(this);
    signup_front->setGeometry(84,393,374,180);



    code=new QLabel(this);
    code->setStyleSheet("color:white;");
    code->setGeometry(84,393,374,50);
    code->setText("Insert the Login Code");
    QFont font=code->font();
    font.setPointSize(12);
    code->setAlignment(Qt::AlignCenter);
    code->setFont(font);

    line1=new QLineEdit(this);
    line1->setEchoMode(QLineEdit::Password);
    line1->setGeometry(200,443,150,30);

    get_access=new QPushButton(this);
    get_access->setText("Get Access");
    get_access->setGeometry(200,493,150,30);

    /*vbox->addWidget(code);
    vbox->addWidget(line1);
    vbox->addWidget(get_access);

    signup_front->setLayout(vbox);*/

    connect(get_access,SIGNAL(clicked()),this,SLOT(get_access_clicked()));
}

void Admin_window::get_access_clicked()
{
    QString code=line1->text();
    if(code=="20562056"){
        QMessageBox::information(this,tr("Access Granted"),tr("CODE CORRECRT: ACCESS GRANTED"));
        //hide();
        Class_info *c= new Class_info(this);
        c->show();
    }
    else {
        QMessageBox::critical(this,tr("Access Denied"),tr("CODE INCORRECRT: ACCESS DENIED"));
    }
}
