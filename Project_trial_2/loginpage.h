#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include<QWidget>
#include <QLabel>
#include <QFont>
#include <QLineEdit>
#include <QPushButton>
#include <QMessageBox>
#include <QFormLayout>
#include "seller.h"
#include "database.h"

class loginpage:public QWidget
{
    Q_OBJECT

public:
    loginpage(QWidget *parent=nullptr);

    void set_signin();
    void set_signup();

signals:

private slots:
    void login_clicked();
    void create_account_clicked();
    void backbuttton_clicked();



private:
    QLabel *back_pic;
    QLabel *signinborder;
    QLabel *logo;
    QLabel *lbl_username;
    QLabel *lbl_password;


    QLineEdit *line_username;
    QLineEdit *line_password;

    QPushButton *login;

    QLabel *status;
    seller *s;

    QLabel *signup_back;
    QLabel *signup_front;
    QLabel *signup_layout;
    QLabel *signup_pic;
    QLabel *newto;

    QFormLayout *signup_menu;
    QLabel *lbl_Firstname;
    QLabel *lbl_Midname;
    QLabel *lbl_Lastname;
    QLabel *lbl_Phonenum;
    QLabel *lbl_Email;
    QLabel *lbl_Signup_Password;
    QLabel *lbl_Signup_PasswordConfirm;
    QLabel *lbl_User;
    QLineEdit *line_Firstname;
    QLineEdit *line_Midname;
    QLineEdit *line_Lastname;
    QLineEdit *line_Phonenum;
    QLineEdit *line_Email;
    QLineEdit *line_signup_password;
    QLineEdit *line_password_confirm;
    QLineEdit *line_User;

    QPushButton *Create_account;

    QPushButton *backbutton;
    QPushButton *homebutton;
};

#endif // LOGINPAGE_H
