#ifndef Q_PUSHBUTTON_H
#define Q_PUSHBUTTON_H

#include <QMainWindow>
#include <QWidget>
#include <QPushButton>
#include <QEvent>

class q_pushbutton : public QPushButton
{
public:
    q_pushbutton(QWidget *parent=nullptr );
    virtual void enterEvent(QEvent *ev)=0;
    virtual void leaveEvent(QEvent *ev)=0;
};



class Transaction :public q_pushbutton{
public:

    Transaction(QWidget *parent=nullptr):q_pushbutton(parent){}

    void enterEvent(QEvent *ev){
        QPixmap transenter(":/new/prefix1/Transcation1.png");
        QPalette p;
        p.setBrush(backgroundRole(),QBrush(transenter));
        setFlat(true);
        setAutoFillBackground(true);
        setPalette(p);
    }
    void leaveEvent(QEvent *ev){
        QPixmap transleave(":/new/prefix1/Transcation.png");
        QPalette p;
        p.setBrush(backgroundRole(),QBrush(transleave));
        setFlat(true);
        setAutoFillBackground(true);
        setPalette(p);

    }
private:

};



class E_learning :public q_pushbutton{
public:

    E_learning(QWidget *parent=nullptr):q_pushbutton(parent){}


    void enterEvent(QEvent *ev){
        QPixmap elearnenter(":/new/prefix1/E learning 1.png");
        QPalette p;
        p.setBrush(backgroundRole(),QBrush(elearnenter));
        setFlat(true);
        setAutoFillBackground(true);
        setPalette(p);
    }
    void leaveEvent(QEvent *ev){
        QPixmap elearnleave(":/new/prefix1/E learning.png");
        QPalette p;
        p.setBrush(backgroundRole(),QBrush(elearnleave));
        setFlat(true);
        setAutoFillBackground(true);
        setPalette(p);
    }
private:

};




class map :public q_pushbutton{
public:

    map(QWidget *parent=nullptr):q_pushbutton(parent){}


    void enterEvent(QEvent *ev){
        QPixmap mapenter(":/new/prefix1/mapping 1.png");
        QPalette p;
        p.setBrush(backgroundRole(),QBrush(mapenter));
        setFlat(true);
        setAutoFillBackground(true);
        setPalette(p);
    }
    void leaveEvent(QEvent *ev){
        QPixmap mapleave(":/new/prefix1/mapping.png");
        QPalette p;
        p.setBrush(backgroundRole(),QBrush(mapleave));
        setFlat(true);
        setAutoFillBackground(true);
        setPalette(p);
    }
private:

};

#endif // Q_PUSHBUTTON_H
