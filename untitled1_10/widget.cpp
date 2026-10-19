#include "widget.h"
#include "ui_widget.h"
#include<QIcon>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //QIcon icon("C:/Users/LEGION/.minimax/agents/mavis/workspace/qt-blog-01/cover.png"); //图标
    QIcon icon(":/cover.png");
    this->setWindowIcon(icon);
}

Widget::~Widget()
{
    delete ui;
}

