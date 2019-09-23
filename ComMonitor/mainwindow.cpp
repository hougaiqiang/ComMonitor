#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*****************************
*File->Open点击动作
*
*
*****************************/
void MainWindow::on_actionOpen_triggered()
{
   QString curPath=QDir::currentPath();//获取系统当前目录
   QString dlgTitle="打开日志"; //对话框标题
   QString filter="日志文件(*.log);;文本文件(*.txt);;所有文件(*.*)"; //文件过滤器
   QString aFileName=QFileDialog::getOpenFileName(this,dlgTitle,curPath,filter);
   if (aFileName.isEmpty())
       return;
   QFile aFile(aFileName);
       if (!aFile.exists()) //文件不存在
           return ;
       if (!aFile.open(QIODevice::ReadWrite | QIODevice::Text))
           return ;
       ui->textBrowser->setPlainText(aFile.readAll());  //textEditDevice->setPlainText(aFile.readAll());
}
