#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->listWidget->addItem("c++");
    ui->listWidget->addItem("java");
    ui->listWidget->addItem("python");
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_add_clicked()
{
    const QString& text=ui->lineEdit->text();
    ui->listWidget->addItem(text);
}

void Widget::on_pushButton_sec_clicked()
{
    int row=ui->listWidget->currentRow();
    if(row<0){
        return;
    }
    ui->listWidget->takeItem(row);
}
