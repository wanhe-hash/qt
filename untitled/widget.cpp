#include "widget.h"
#include "ui_widget.h"
#include<QLabel>
#include "mylabel.h"
#include<QLineEdit>
#include<QPushButton>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

//    QLabel* label=new QLabel(this);
//    label->setText("hello world");

//    MYLabel* label=new MYLabel(this);
//    label->setText("hello world");

//    QLineEdit* edit=new QLineEdit(this);
//    edit->setText("hello world");
//    connect(ui->pushButton,&QPushButton::clicked,this,&Widget::handleClick);
      QPushButton* button=new QPushButton(this);
      button->setText("hello world");
      button->move(200,300);
}

Widget::~Widget()
{
    delete ui;
}

//void Widget::handleClick()
//{
//    if(ui->pushButton->text()==QString("hello world"))
//    {
//        ui->pushButton->setText("hello qt");
//    }
//    else
//    {
//        ui->pushButton->setText("hello world");
//    }
//}
