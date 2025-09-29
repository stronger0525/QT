#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QRadioButton>
#include<QDebug>
#include<QListWidgetItem>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->radioButton->setChecked(true);
    connect(ui->radioButton_2,&QRadioButton::clicked,[=](){
        qDebug()<<"选中女的了";
});
    //利用ListWighet写诗
    // QListWidgetItem *item=new QListWidgetItem("锄禾日当午");
    // ui->listWidget->addItem(item);

    QStringList list;
    list<<"锄禾日当午"<<"汗滴禾下土"<<"谁之盘中餐"<<"粒粒皆辛苦";
    ui->listWidget->addItems(list);

}

MainWindow::~MainWindow()
{
    delete ui;
}
