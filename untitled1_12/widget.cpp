#include "widget.h"
#include "ui_widget.h"
#include<QDebug>
#include<QResizeEvent>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
//    ui->label->setTextFormat(Qt::PlainText);
//    ui->label->setText("这是纯文本");
//    ui->label_2->setTextFormat(Qt::RichText);
//    ui->label_2->setText("<b>这是富文本</b>");

//    ui->label_3->setTextFormat(Qt::MarkdownText);
//    ui->label_3->setText("这是makdown文本");
      QRect windowRect=this->geometry();
      ui->label->setGeometry(0,0,windowRect.width(),windowRect.height());

      QPixmap pixmap(":");
      ui->label->setPixmap(pixmap);
      ui->label->setScaledContents(true);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::resizeEvent(QResizeEvent *event)
{
    qDebug()<<event->size();
    ui->label->setGeometry(0,0,event->size().width(),event->size().height());
}

