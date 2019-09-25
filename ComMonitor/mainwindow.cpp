#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>

#include "driver/myserial.h"


/*************************************************
*窗口构造函数
*
**************************************************/
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->comboBox_COM->addItems(get_port_Name_list());  //设置串口列表

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


/******************************************************
*点击打开串口动作
*
*******************************************************/
void MainWindow::on_pushButton_Open_COM_clicked()
{
    SERIAL stSerial;

    if(get_Serial_status())
    {
        close_Serial();
        ui->pushButton_Open_COM->setText("打开串口");
    }
    else
    {
        stSerial.SerialName = ui->comboBox_COM->currentText();
        stSerial.baud = ui->comboBox_Baud->currentText().toInt();
        stSerial.data = ui->comboBox_Data->currentText().toInt();
        stSerial.stop = ui->comboBox_Stop->currentText();
        stSerial.Parity = ui->comboBox_Parity->currentText();

        if(Open_Serial(&stSerial))
        {
            ui->pushButton_Open_COM->setText("关闭串口");
        }
        else
        {
            //打开失败

        }
    }
    return ;
}


