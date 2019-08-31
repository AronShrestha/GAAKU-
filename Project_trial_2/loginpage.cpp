//BACK BUTTON LEFT

#include "loginpage.h"
#include "buyer_seller.h"
#include "mainwindow.h"

loginpage::loginpage(QWidget *parent):QWidget (parent)
{
    setFixedSize(1186,790);
    setWindowTitle("LOGIN AND SINGUP PAGE");

    back_pic=new QLabel(this);
    back_pic->setFixedSize(1186,790);
    back_pic->setStyleSheet("border-image:url(:/new/prefix1/trans3.jpg);");

    //LOGO IN LOGIN

    logo=new QLabel(this);
    logo->setGeometry(40,0,360,210);
    logo->setStyleSheet("border-image:url(:/new/prefix1/logo.png);");

    //Setting up signin
    set_signin();

    //Setting up signup
    set_signup();

    QFont font1;
    font1.setPointSize(12);
    font1.setStyleName("Times New Roman");
    status=new QLabel(this);
    status->setGeometry(950,760,500,30);
    status->setText("Status");
    status->setFont(font1);

    backbutton=new QPushButton(this);
    backbutton->setGeometry(10,710,80,70);
    backbutton->setStyleSheet("border-image:url(:/new/prefix1/backbutton1.png);");



    //CONNECTING WITH THE DATABASE

    Database mydb;

    if(mydb.connOpen()){
        status->setText("Connected Successfully");
    }

    else{
        status->setText("ERROR:Failed to connect with Database");
    }

    connect(login,SIGNAL(clicked()),this,SLOT(login_clicked()));
    connect(Create_account,SIGNAL(clicked()),this,SLOT(create_account_clicked()));
    connect(backbutton,SIGNAL(clicked()),this,SLOT(backbuttton_clicked()));

}

void loginpage::set_signin()
{


    QFont font;
    font.setPointSize(12);
    font.setStyleName("Times New Roman");

    //FOR THE "SIGN IN"...DESCRIBING THE GEMOMETRY, SETTING TEXT, FONT SIZE AND FONT COLOR

    signinborder=new QLabel(this);
    signinborder->setGeometry(777,27,375,70);
    signinborder->setText("SIGN IN");
    signinborder->setAlignment(Qt::AlignCenter);
    signinborder->setStyleSheet("color:white");
    QFont font_1;
    font_1.setPointSize(18);
    font_1.setBold(true);
    font_1.setUnderline(true);
    signinborder->setFont(font_1);




    //lbl_UserNAME AND PASSWORD IN LLOGIN WITH LINE EDITS AND PUSH BUTTONS
    lbl_username=new QLabel(this);
    lbl_username->setGeometry(800,140,131,16);
    lbl_username->setText("Username");
    lbl_username->setStyleSheet("color:white;");
    lbl_username->setFont(font);

    lbl_password=new QLabel(this);
    lbl_password->setGeometry(800,220,131,16);
    lbl_password->setText("Password");
    lbl_password->setStyleSheet("color:white;");
    lbl_password->setFont(font);

    line_username=new QLineEdit(this);
    line_username->setGeometry(800,180,231,22);
    line_username->setFont(font);

    line_password=new QLineEdit(this);
    line_password->setGeometry(800,250,231,22);
    line_password->setEchoMode(QLineEdit::Password);
    line_password->setFont(font);

    login=new QPushButton(this);
    login->setGeometry(880,310,111,31);
    login->setText("Login");
}



