#ifndef READEBOOKS_H
#define READEBOOKS_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QPlainTextEdit>
#include <QDesktopServices>

class readebooks : public QWidget
{
    Q_OBJECT
public:
    explicit readebooks(QWidget *parent = nullptr);

signals:

public slots:
    void backclick_clicked();
    void read1_clicked();

private:
    QLabel *label_head1;
    QLabel *label_down2;
    QLabel *heading1;

    QPushButton *backclick1;
    QPushButton *read1;

    QPlainTextEdit *visual;

};

#endif // READEBOOKS_H
