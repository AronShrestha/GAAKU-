#include "seller.h"
#include "mainwindow.h"
#include "buyer_seller.h"


seller::seller(QWidget *parent) : Database (parent)
{


}

seller::seller(QWidget *parent,QString user, QString phone):Database (parent)
{
    username=user;
    phonenum=phone;

    setFixedSize(1186,790);
    setWindowTitle("SELLER PAGE");

    back_pic=new QLabel(this);
    back_pic->setGeometry(0,0,1186,790);
    back_pic->setStyleSheet("border-image:url(:/new/prefix1/t1.png);");

    login_back= new QLabel(this);
    login_back->setGeometry(100,0,986,150);
    login_back->setStyleSheet("background-color:rgb(125, 46, 166)");

    loginborder=new QLabel(this);
    loginborder->setGeometry(100,150,986,20);
    loginborder->setStyleSheet("background-color:rgb(81, 27, 109)");

    logo=new QLabel(this);
    logo->setGeometry(470,-20,261,191);
    logo->setStyleSheet("border-image:url(:/new/prefix1/logo.png);");

    QLabel *group_back=new QLabel(this);
    group_back->setGeometry(110,190,521,481);

    QVBoxLayout *v=new QVBoxLayout();
    v->addWidget(item_info());
    group_back->setLayout(v);

    QFont font;
    font.setPointSize(11);

    label = new QLabel(this);
    label->setText("<font>Choose an an Image</font><br/><font><b>Image size must of 300x300</b></font>");
    label->setGeometry(700,190,300,200);
    label->setAlignment(Qt::AlignCenter);
    label->setFrameStyle(2);
    label->setFont(font);


    pushButton = new QPushButton(this);
    pushButton->setText("Browse");
    pushButton->setGeometry(780,440,111,41);

    pushButton_2 = new QPushButton(this);
    pushButton_2->setText("Send");
    pushButton_2->setGeometry(750,630,111,41);

    cancel = new QPushButton(this);
    cancel->setText("Cancel");
    cancel->setGeometry(882,630,111,41);

    login_back= new QLabel(this);
    login_back->setGeometry(100,710,986,80);
    login_back->setStyleSheet("background-color:rgb(125, 46, 166)");

    loginborder=new QLabel(this);
    loginborder->setGeometry(100,690,986,20);
    loginborder->setStyleSheet("background-color:rgb(81, 27, 109)");

    QPushButton *backbutton=new QPushButton(this);
    backbutton->setGeometry(130,715,80,70);
    backbutton->setStyleSheet("border-image:url(:/new/prefix1/backbutton1.png);");


    connect(pushButton,SIGNAL(clicked()),this,SLOT(on_browseButton_clicked()));
    connect(pushButton_2,SIGNAL(clicked()),this,SLOT(on_savebutton_clicked()));
    connect(cancel,SIGNAL(clicked()),this,SLOT(close()));
    connect(backbutton,SIGNAL(clicked()),this,SLOT(backbuttton_clicked()));

}



void seller::on_browseButton_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this,tr("Select an image"),tr("*.*"));
    filename_temp=filename;
    qDebug()<<(filename_temp);

    if(QString::compare(filename,QString())!=0){
        QImage picture;
        bool valid = picture.load(filename);
        if(valid){
            picture = picture.scaledToWidth(label->width(),Qt::SmoothTransformation);
            label->setPixmap(QPixmap::fromImage(picture));
        }
        else{
            label->setText("INVALID INPUT");
        }

    }
}




void seller::on_savebutton_clicked(){
    QString sname=linedit2->text();
    QString sprice=linedit->text();
    QString sused=linedit3->text();
    QString scategory=category->currentText();
    QString scondition=condition->currentText();
    QString snegotiable=negotiable->currentText();
    QString sdetail=textedit->toPlainText();


    db.connOpen();
    if(!db.connOpen()){
        qDebug()<<"Failed to connect to database";
        return;

    }

    if(scategory=="Furnitures"){
        table_name="furniture";
        int i=0;
        i=count_entry("furniture");
        QString eID=QString::number(i+1);
        insert_data(table_name,sname,sprice,scondition,sused,snegotiable,sdetail,username,phonenum,filename_temp,eID);
    }
    else if(scategory=="Books and notes"){
        table_name="booknote";
        int i=0;
        i=count_entry("booknote");
        QString eID=QString::number(i+1);
        insert_data(table_name,sname,sprice,scondition,sused,snegotiable,sdetail,username,phonenum,filename_temp,eID);
    }
    else if(scategory=="Electrical appliances"){
        table_name="electrical";
        int i=0;
        i=count_entry("electrical");
        QString eID=QString::number(i+1);
        insert_data(table_name,sname,sprice,scondition,sused,snegotiable,sdetail,username,phonenum,filename_temp,eID);
    }
    else if(scategory=="Musical instruments"){
        table_name="musical";
        int i=0;
        i=count_entry("musical");
        QString eID=QString::number(i+1);
        insert_data(table_name,sname,sprice,scondition,sused,snegotiable,sdetail,username,phonenum,filename_temp,eID);
    }
    else if(scategory=="Drawing and labcoat"){
        table_name="drawinglabcoats";
        int i=0;
        i=count_entry("drawinglabcoats");
        QString eID=QString::number(i+1);
        insert_data(table_name,sname,sprice,scondition,sused,snegotiable,sdetail,username,phonenum,filename_temp,eID);
    }
    else{
        table_name="others";
        int i=0;
        i=count_entry("others");
        QString eID=QString::number(i+1);
        insert_data(table_name,sname,sprice,scondition,sused,snegotiable,sdetail,username,phonenum,filename_temp,eID);
    }
    //this->hide();
    buyer_seller *return_to_buyer_seller=new buyer_seller(this);
    return_to_buyer_seller->show();
}

