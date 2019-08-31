#ifndef BOOKS_H
#define BOOKS_H

#include <QWidget>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QLabel>
#include <QPushButton>
#include "QVBoxLayout"
#include <QScrollArea>
#include <QGroupBox>
#include <QSignalMapper>
#include <QTableView>

#include "grid_layout.h"
#include "database.h"
#include "buyer_view_window.h"
#include "buyer_menu_page.h"

static QString table1;

class books : public Buyer_menu_page
{
    Q_OBJECT
public:
    explicit books(QWidget *parent = nullptr);

signals:

public slots:
    void on_button_clicked(int x);
    void backbuttton_clicked();


private:
    Database mydb;
    int count=0;
};

#endif // BOOKS_H
