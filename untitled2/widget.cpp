#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->comboBox->addItem("111");
    ui->comboBox->addItem("222");
    ui->spinBox->setRange(1,5);

}

Widget::~Widget()
{
    delete ui;
}

