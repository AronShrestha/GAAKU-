#include "grid_layout.h"
#include "QDebug"

grid_layout::grid_layout(QWidget *parent, int max_column_count):QGridLayout (parent)
{
    m_max_column_count=max_column_count;
}

grid_layout::~grid_layout()
{

}

void grid_layout::add_Widget(QPushButton *pwidget, QString imagepath,QString username)
{
    QString img_path=imagepath;
    int current_row=0;
    int current_column=0;

    while(itemAtPosition(current_row,current_column)!=nullptr){
        if(current_column==(m_max_column_count-1)){
            current_column=0;
            ++current_row;
        }
        else {
            ++current_column;
        }
    }

    QFont font;
    font.setPointSize(11);
    font.setBold(true);
    QLabel *label=new QLabel();
    label->setText("<font color='black'>Uploaded by: "+username+"</font>");
    label->setFont(font);

    qDebug()<<img_path;

    pwidget->setFixedSize(300,300);
    QPixmap pix(imagepath);
    /*QPalette p;
    p.setBrush(pwidget->backgroundRole(),QBrush(pix));
    pwidget->setFlat(true);
    pwidget->setAutoFillBackground(true);
    pwidget->setPalette(p);*/

    QIcon i(pix);
    pwidget->setIcon(i);
    pwidget->setIconSize(pix.rect().size());

    QVBoxLayout *vbox=new QVBoxLayout();
    vbox->addWidget(label);
    vbox->addWidget(pwidget);

    QGridLayout::addLayout(vbox,current_row,current_column);

}

void grid_layout::add_Widget(QWidget *pwidget)
{


}
