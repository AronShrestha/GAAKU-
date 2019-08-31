#ifndef ELEARNING1_H
#define ELEARNING1_H

#include <QMainWindow>
#include <QWidget>
#include <QPushButton>
#include <QLabel>

#include <readebooks.h>
#include <readenotes.h>
#include <readpastque.h>
#include <readpracque.h>

class elearning1 : public QWidget
{
    Q_OBJECT
public:
    explicit elearning1(QWidget *parent = nullptr);

signals:

public slots:
    void ebooks_clicked();
    void enotes_clicked();
    void pracques_clicked();
    void pastque_clicked();
    void goback_clicked();

private:
    QPushButton *ebooks;
    QPushButton *enotes;
    QPushButton *pracques;
    QPushButton *pastque;
    QPushButton *goback;

    QLabel *ebooksl;
    QLabel *enotesl;
    QLabel *pracquesl;
    QLabel *pastquel;
    QLabel *head;
    QLabel *line;
    QLabel *logo;
    QLabel *slogo;
    QLabel *back;

    readebooks *r;
    readenotes *n;
    readpastque *s;
    readpracque *c;
};

#endif // ELEARNING1_H
