#ifndef BUYER_MENU_PAGE_H
#define BUYER_MENU_PAGE_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>

class Buyer_menu_page:public QWidget
{
    Q_OBJECT
public:
    Buyer_menu_page(QWidget *parent=nullptr);

    void set_layout();

    QLabel *loginborder;
    QLabel *back_pic;
    QLabel *logo;
    QLabel *login_back;
    QLabel *login_back1;
    QLabel *loginborder1;

};

#endif // BUYER_MENU_PAGE_H
