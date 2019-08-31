#include "class_infp_.h"

Class_info::Class_info(QWidget *parent):QWidget (parent)
{
    setFixedSize(550,700);

    QLabel *map=new QLabel(this);
    map->setGeometry(0,0,550,700);
    map->setStyleSheet("border-image:url(:/new/prefix1/map_back.png);");

    back_pic=new QLabel(this);
    back_pic->setGeometry(60,0,441,150);
    back_pic->setStyleSheet("background-color:rgb(81,52,139);");

    logo=new QLabel(this);
    logo->setGeometry(160,20,200,150);
    logo->setStyleSheet("border-image:url(:/new/prefix1/logo.png);");

    parent_layout=new QLabel(this);
    parent_layout->setGeometry(60,159,441,541);
    parent_layout->setText("");

    QVBoxLayout *vbox2= new QVBoxLayout();
    vbox2->addWidget(data_entry());
    parent_layout->setLayout(vbox2);

    Database mydb;

    if(mydb.connOpen()){
        status->setText("Connected Successfully");
    }

    else{
        status->setText("ERROR:Failed to connect with Database");
    }

    connect(button_1,SIGNAL(clicked()),this,SLOT(insert_clicked()));
    connect(button_2,SIGNAL(clicked()),this,SLOT(delete_clicked()));
}

QGroupBox *Class_info::data_entry()
{
    QGroupBox *groupbox=new QGroupBox(tr("ClassRoom Information"));
    //groupbox->setTitle("ClassRoom Infromation");
    groupbox->setStyleSheet("background-color:rgb(81,52,139);color:white;");

    QFont font=groupbox->font();
    font.setPointSize(10);

     check1= new QCheckBox(tr("9-10"));
    check2= new QCheckBox(tr("10-11"));
    check3= new QCheckBox(tr("11-12"));
    check4= new QCheckBox(tr("12-1"));
    check5= new QCheckBox(tr("1-2"));
    check6= new QCheckBox(tr("2-3"));
    check7= new QCheckBox(tr("3-4"));

    check1->setFont(font);
    check2->setFont(font);
    check3->setFont(font);
    check4->setFont(font);
    check5->setFont(font);
    check6->setFont(font);
    check7->setFont(font);

    check1->setStyleSheet("color:'white';");
    check2->setStyleSheet("color:'white';");
    check3->setStyleSheet("color:'white';");
    check4->setStyleSheet("color:'white';");
    check5->setStyleSheet("color:'white';");
    check6->setStyleSheet("color:'white';");
    check7->setStyleSheet("color:'white';");

    entryno=new QLabel(tr("Entry No."));
    line3=new QLineEdit();
    blockno= new QLabel(tr("Block No.:"));
    line1=new QLineEdit();
    classno =new QLabel(tr("Class No.:"));
    line2=new QLineEdit();
    day=new QLabel(tr("Day:"));


    details=new QLabel(tr("CHECK THE TIME WHENTHE CLASSES ARE OCCUPIED\n TO DELETE JUST ENTER THE ENTRY NO"));
    button_1= new QPushButton(tr("Inset the Data"));
    button_2= new QPushButton(tr("Delete the Data"));
    status= new QLabel(tr("(+)Status"));

    days_info= new QComboBox();
    days_info->addItem("----No Selection----");
    days_info->addItem("Sunday");
    days_info->addItem("Monday");
    days_info->addItem("Tueday");
    days_info->addItem("Wednesday");
    days_info->addItem("Thursday");
    days_info->addItem("Friday");
    days_info->addItem("Saturday");

    entryno->setFont(font);
    blockno->setFont(font);
    classno->setFont(font);
    day->setFont(font);
    details->setFont(font);
    status->setFont(font);

    entryno->setStyleSheet("color:'white';");
    blockno->setStyleSheet("color:'white';");
    classno->setStyleSheet("color:'white';");
    details->setStyleSheet("color:'white';");
    status->setStyleSheet("color:'white';");

    line1->setStyleSheet("background-color:white; color: black;");
    line2->setStyleSheet("background-color:white; color: black;");
    line3->setStyleSheet("background-color:white; color: black;");
    days_info->setStyleSheet("background-color:white; color: black;");

    line1->setFont(font);
    line2->setFont(font);
    line3->setFont(font);
    days_info->setFont(font);

    QFormLayout *entry= new QFormLayout();
    entry->addRow(entryno,line3);
    entry->addRow(blockno,line1);
    entry->addRow(classno,line2);
    entry->addRow(day,days_info);

    QHBoxLayout *button= new QHBoxLayout();
    button->addWidget(button_1);
    button->addWidget(button_2);

    QVBoxLayout *vbox=new QVBoxLayout();
    vbox->addLayout(entry);
    vbox->addWidget(details);
    vbox->addWidget(check1);
    vbox->addWidget(check2);
    vbox->addWidget(check3);
    vbox->addWidget(check4);
    vbox->addWidget(check5);
    vbox->addWidget(check6);
    vbox->addWidget(check7);
    vbox->addLayout(button);
    vbox->addWidget(status);

    groupbox->setFont(font);
    groupbox->setLayout(vbox);

    return groupbox;
}