int seller::count_entry(QString table)
{
    Database mydb;
    int count=0;
    mydb.connOpen();
    QSqlQuery qry;
    qry.exec("select title from '"+table+"'");

    while(qry.next()){
        count++;
    }
    return count;

}

QGroupBox* seller::item_info()
{
    QGroupBox *groupbox= new QGroupBox(tr(""));

    QFont font;
    font.setPointSize(12);


    category_label = new QLabel(this);
    category_label->setText("Category");
    //category_label->setGeometry(452,175,51,16);
    category_label->setStyleSheet("color:white");
    category_label->setFont(font);

    condition_label = new QLabel(this);
    condition_label->setText("Condition");
    condition_label->setStyleSheet("color:white");
    condition_label->setFont(font);
    //condition_label->setGeometry(452,281,53,16);

    price = new QLabel(this);
    price->setText("Price");
    price->setStyleSheet("color:white");
    price->setFont(font);
    //price->setGeometry(452,333,28,16);

    detail_label = new QLabel(this);
    detail_label->setText("Write about the item in detail");
    detail_label->setStyleSheet("color:white");
    detail_label->setFont(font);
    //detail_label->setGeometry(452,416,191,16);

    used = new QLabel(this);
    used->setText("Used for(in months)");
    used->setStyleSheet("color:white");
    used->setFont(font);
    //used->setGeometry(640,177,141,16);

    name = new QLabel(this);
    name->setText("Item's name");
    name->setStyleSheet("color:white");
    name->setFont(font);
    //name->setGeometry(452,229,71,16);

    // CATEGORIES
    category = new QComboBox(this);
    //category->setGeometry(452,200,131,22);
    category->addItem("Furnitures");
    category->addItem("Books and notes");
    category->addItem("Electrical appliances");
    category->addItem("Drawing and labcoat");
    category->addItem("Musical instruments");
    category->addItem("Others");
    category->setFont(font);

    // CONDITION
    condition = new QComboBox(this);
    //condition->setGeometry(452,304,87,22);
    condition->addItem("New");
    condition->addItem("Like New");
    condition->addItem("Very Good");
    condition->addItem("Good");
    condition->addItem("Poor");
    condition->setFont(font);

    // PRICE
    negotiable = new QComboBox(this);
    //negotiable->setGeometry(452,385,91,22);
    negotiable->addItem("Negotiable");
    negotiable->addItem("Fixed");
    negotiable->setFont(font);



    linedit = new QLineEdit(this);
    //linedit->setGeometry(452,356,137,22);
    linedit->setFont(font);

    linedit2 = new QLineEdit(this);
    //linedit2->setGeometry(452,252,137,22);
    linedit2->setFont(font);

    linedit3 = new QLineEdit(this);
    //linedit3->setGeometry(640,200,137,22);
    linedit3->setFont(font);

    textedit = new QPlainTextEdit(this);
    //textedit->setGeometry(452,443,500,200);
    textedit->setFont(font);

    QFormLayout *form= new QFormLayout();
    form->addRow(category_label,category);
    form->addRow(name,linedit2);
    form->addRow(condition_label,condition);
    form->addRow(price,linedit);
    form->addRow(used,linedit3);

    QVBoxLayout *vbox=new QVBoxLayout();
    vbox->addLayout(form);
    vbox->addWidget(negotiable);
    vbox->addWidget(detail_label);
    vbox->addWidget(textedit);

    groupbox->setFont(font);
    //groupbox->setStyleSheet("color:white");
    groupbox->setLayout(vbox);

    return groupbox;
}

void seller::backbuttton_clicked()
{
    //hide();
    buyer_seller *b=new buyer_seller(this);
    b->show();
}


