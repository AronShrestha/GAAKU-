#ifndef SELLER_H
#define SELLER_H

#include <QWidget>
#include <QLabel>
#include <QComboBox>
#include <QPushButton>
#include <QLineEdit>
#include <QTextEdit>
#include <QFileDialog>
#include <QtSql>
#include <QMessageBox>
#include <QPlainTextEdit>
#include <QGroupBox>

#include "database.h"

static QString username,phonenum,filename_temp;
static QString table_name;

class seller : public Database
{
    Q_OBJECT
public:
    explicit seller(QWidget *parent = nullptr);
    seller(QWidget *parent,QString user, QString phone);

    int count_entry(QString table);

    QGroupBox* item_info();

signals:
    void send_strings(QString,QString);

 public slots:
    void on_browseButton_clicked();
    void on_savebutton_clicked();
    void backbuttton_clicked();



signals:

private:
    QLabel *label,*category_label,*condition_label,*price,*detail_label,*used,*name,*back_pic,*login_back,*loginborder,*logo,*sellpic;
    QComboBox *category,*condition,*negotiable;
    QPushButton *pushButton,*pushButton_2,*cancel;
    QLineEdit *linedit,*linedit2,*linedit3;
    QPlainTextEdit *textedit;

    Database db,db2,db3;
};

#endif // SELLER_H
