#ifndef SECWINDOW_H
#define SECWINDOW_H

#include<QMainWindow>
#include <QWidget>
#include<QApplication>

#include "q_pushbutton.h"
#include  "buyer_seller.h"
#include "mapping.h"
#include  "elearning1.h"

class SecWindow:public QWidget
{
    Q_OBJECT
public:
    SecWindow(QWidget *parent=nullptr);

    void set_Transaction_btn();
    void set_ELearning_btn();
    void set_Mapping_btn();

private slots:
    void transaction_clicked();
    void mapping_clicked();
    void e_learning_clicked();

private:
    Transaction *transaction;
    E_learning *e_learning;
    map *mapping;

    buyer_seller *s;
    Mapping *m;
    elearning1 *e;
};

#endif // SECWINDOW_H
