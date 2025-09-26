#include "widget.h"
#include "ui_widget.h"
#include<QPushButton>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->zt=new Teacher(this);
    this->st=new Student(this);

    // connect(zt,&Teacher::hungry,st,&Student::treat);
    // ClassIsOver();
    void(Teacher:: *teacherSignal)(QString)=&Teacher::hungry;
    void(Student:: *studentSlot)(QString)=&Student::treat;
    connect(zt,teacherSignal,st,studentSlot);
    ClassIsOver();

    QPushButton *btn=new QPushButton("下课",this);
    resize(600,400);
    //connect(btn,&QPushButton::clicked,this,&Widget::ClassIsOver);

    void(Teacher:: *teacherSignal2)(void)=&Teacher::hungry;
    void(Student:: *studentSlot2)(void)=&Student::treat;
    connect(zt,teacherSignal2,st,studentSlot2);
    connect(btn,&QPushButton::clicked,zt,teacherSignal2);

    ClassIsOver();

    [=](){
        btn->setText("aaaaa");

    }();
}



void Widget::ClassIsOver()
{
    //emit zt->hungry();
    emit zt->hungry("宫保鸡丁");
}

Widget::~Widget()
{
    delete ui;
}
