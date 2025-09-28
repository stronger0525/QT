#include "mainwindow.h"
#include<QMenuBar>
#include<QToolBar>
#include<QPushButton>
#include<QStatusBar>
#include<QLabel>
#include<QDockWidget>
#include<QtextEdit>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize (600,700);
    //菜单栏的创建
    QMenuBar * bar=menuBar();
    //菜单栏放入窗口
    setMenuBar(bar);
    //创建菜单
    QMenu *fileMenu=bar->addMenu("文件");
    QMenu *editMenu=bar->addMenu("编辑");
    //创建菜单选项
   QAction *newAction= fileMenu->addAction("新建");
    //添加分割线
    fileMenu->addSeparator();
   QAction * openAction=fileMenu->addAction("打开");



   //工具栏
   QToolBar *toolBar=new QToolBar(this);
   addToolBar(Qt::LeftToolBarArea,toolBar);
   toolBar->setAllowedAreas(Qt::LeftToolBarArea | Qt::RightToolBarArea);
   toolBar->setFloatable(false);
   toolBar->addAction(newAction);
   toolBar->addSeparator();
   toolBar->addAction(openAction);
   QPushButton *btn= new QPushButton("aaa",this);
   toolBar->addWidget(btn);
   //状态栏 最多一个
   QStatusBar *stBar=statusBar();
   setStatusBar(stBar);
   //放标签控件
   QLabel *label=new QLabel("提示信息",this);
   stBar->addWidget(label);
   QLabel *label2=new QLabel("右侧提示信息",this);
   stBar->addPermanentWidget(label2);
   //铆接部件
   QDockWidget *dockWidget=new QDockWidget("浮动",this);
   addDockWidget(Qt::BottomDockWidgetArea,dockWidget);

   dockWidget->setAllowedAreas(Qt::BottomDockWidgetArea|Qt::TopDockWidgetArea);

   //设置中心部件
   QTextEdit *edit=new QTextEdit();
   setCentralWidget(edit);

}

MainWindow::~MainWindow() {}
