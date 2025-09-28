#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   // ui->actionnew->setIcon(QIcon("C:\\Users\\stonger\\Pictures\\Saved Pictures\\图片1.jpg"));
    ui->actionnew->setIcon(QIcon(":/n/Saved Pictures/image1.jpg"));
}

MainWindow::~MainWindow()
{
    delete ui;
}
