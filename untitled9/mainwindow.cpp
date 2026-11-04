#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //菜单栏
    QMenuBar* menuBar = new QMenuBar();
    this->setMenuBar(menuBar);
    //菜单项
    QMenu* menu1 = new QMenu("文件");
    QMenu* menu2 = new QMenu("2");
    QMenu* menu3 = new QMenu("3");
    menuBar->addMenu(menu1);
    menuBar->addMenu(menu2);
    menuBar->addMenu(menu3);

    QAction* action1 = new QAction("1");
    QAction* action2 = new QAction("2");
    QAction* action3 = new QAction("3");
    QAction* action4 = new QAction("4");

    menu1->addAction(action1);

    connect((action1,&QAction::triggered,this,&MainWindow::handle));
}

MainWindow::~MainWindow()
{
    delete ui;
}

