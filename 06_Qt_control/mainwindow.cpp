#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QRadioButton>
#include<QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->radioButton->setChecked(true);
    connect(ui->radioButton_2,&QRadioButton::clicked,[=](){
        qDebug()<<"选中女的了";
});
}

MainWindow::~MainWindow()
{
    delete ui;
}
