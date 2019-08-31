#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include "secwindow.h"

class mainwindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit mainwindow(QWidget *parent = nullptr);

signals:

public slots:
    void back_clicked();

private:
    QPushButton *back_click;
    QLabel *back_text;
    SecWindow *sec;
};

#endif // MAINWINDOW_H
