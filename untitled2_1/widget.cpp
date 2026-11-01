#include "widget.h"
#include "ui_widget.h"
#include<QDebug>
#include<fstream>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    std::ifstream file("xxxx");
    if(file.is_open()){
        qDebug() << "111";
        return;
    }
    std::string line;
    while(std::getline(file,line)){
        ui->comboBox->addItem(QString::fromStdString(line));
    }
    file.close();
}

Widget::~Widget()
{
    delete ui;
}

