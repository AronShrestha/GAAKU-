#ifndef BUYER_SELLER_H
#define BUYER_SELLER_H

#include <QMainWindow>
#include <QWidget>
#include <QPushButton>
#include <QLabel>

#include "loginpage.h"
#include "seller.h"
#include "buyer.h"



class buyer_seller : public QWidget
{
    Q_OBJECT
public:
    explicit buyer_seller(QWidget *parent = nullptr);



signals:

public slots:
    void seller_clicked();
    void buyer_clicked();
    void backbuttton_clicked();

private:
    QPushButton *buyer;
    QPushButton *seller;
    QLabel *label_buyer;
    QLabel *label_seller;
    QLabel *label_que;

    loginpage *l;
    Buyer *b;
};

#endif // BUYER_SELLER_H
