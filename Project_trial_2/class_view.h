#ifndef CLASS_VIEW_H
#define CLASS_VIEW_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QTableView>

#include "database.h"

class class_view:public QDialog
{
    Q_OBJECT
public:
    class_view(QWidget *parent=nullptr);

private:
    QLabel *back_pic;
    QLabel *logo;
    QTableView *table;
};

#endif // CLASS_VIEW_H
