#ifndef MAPPING_H
#define MAPPING_H

#include <QMainWindow>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QFont>

#include "admin_window.h"
#include "class_view.h"

class Mapping : public QWidget
{
    Q_OBJECT
public:
    explicit Mapping(QWidget *parent = nullptr);

signals:

public slots:
    void edit_clicked();
    void find_classroom_clicked();
    void backbuttton_clicked();

private:
    QLabel *pic;
    QLabel *label_details;

    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;

    QPushButton *edit;
    QPushButton *find_classrooms;



};

#endif // MAPPING_H
