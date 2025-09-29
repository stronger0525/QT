#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QStringList>
#include<QTreeWidget>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->treeWidget->setHeaderLabels(QStringList()<<"英雄"<<"英雄属性");
    QTreeWidgetItem *liItem=new QTreeWidgetItem(QStringList()<<"力量");
    QTreeWidgetItem *minItem=new QTreeWidgetItem(QStringList()<<"敏捷");
    QTreeWidgetItem *zhiItem=new QTreeWidgetItem(QStringList()<<"智力");
    ui->treeWidget->addTopLevelItem(liItem);
    ui->treeWidget->addTopLevelItem(minItem);
    ui->treeWidget->addTopLevelItem(zhiItem);

    QTreeWidgetItem * l1=new QTreeWidgetItem(QStringList()<<"刚备注"<<"激动死阿娇的是哦阿娇的") ;
    liItem->addChild(l1);
    QTreeWidgetItem * l2=new QTreeWidgetItem(QStringList()<<"刚备注"<<"激动死阿娇的是哦阿娇的") ;
    liItem->addChild(l2);
    QTreeWidgetItem * l3=new QTreeWidgetItem(QStringList()<<"刚备注"<<"激动死阿娇的是哦阿娇的") ;
    zhiItem->addChild(l3);
}

MainWindow::~MainWindow()
{
    delete ui;
}
