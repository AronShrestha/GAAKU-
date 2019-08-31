#include "mainwindow.h"

mainwindow::mainwindow(QWidget *parent) : QMainWindow(parent)
{
    setFixedSize(1186,790);
    this->setWindowTitle("Welcome to GAAKU");

    //DEFINED THE PUSH BUTTON SIZE  AND SET THE BACKGROUND IMAGE USING SETSTYLESHEET
    back_click=new QPushButton(this);
    back_click->setGeometry(-8,-10,1201,751);
    back_click->setStyleSheet("border-image:url(:/new/prefix1/layout.png);");

    //DEFINED THE LABEL AND SET ITS TEXT
    back_text= new QLabel(this);
    back_text->setGeometry(919,687,291,41);
    back_text->setText("Please Click Any Where >>");

    //FONT SIZE OF THE TEXT IN THE LABEL WAS DEFINED
    QFont font=back_text->font();
    font.setPointSize(12);
    back_text->setFont(font);

    connect(back_click,SIGNAL(clicked()),this,SLOT(back_clicked()));
}

void mainwindow::back_clicked()
{
    //hide();
    sec=new SecWindow(this);
    sec->show();
}
