#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QStringList>
#include<QTableWidgetItem>
#include<QString>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//设置行数
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"姓名"<<"性别"<<"年龄");

    //设置行数
    ui->tableWidget->setRowCount(5);
    QStringList Listname;
    Listname<<"亚瑟"<<"赵云"<<"宋江"<<"孙悟空"<<"猪八戒";
    QStringList sexList;
    sexList<<"男"<<"女"<<"男"<<"男"<<"女";
    for(int i=0;i<5;i++)
    {
        int col=0;
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(Listname.at(i)));
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(sexList.at(i)));
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(QString::number(i+18)));
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}
