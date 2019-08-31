#ifndef GRID_LAYOUT_H
#define GRID_LAYOUT_H

#include <QGridLayout>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>


class grid_layout:public QGridLayout
{
public:
    grid_layout(QWidget *parent,int max_column_count);
    ~grid_layout();

    void add_Widget(QPushButton *pwidget,QString imagepath,QString username);
    void add_Widget(QWidget *pwidget);
private:
    int m_max_column_count;
};

#endif // GRID_LAYOUT_H
