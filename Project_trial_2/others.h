#ifndef OTHERS_H
#define OTHERS_H

#include <QWidget>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QLabel>
#include <QPushButton>
#include "QVBoxLayout"
#include <QScrollArea>
#include <QGroupBox>
#include <QMessageBox>

#include "buyer_view_window.h"
#include "buyer_menu_page.h"
#include "grid_layout.h"
#include "database.h"

static QString table6;

class others : public Buyer_menu_page
{
    Q_OBJECT
public:
    explicit others(QWidget *parent = nullptr);

signals:

public slots:
    void on_button_clicked(int x);
    void backbuttton_clicked();


private:
    Database mydb;
    int count=0;
};

#endif // OTHERS_H
