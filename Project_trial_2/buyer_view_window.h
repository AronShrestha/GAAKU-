#ifndef BUYER_VIEW_WINDOW_H
#define BUYER_VIEW_WINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QLabel>
#include "database.h"
#include <QMessageBox>
#include <QLabel>
#include <QFormLayout>

class buyer_view_window : public QDialog
{
    Q_OBJECT
public:
    explicit buyer_view_window(QWidget *parent = nullptr);
    buyer_view_window(int entry_no,QString table_name);

signals:

public slots:

private:
    QLabel *back_pic;
    QLabel *logo;
    QLabel *parent_layout;

    QString eID;
    QString name;
    QString used;
    QString condition;
    QString negotiable;
    QString price;

    QLabel *lbl_name;
    QLabel *lbl_used;
    QLabel *lbl_condition;
    QLabel *lbl_negotiable;
    QLabel *lbl_details;
    QLabel *lbl_price;
    QLabel *lbl_username;
    QLabel *lbl_phonenum;


    QLabel *l_name;
    QLabel *l_used;
    QLabel *l_condition;
    QLabel *l_negotiable;
    QLabel *l_details;
    QLabel *l_price;
    QLabel *l_username;
    QLabel *l_phonenum;
};

#endif // BUYER_VIEW_WINDOW_H
