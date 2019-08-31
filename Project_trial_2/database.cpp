#include "database.h"

void Database::connClose()
{
    mydb.close();
    mydb.removeDatabase(QSqlDatabase::defaultConnection);
}

bool Database::connOpen()
{
    mydb=QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/shres/Desktop/Projects/Project_trial_2 (2)/Project_trial_2/database/signup.db");

    if(mydb.open()){
        qDebug()<<("Connected");
        return true;
    }
    else {
        qDebug()<<("Failed to Connected");
        return false;
    }
}

void Database::insert_data(QString table_name, QString name, QString price, QString condition,QString used, QString negotiable, QString details, QString username, QString phonenum, QString imagepath, QString eID)
{
    connOpen();
    QSqlQuery query;
    query.prepare("INSERT INTO '"+table_name+"'(title,price,condition,used,negotiable,detail,username,phonenum,imagepath,eID) VALUES('"+name+"','"+price+"','"+condition+"','"+used+"','"+negotiable+"','"+details+"','"+username+"','"+phonenum+"','"+imagepath+"','"+eID+"')");

    if(query.exec()){
        QMessageBox::information(this,tr("Successful"),tr("Sent"));
        connClose();

    }
    else{
        QMessageBox::information(this,tr("Error"),query.lastError().text());
    }
}

Database::Database(QWidget *parent) : QWidget(parent)
{

}
