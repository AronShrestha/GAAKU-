#include "buyer_menu_page.h"

Buyer_menu_page::Buyer_menu_page(QWidget *parent):QWidget (parent)
{

}

void Buyer_menu_page::set_layout()
{
            //BORDER TOP
    QLabel *login_back= new QLabel(this);
    login_back->setGeometry(0,0,1186,101);
    login_back->setStyleSheet("background-color:rgb(81, 52, 139)");


    QLabel *loginborder=new QLabel(this);
    loginborder->setGeometry(0,101,1186,20);
    loginborder->setStyleSheet("background-color:rgb(69, 36, 99);");

    QLabel *loginborder1=new QLabel(this);
    loginborder1->setGeometry(0,121,1186,16);
    loginborder1->setStyleSheet("background-color:white");

    QLabel *logo=new QLabel(this);
    logo->setGeometry(10,-20,281,150);
    logo->setStyleSheet("border-image:url(:/new/prefix1/logo.png);");


              //BORDER BOTTOM

    QLabel *login_back2= new QLabel(this);
    login_back2->setGeometry(0,689,1186,101);
    login_back2->setStyleSheet("background-color:rgb(81, 52, 139)");

    //LOGIN BORDER
    QLabel *loginborder2=new QLabel(this);
    loginborder2->setGeometry(0,669,1186,20);
    loginborder2->setStyleSheet("background-color:rgb(69, 36, 99);");

    QLabel *loginborder3=new QLabel(this);
    loginborder3->setGeometry(0,653,1186,16);
    loginborder3->setStyleSheet("background-color:white");

    QLabel *categories_details=new QLabel(this);
    categories_details->setGeometry(600,70,480,20);
    categories_details->setText("SELECT FROM VARIETY OF OPTIONS");
    QFont font("Times New Roman");
    font.setPointSize(16);
    categories_details->setStyleSheet("color:white");
    categories_details->setFont(font);




}
