#ifndef CLASS_INFO_H
#define CLASS_INFO_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QGroupBox>
#include <QCheckBox>
#include <QLineEdit>
#include <QFormLayout>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QMessageBox>
#include <QComboBox>

#include "database.h"

class Class_info:public QWidget
{
    Q_OBJECT
public:
    Class_info(QWidget *parent=nullptr);

    QGroupBox *data_entry();

public slots:
    void insert_clicked();
    void delete_clicked();

private:
    QLabel *back_pic;
    QLabel *back_front;
    QLabel *logo;
    QLabel *parent_layout;

    QLabel *status;
    QCheckBox *check1;
    QCheckBox *check2;
    QCheckBox *check3;
    QCheckBox *check4;
    QCheckBox *check5;
    QCheckBox *check6;
    QCheckBox *check7;

    QLabel *entryno;
    QLabel *blockno;
    QLabel *classno;
    QLabel *day;
    QLineEdit *line1;
    QLineEdit *line2;
    QLineEdit *line3;

    QLabel *details;
    QPushButton *button_1;
    QPushButton *button_2;

    QComboBox *days_info;

};

#endif // CLASS_INFP__H
