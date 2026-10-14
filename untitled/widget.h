#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>           // 1. 基类，必须有
#include <QStringLiteral>   // Qt 5.10+，Qt 6 里直接进 <QString> 了
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }   // 前向声明 ui
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT
public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

//private slots:                      // 2. handleClick 是槽函数，必须声明
//    void handleClick();

private:
    Ui::Widget *ui;                 // 3. ui 指针成员
};

#endif // WIDGET_H
