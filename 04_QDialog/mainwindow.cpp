#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QAction>
#include<QDialog>
#include<qDebug>
#include<QMessageBox>
#include<QColorDialog>
#include<QFileDialog>
#include<QFontDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionnew,&QAction::triggered,[=](){
        // QDialog dlg(this);
        // dlg.exec();
        // qDebug()<<"模态对话框输出了";

        // QDialog *dig2=new QDialog(this);
        // dig2->show();
        // dig2->setAttribute(Qt::WA_DeleteOnClose);

        //消息对话框
       // QMessageBox::critical(this,"critical","错误");
       // QMessageBox::information(this,"info","信息");
        // if(QMessageBox::Yes==QMessageBox::question(this,"ques","错误",QMessageBox::Yes|QMessageBox::No,QMessageBox::No))
        // {
        //     qDebug()<<"选择的是正确的";
        // }
        // else{
        //     qDebug()<<"选择的是错误的";
        // }
        // QColor color=QColorDialog::getColor(QColor(255,0,0));
        // qDebug()<<color.red()<<color.green()<<color.blue();
        //QFileDialog::getOpenFileName(this,"打开的文件","C:\\Users\\stonger\\Desktop");
        bool flag;
        QFont font=QFontDialog::getFont(&flag,QFont("华文彩云",36));
        qDebug()<<"字体:"<<font.family().toUtf8().data()<<"字体大小:"<<font.pointSize();

    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
