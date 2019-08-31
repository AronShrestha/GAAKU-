#ifndef DATABASE_H
#define DATABASE_H

#include <QWidget>
#include <QtSql>
#include <QMessageBox>

class Database : public QWidget
{
    Q_OBJECT
public:
    QSqlDatabase mydb;

    void connClose();
    bool connOpen();
    void insert_data(QString table_name,QString name,QString price,QString condition,QString used, QString negotiable,QString details,QString username,QString phonenum,QString imagepath,QString eID);

public:
    explicit Database(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // DATABASE_H
