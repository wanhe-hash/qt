#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->tableWidget->insertRow(0);
    ui->tableWidget->insertRow(1);

    ui->tableWidget->insertColumn(0);
    ui->tableWidget->insertColumn(1);

    ui->tableWidget->setHorizontalHeaderItem(0,new QTableWidgetItem("学号"));
    ui->tableWidget->setHorizontalHeaderItem(0,new QTableWidgetItem("姓名"));

    ui->tableWidget->setItem(0,0,new QTableWidgetItem("张三"));


}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    int rowCount=ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(rowCount);

}
