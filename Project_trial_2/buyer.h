#ifndef BUYER_H
#define BUYER_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QTableView>
#include <QPixmap>
#include <QPalette>

#include "furniture.h"
#include "books.h"
#include "drawing.h"
#include "musical.h"
#include "electrical.h"
#include "others.h"



class Buyer: public QWidget
{
    Q_OBJECT
public:
    explicit Buyer(QWidget *parent=nullptr);
    ~Buyer();



    furniture *furniture1;
    books *books;
    drawing *drawing1;
    musical *musical1;
    electrical *electrical1;
    others *other1;

private:
    QTableView *table;
    QPushButton *furniture,*book,*musical,*electrical,*other,*drawing;
    QLabel *back_pic,*loginborder,*login_back,*logo;


signals:

public slots:
    void table_clicked();
    void bed_clicked();
    void musical_clicked();
    void electrical_clicked();
    void drawing_clicked();
    void other_clicked();
    void backbuttton_clicked();

};

#endif // BUYER_H
