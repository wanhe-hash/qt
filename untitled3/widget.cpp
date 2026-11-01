#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->horizontalSlider->setMaximum(100);
    ui->horizontalSlider->setMaximum(2000);
    ui->horizontalSlider->setValue(800);
    ui->horizontalSlider->setSingleStep(500);

    ui->verticalSlider->setMinimum(100);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_horizontalSlider_valueChanged(int value)
{
    const QRect& rect=this->geometry();
    this->setGeometry(rect.x(),rect.y(),value,rect.height());

}
