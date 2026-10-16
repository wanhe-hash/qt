#include "widget.h"
#include "ui_widget.h"
#include<QPushButton>
#include<QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::handle()
{
    qDebug()<< "handle";
}

void Widget::on_pushButton_clicked()
{
    qDebug()<<"执行槽函数";
}

void Widget::on_pushButton_2_clicked()
{
    bool enable = ui->pushButton->isEnabled(); // 改成 isEnabled
    if (enable) {
        ui->pushButton->setEnabled(false);
    } else {
        ui->pushButton->setEnabled(true);
    }
}
