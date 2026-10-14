#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPushButton* myButton = new QPushButton(this);
    myButton->setText("hello world");
    connect(myButton,&QPushButton::clicked,this,&Widget::handleClick);
}

Widget::~Widget()
{
    delete ui;
}

