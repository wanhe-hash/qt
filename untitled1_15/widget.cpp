#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_textEdit_textChanged()
{
//    const QString& text = ui->textEdit->toPlainText();
//    ui->label->setText(text);

    qDebug() << "text changed" << ui->textEdit->toPlainText();
}

void Widget::on_textEdit_selectionChanged()
{
    QTextCursor cursor = ui->textEdit->textCursor();
    qDebug() << "selectionChanged" << cursor.selectedText();
}

void Widget::on_textEdit_cursorPositionChanged()
{
    QTextCursor cursor=ui->textEdit->textCursor();
    qDebug() << "cursorPositionChanged" <<cursor.position();
}
