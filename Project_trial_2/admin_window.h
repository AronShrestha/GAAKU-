#ifndef ADMIN_WINDOW_H
#define ADMIN_WINDOW_H

#include <QWidget>
#include <QMainWindow>
#include <QDialog>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QFont>
#include <QMessageBox>

#include "class_infp_.h"

class Admin_window : public QDialog
{
    Q_OBJECT
public:
    explicit Admin_window(QWidget *parent = nullptr);

signals:

public slots:
    void get_access_clicked();

private:
    QLabel *back_pic;
    QLabel *logo;
    QLabel *signup_back;
    QLabel *signup_front;
    QLabel *signup_pic;

    QLabel *code;
    QLineEdit *line1;
    QPushButton *get_access;
};

#endif // ADMIN_WINDOW_H
