#include "widget.h"
#include "ui_widget.h"
#include<QTimer>
#include<QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->lcdNumber->display("10");

    QTimer* timer=new QTimer(this);
    connect(timer,&QTimer::timeout,this,&Widget::handle);
    timer->start(1000);

}

Widget::~Widget()
{
    delete ui;
}


void Widget::handle()
{
    int value=ui->lcdNumber->intValue();
    if(value<=0){
        timer->stop();
        return;
    }
    else
    {
     ui->lcdNumber->display(value-1);
    }
}
