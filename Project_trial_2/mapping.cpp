#include "mapping.h"
#include "secwindow.h"

Mapping::Mapping(QWidget *parent) : QWidget(parent)
{
    setFixedSize(1186,790);

    pic= new QLabel(this);
    pic->setGeometry(0,0,791,790);
    pic->setStyleSheet("border-image:url(:/new/prefix1/KU-Map 1.png);");

    label_details=new QLabel(this);
    label_details->setGeometry(791,0,396,790);
    label_details->setStyleSheet("background-color:rgb(31,52,176);");

    label_1=new QLabel(this);
    label_2=new QLabel(this);
    label_3=new QLabel(this);
    label_4=new QLabel(this);
    label_5=new QLabel(this);
    label_6=new QLabel(this);
    label_7=new QLabel(this);
    label_8=new QLabel(this);
    label_9=new QLabel(this);
    label_10=new QLabel(this);
    label_11=new QLabel(this);
    label_12=new QLabel(this);
    label_13=new QLabel(this);
    label_14=new QLabel(this);
    label_15=new QLabel(this);
    label_16=new QLabel(this);
    label_17=new QLabel(this);
    label_18=new QLabel(this);
    label_19=new QLabel(this);
    label_20=new QLabel(this);
    label_21=new QLabel(this);
    label_22=new QLabel(this);
    label_23=new QLabel(this);
    label_24=new QLabel(this);

    label_1->setGeometry(791,0,396,33);
    label_2->setGeometry(791,33,396,36);
    label_3->setGeometry(791,66,396,36);
    label_4->setGeometry(791,99,396,36);
    label_5->setGeometry(791,132,396,36);
    label_6->setGeometry(791,165,396,36);
    label_7->setGeometry(791,198,396,36);
    label_8->setGeometry(791,231,396,36);
    label_9->setGeometry(791,264,396,36);
    label_10->setGeometry(791,297,396,36);
    label_11->setGeometry(791,330,396,36);
    label_12->setGeometry(791,363,396,36);
    label_13->setGeometry(791,396,396,36);
    label_14->setGeometry(791,429,396,36);
    label_15->setGeometry(791,462,396,36);
    label_16->setGeometry(791,495,396,36);
    label_17->setGeometry(791,528,396,36);
    label_18->setGeometry(791,561,396,36);
    label_19->setGeometry(791,594,396,36);
    label_20->setGeometry(791,627,396,36);
    label_21->setGeometry(791,660,396,36);
    label_22->setGeometry(791,693,396,36);
    label_23->setGeometry(791,726,396,36);
    label_24->setGeometry(791,759,396,36);

    label_1->setStyleSheet("color:yellow;");
    label_2->setStyleSheet("color:white;");

    label_1->setText("KATHMANDU UNIVERSITY");
    label_2->setText("LOCATION INFORMATION");
    label_3->setText("<font color='yellow'><b>2- </b> </font><font color='white'>Vice-Chaceller Office,Registrar Office, Central Admin Accounts,<br>Reception, Office of Global Reception, KU-Corner</font> ");
    label_4->setText("<font color='yellow'><b>3- Library</b> </font><font color='white'>,</font><font color='yellow'><b>ID Card Section</b></font><font color='white'>, Information Service Management,<br>Computer Learning Lab,E_U-O Learning</font>");
    label_5->setText("<font color='yellow'><b>4-</b></font> <font color='white'>CV Raman Auditorium, Central Cafeteria</font>");
    label_6->setText("<font color='yellow'><b>6-</b></font> <font color='white'>School of Science: Dean Office</font>,<font color='yellow'><b>Department of Natural Science<br>Environmental Science and Engineering</b></font>");
    label_7->setText("<font color='yellow'><b>7- Depatment of Biotechnology</b></font>");
    label_8->setText("<font color='yellow'><b>8-</b></font> <font color='white'>School of Engineering: School Admin,</font><font color='yellow'><b>Deparment of  Electrical <br>Engineering,Mechanical Engineering, Chemical Enigineering</b></font>");
    label_9->setText("<font color='yellow'><b>9-</b></font> <font color='white'>School of Engineering: Dean Office,</font><font color='yellow'><b>Department of Computer <br> Science and Engineering, Geomatics Engineering</b></font>");
    label_10->setText("<font color='yellow'><b>10-</b></font> <font color='white'>Teaching block</font>");
    label_11->setText("<font color='yellow'><b>11- Department of Civil Engineering, Architecture Program Office,<br> Humanitties and Management Unit(BBIS)</b></font>");
    label_12->setText("<font color='yellow'><b>12- Department of Pharmacy</b></font>");
    label_13->setText("<font color='yellow'><b>14-</b></font>  <font color='white'>Office of Controller of Examination,</font> <font color='yellow'><b>Bank</b></font><font color='white'>, Office of Research,<br> Office of Funding Project</font>");
    label_14->setText("<font color='yellow'><b>15-</b></font> <font color='white'>Staff Quarter</font>");
    label_15->setText("<font color='yellow'><b>17-</b></font> <font color='white'>Girls Hostel</font>");
    label_16->setText("<font color='yellow'><b>18-</b></font> <font color='white'>Boys Hostel</font>");
    label_17->setText("<font color='yellow'><b>21-</b></font> <font color='white'>Multipurpose Hall (Under Construction)</font>");
    label_18->setText("<font color='yellow'><b>23-</b></font> <font color='white'>Technical Training Center(TTC),Workshop</font>");
    label_19->setText("<font color='yellow'><b>26-</b></font> <font color='white'>TTC Hostel</font>");
    label_20->setText("<font color='yellow'><b>31-</b></font> <font color='white'>Girls hostel, Graduate Student Hostel</font>");
    label_21->setText("<font color='yellow'><b>32-</b></font> <font color='white'>Staff Quarter</font>");
    label_22->setText("<font color='yellow'><b>34-</b></font> <font color='white'>Aquatic Ecology Center(AEC),School of Science Faculty \n \t Room</font>");
    label_23->setText("<font color='yellow'><b>TTL-</b></font><font color='white'> Turbince Testing Lab</font>");
    label_24->setText("<font color='yellow'><b>FF-</b></font> <font color='white'>KU Fast Food Cafe</font>");

    QFont font1=label_1->font();
    font1.setPointSize(14);
    label_1->setFont(font1);
    label_1->setAlignment(Qt::AlignCenter);

    QFont font2=label_2->font();
    font2.setPointSize(12);
    font2.setUnderline(true);
    label_2->setFont(font2);
    label_2->setAlignment(Qt::AlignCenter);


    label_3->setAlignment(Qt::AlignJustify);
    label_4->setAlignment(Qt::AlignJustify);
    label_5->setAlignment(Qt::AlignJustify);
    label_6->setAlignment(Qt::AlignJustify);
    label_7->setAlignment(Qt::AlignJustify);
    label_8->setAlignment(Qt::AlignJustify);
    label_9->setAlignment(Qt::AlignJustify);
    label_10->setAlignment(Qt::AlignJustify);
    label_11->setAlignment(Qt::AlignJustify);
    label_12->setAlignment(Qt::AlignJustify);
    label_13->setAlignment(Qt::AlignJustify);
    label_14->setAlignment(Qt::AlignJustify);
    label_15->setAlignment(Qt::AlignJustify);
    label_16->setAlignment(Qt::AlignJustify);
    label_17->setAlignment(Qt::AlignJustify);
    label_18->setAlignment(Qt::AlignJustify);
    label_19->setAlignment(Qt::AlignJustify);
    label_20->setAlignment(Qt::AlignJustify);
    label_21->setAlignment(Qt::AlignJustify);
    label_22->setAlignment(Qt::AlignJustify);
    label_23->setAlignment(Qt::AlignJustify);
    label_24->setAlignment(Qt::AlignJustify);

    edit=new QPushButton(this);
    find_classrooms=new QPushButton(this);

    edit->setGeometry(500,750,110,40);
    edit->setText("Edit(Admin Only)");
    find_classrooms->setGeometry(620,750,110,40);
    find_classrooms->setText("Find Classrooms");


    QPushButton *backbutton=new QPushButton(this);
    backbutton->setGeometry(20,715,80,70);
    backbutton->setStyleSheet("border-image:url(:/new/prefix1/backbutton1.png);");

    connect(edit,SIGNAL(clicked()),this,SLOT(edit_clicked()));
    connect(find_classrooms,SIGNAL(clicked()),this,SLOT(find_classroom_clicked()));
    connect(backbutton,SIGNAL(clicked()),this,SLOT(backbuttton_clicked()));
}

void Mapping::edit_clicked()
{
    Admin_window w;
    w.setModal(true);
    w.exec();
}

void Mapping::find_classroom_clicked()
{
    class_view c;
    c.setModal(true);
    c.exec();
}

void Mapping::backbuttton_clicked()
{
    SecWindow *s= new SecWindow(this);
    s->show();
}
