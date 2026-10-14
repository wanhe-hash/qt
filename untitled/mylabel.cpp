#include "mylabel.h"
#include<iostream>
#include<QDebug>

MYLabel::MYLabel(QWidget* parent):QLabel(parent)
{

}


MYLabel::~MYLabel()
{
   // std::cout <<"label 销毁" << std::endl;
   qDebug() << "label 销毁" ;
}