void loginpage::set_signup()
{

            //BACKGROUND COLOR FOR THE SSIGN UP PAGE

    signup_back= new QLabel(this);
    signup_back->setGeometry(190,380,555,411);


    //ALSO THE BACKGROUND COLOR OF SIGN UP PAGE BUT SONSISTS OF FORM LAYOUT

    signup_layout=new QLabel(this);
    signup_layout->setGeometry(270,410,411,411);



        //STYLING "NEW TO GAAKU"

    newto=new QLabel(this);
    newto->setGeometry(190,269,555,126);
    newto->setText("New to GAAKU? Signup Now");
    QFont font2=newto->font();
    font2.setPointSize(18);
    font2.setBold(true);
    font2.setUnderline(true);
    newto->setFont(font2);
    newto->setAlignment(Qt::AlignCenter);
    newto->setStyleSheet("color:white;");

    //EDITING THE FORM LAYOUT
    //COMPONENTS OF SIGNUP MENU

    lbl_Firstname = new QLabel(this);
    line_Firstname = new QLineEdit(this);
    lbl_Midname = new QLabel(this);
    line_Midname = new QLineEdit(this);
    lbl_Lastname = new QLabel(this);
    line_Lastname = new QLineEdit(this);
    lbl_Phonenum = new QLabel(this);
    line_Phonenum = new QLineEdit(this);
    lbl_Email = new QLabel(this);
    line_Email = new QLineEdit(this);
    lbl_Signup_Password = new QLabel(this);
    line_signup_password = new QLineEdit(this);
    lbl_Signup_PasswordConfirm = new QLabel(this);
    line_password_confirm = new QLineEdit(this);
    lbl_User=new QLabel(this);
    line_User=new QLineEdit(this);

//ADDING STYLE TO THE COMPONENTS OF SIGNUP MENUS

    lbl_Firstname->setText("First Name");
    lbl_Firstname->setStyleSheet("color:white;");
    QFont font3=lbl_Firstname->font();
    font3.setPointSize(12);
    font3.setStyleName("Times New Roman");
    lbl_Firstname->setFont(font3);

    lbl_Midname->setText("Middle Name");
    lbl_Midname->setStyleSheet("color:white;");
    lbl_Midname->setFont(font3);

    lbl_Lastname->setText("Last Name");
    lbl_Lastname->setStyleSheet("color:white;");
    lbl_Lastname->setFont(font3);

    lbl_Phonenum->setText("Phone Number");
    lbl_Phonenum->setStyleSheet("color:white;");
    lbl_Phonenum->setFont(font3);

    lbl_Email->setText("Email Address");
    lbl_Email->setStyleSheet("color:white;");
    lbl_Email->setFont(font3);

    lbl_User->setText("Username");
    lbl_User->setStyleSheet("color:white;");
    lbl_User->setFont(font3);

    lbl_Signup_Password->setText("Password");
    lbl_Signup_Password->setStyleSheet("color:white;");
    lbl_Signup_Password->setFont(font3);

    lbl_Signup_PasswordConfirm->setText("Password Confirm");
    lbl_Signup_PasswordConfirm->setStyleSheet("color:white;");
    lbl_Signup_PasswordConfirm->setFont(font3);


    line_Firstname->setStyleSheet("background-color:white; color: black;");
    line_Midname->setStyleSheet("background-color:white; color: black;");
    line_Lastname->setStyleSheet("background-color:white; color: black;");
    line_Phonenum->setStyleSheet("background-color:white; color: black;");
    line_Email->setStyleSheet("background-color:white; color: black;");
    line_User->setStyleSheet("background-color:white; color: black;");
    line_signup_password->setStyleSheet("background-color:white; color: black;");
    line_signup_password->setEchoMode(QLineEdit::Password);
    line_password_confirm->setStyleSheet("background-color:white; color: black;");
    line_password_confirm->setEchoMode(QLineEdit::Password);

//CHANGING THE FONT SIZE OF TEXT IN LINE EDITS

    line_Firstname->setFont(font3);
    line_Midname->setFont(font3);
    line_Lastname->setFont(font3);
    line_Phonenum->setFont(font3);
    line_Email->setFont(font3);
    line_signup_password->setFont(font3);
    line_password_confirm->setFont(font3);
    line_User->setFont(font3);

    //ADDING ALL THE COMPONENTS TO THE FORM LAYOUT

    signup_menu=new QFormLayout();
    signup_menu->addRow(lbl_Firstname,line_Firstname);
    signup_menu->addRow(lbl_Midname,line_Midname);
    signup_menu->addRow(lbl_Lastname,line_Lastname);
    signup_menu->addRow(lbl_Phonenum,line_Phonenum);
    signup_menu->addRow(lbl_Email,line_Email);
    signup_menu->addRow(lbl_User,line_User);
    signup_menu->addRow(lbl_Signup_Password,line_signup_password);
    signup_menu->addRow(lbl_Signup_PasswordConfirm,line_password_confirm);

    signup_layout->setLayout(signup_menu);


    Create_account=new QPushButton(this);
    Create_account->setGeometry(360,720,221,61);
    Create_account->setText("Create Account");

}

