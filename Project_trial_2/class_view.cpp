#include "class_view.h"

class_view::class_view(QWidget *parent):QDialog (parent)
{
    setFixedSize(1400,790);
    setWindowTitle("ClassRoom Information");

    QLabel *login_back= new QLabel(this);
    login_back->setGeometry(0,0,1400,101);
    login_back->setStyleSheet("background-color:rgb(81, 52, 139)");


    QLabel *loginborder=new QLabel(this);
    loginborder->setGeometry(0,101,1400,20);
    loginborder->setStyleSheet("background-color:rgb(69, 36, 99);");

    QLabel *loginborder1=new QLabel(this);
    loginborder1->setGeometry(0,121,1400,16);
    loginborder1->setStyleSheet("background-color:white");

    QLabel *logo=new QLabel(this);
    logo->setGeometry(10,-20,281,150);
    logo->setStyleSheet("border-image:url(:/new/prefix1/logo.png);");

    table= new QTableView(this);
    table->setGeometry(0,137,1400,653);

    Database conn;
    QSqlQueryModel *modal= new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery *query=new QSqlQuery(conn.mydb);

    query->prepare("select * from classroom");

    if(!query->exec()){
        qDebug()<<query->lastError();
    }
    modal->setQuery(*query);
    table->setModel(modal);

    conn.connClose();

    qDebug()<<(modal->rowCount());

}
