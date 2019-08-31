#include "readpastque.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QFileDialog>
#include "elearning1.h"

readpastque::readpastque(QWidget *parent) : QWidget(parent)
{
    setFixedSize(1186,790);
    QFont font4("Bauhaus 93");
    font4.setPointSize(24);

    QFont font5("Broadway");
    font5.setPointSize(30);

    label_head1 = new QLabel(this);
    label_head1->setGeometry(0,0,1186,55);
    label_head1->setStyleSheet("background-color: rgb(85, 0, 127)");

    heading1 = new QLabel(this);
    heading1->setGeometry(470,5,260,45);
    heading1->setText("Past Questions ");
    heading1->setFont(font4);

    read1 = new QPushButton(this);
    read1->setGeometry(59,55,121,45);
    read1->setText("Read");
    read1->setFont(font4);

    backclick1 = new QPushButton(this);
    backclick1->setGeometry(0,55,61,45);
    backclick1->setText("<<");
    backclick1->setFont(font5);



    visual = new QPlainTextEdit(this);
    visual->setGeometry(0,99,1186,685);

    connect(read1,SIGNAL(clicked()),this,SLOT(read1_clicked()));
    connect(backclick1,SIGNAL(clicked()),this,SLOT(backclick_clicked()));


}

void readpastque:: read1_clicked(){
    QString file_name = QFileDialog::getOpenFileName(this,"Open a file","C:/Kushal/GAAKU/e_learning/text Files/Past Questions");
    QFile file(file_name);

    if(!file.open(QFile::ReadOnly  |  QFile::Text)){
        QMessageBox::warning(this,"title","File not open");

    }
    QTextStream in(&file);
    QString text = in.readAll();
    visual->setPlainText(text);
    file.close();
}

void readpastque:: backclick_clicked(){

    hide();
    elearning1 *el = new elearning1();
    el->show();


}