void loginpage::login_clicked(){
    Database mydb;
    QString username=line_username->text();
    QString password=line_password->text();
    QString phonenum;

    if(mydb.connOpen()){
        qDebug()<<"Connected Successfully"<<endl;
    }

    else {
        qDebug()<<"Failed To Connect to Database"<<endl;
    }

    mydb.connOpen();

    QSqlQuery qry;
    qry.prepare("select * from signup where username='"+username+"' and password='"+password+"'");

    if(qry.exec()){
        int count=0;
        while(qry.next()){
            count++;
            phonenum=qry.record().value(4).toString();
        }
        if(count==1){
            if(!qry.exec("INSERT INTO tempaccname(username) VALUES('"+username+"')")){
                QMessageBox::critical(this,"Error",qry.lastError().text());
            }
            status->setText("username and Password Correct");
            mydb.connClose();
            //hide();
            s= new seller(this,username,phonenum);
            s->show();
        }
        else if(count>1){
            status->setText("Duplicate Username and Password");
        }
        else{
            status->setText("Incorrect Username and Password");
        }
    }
    else {
        qDebug()<<qry.lastError();
    }

}

void loginpage::create_account_clicked(){
    QString lbl_Firstname=line_Firstname->text();
    QString lbl_Midname=line_Midname->text();
    QString lbl_Lastname=line_Lastname->text();
    QString lbl_Phonenum=line_Phonenum->text();
    QString lbl_Emailid=line_Email->text();
    QString lbl_Username=line_User->text();
    QString password=line_signup_password->text();
    QString password_confirm=line_password_confirm->text();

    if(lbl_Firstname=="" || lbl_Lastname=="" || lbl_Phonenum=="" || lbl_Emailid=="" || lbl_Username=="" ||password=="" || password_confirm==""){
        QMessageBox::warning(this,"Sign Up","Failed to create an account. Please fill the form correctly.");
        line_Firstname->setText("");
        line_Midname->setText("");
        line_Lastname->setText("");
        line_Phonenum->setText("");
        line_Email->setText("");
        line_signup_password->setText("");
        line_password_confirm->setText("");
        line_User->setText("");

    }

    else {
        if(password==password_confirm){
            Database mydb;
            if(mydb.connOpen()){
                qDebug()<<"Connected Successfully";
            }
            else {
                qDebug()<<"Failed to Connect to Database";
            }

            mydb.connOpen();
            QSqlQuery qry;
            qry.prepare("insert into signup(firstname,midname,lastname,phonenum,emailid,username,password) "
                        "values('"+lbl_Firstname+"','"+lbl_Midname+"','"+lbl_Lastname+"','"+lbl_Phonenum+"','"+lbl_Emailid+"','"+lbl_Username+"','"+password+"')");

            if(qry.exec()){
                QMessageBox::information(this,"Sign Up","Account Created Successfully");
                mydb.connClose();
            }
            else {
                 QMessageBox::critical(this,tr("Error"),qry.lastError().text());
            }

                line_Firstname->setText("");
                line_Midname->setText("");
                line_Lastname->setText("");
                line_Phonenum->setText("");
                line_Email->setText("");
                line_signup_password->setText("");
                line_password_confirm->setText("");
                line_User->setText("");
        }
        else
        {
            QMessageBox::warning(this,"Sign Up","Password incorrect. Failed to create an account");
            line_signup_password->setText("");
            line_password_confirm->setText("");
        }
    }
}

void loginpage::backbuttton_clicked()
{
    //hide();
    buyer_seller *b=new buyer_seller(this);
    b->show();
}