void Class_info::insert_clicked()
{
    QString entry=line3->text();
    QString block=line1->text();
    QString classn=line2->text();
    QString days=days_info->currentText();
    QString time1;
    QString time2;
    QString time3;
    QString time4;
    QString time5;
    QString time6;
    QString time7;

    if(check1->isChecked()){
        time1="Occupied";
    }
    else {
        time1="";
    }
    if(check2->isChecked()){
        time2="Occupied";
    }
    else {
        time2="";
    }
    if(check3->isChecked()){
        time3="Occupied";
    }
    else {
        time3="";
    }
    if(check4->isChecked()){
        time4="Occupied";
    }
    else {
        time4="";
    }
    if(check5->isChecked()){
        time5="Occupied";
    }
    else {
        time5="";
    }
    if(check6->isChecked()){
        time6="Occupied";
    }
    else {
        time6="";
    }
    if(check7->isChecked()){
        time7="Occupied";
    }
    else {
        time7="";
    }

    Database mydb;
    if(mydb.connOpen()){
        qDebug()<<"Connected Successfully";
    }
    else {
        qDebug()<<"Failed to Connect to Database";
    }

    mydb.connOpen();
    QSqlQuery query;
    query.prepare("insert into classroom(EntryNo,blockno,classno,Day,Time9to10,Time10to11,Time11to12,Time12to1,Time1to2,Time2to3,Time3to4) values('"+entry+"','"+block+"','"+classn+"','"+days+"','"+time1+"','"+time2+"','"+time3+"','"+time4+"','"+time5+"','"+time6+"','"+time7+"')");

    if(query.exec()){
        QMessageBox::information(this,tr("Save"),tr("Saved"));
        mydb.connClose();
    }
    else {
         QMessageBox::critical(this,tr("Error"),query.lastError().text());
    }
    line3->setText("");
    line1->setText("");
    line2->setText("");
    days_info->setEditText("----No Selection----");
    check1->setChecked(false);
    check2->setChecked(false);
    check3->setChecked(false);
    check4->setChecked(false);
    check5->setChecked(false);
    check6->setChecked(false);
    check7->setChecked(false);
}

void Class_info::delete_clicked()
{
    QString entry=line3->text();


    Database mydb;
    if(mydb.connOpen()){
        qDebug()<<"Connected Successfully";
    }
    else {
        qDebug()<<"Failed to Connect to Database";
    }

    mydb.connOpen();
    QSqlQuery query;
    query.prepare("Delete from classroom where EntryNo='"+entry+"'");

    if(query.exec()){
        QMessageBox::information(this,tr("Delete"),tr("Deleted"));
        mydb.connClose();
    }
    else {
         QMessageBox::critical(this,tr("Error"),query.lastError().text());
    }
    line3->setText("");

}
