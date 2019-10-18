#include "mainwindow.h"
#include "ui_mainwindow.h"


/*************************************************
*窗口构造函数
*
**************************************************/
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    serialport = new MySerialPort();
    ui->comboBox_COM->addItems(serialport->get_port_Name_list());  //设置串口列表
}


/*************************************************
*窗口析构函数
*
**************************************************/
MainWindow::~MainWindow()
{

    serialport->close_Serial();
    delete serialport;

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
    MySerialPort::SERIAL stSerial;

    if(serialport->get_Serial_status())
    {
        serialport->close_Serial();
        ui->pushButton_Open_COM->setText("打开串口");
    }
    else
    {
        stSerial.SerialName = ui->comboBox_COM->currentText();
        stSerial.baud = ui->comboBox_Baud->currentText().toInt();
        stSerial.data = ui->comboBox_Data->currentText().toInt();
        stSerial.stop = ui->comboBox_Stop->currentText();
        stSerial.Parity = ui->comboBox_Parity->currentText();

        if(serialport->Open_Serial(&stSerial))
        {
            ui->pushButton_Open_COM->setText("关闭串口");
            connect(serialport,SIGNAL(readyRead()),this,SLOT(serialreceiveInfo()));  //数据接收完成信号连接槽
        }
        else
        {
            //打开失败
            ui->comboBox_COM->clear();
            ui->comboBox_COM->addItems(serialport->get_port_Name_list());  //设置更新串口列表
        }
    }
    return ;
}


/********************************************************************
**10进制输入框编辑动作
** 参数arg1,为当前的文本
*********************************************************************/
void MainWindow::on_lineEdit_Int_textEdited(const QString &arg1)
{
    QString str;
    QString strb;
    bool OK;
    long long data = arg1.toLongLong(&OK,10);
    if(false == OK)
    {
        //输入不正确
        return ;
    }
    U64_to_ASIICHEX(data,&str);
    ui->lineEdit_Hex->setText(str);
    u64_to_ASIICBit(data,&strb);
    ui->lineEdit_Bit->setText(strb);
}

/********************************************************************
**16进制输入框编辑动作
** 参数arg1,为当前的文本
*********************************************************************/
void MainWindow::on_lineEdit_Hex_textEdited(const QString &arg1)
{
    bool OK;
    QString toInt;
    QString toBit;
    char toInt_temp[] = "-9223372036854775808‬";
    unsigned long long data = arg1.toULongLong(&OK,16);
    if(OK)
    {
        sprintf(toInt_temp,"%lld",data);

    }
    else if(ASIICHEX_to_int(arg1,&data))
    {
        sprintf(toInt_temp,"%lld",data);
    }
    else
    {
        sprintf(toInt_temp, "0");
    }

    toInt.append(toInt_temp);
    ui->lineEdit_Int->setText(toInt);
    u64_to_ASIICBit(data,&toBit);
    ui->lineEdit_Bit->setText(toBit);
}

/********************************************************************
**二进制输入框编辑动作
** 参数arg1,为当前的文本
*********************************************************************/
void MainWindow::on_lineEdit_Bit_textEdited(const QString &arg1)
{
    bool OK;
    QString toInt;
    QString toHex;
    char toInt_temp[] = "-9223372036854775808‬";
    unsigned long long data = arg1.toULongLong(&OK,2);
    if(OK)
    {
        sprintf(toInt_temp,"%lld",data);
    }
    else
    {
        ASIICBit_to_int64(arg1, &data);
        sprintf(toInt_temp,"%lld",data);
    }
    toInt.append(toInt_temp);
    ui->lineEdit_Int->setText(toInt);
    U64_to_ASIICHEX(data,&toHex);
    ui->lineEdit_Hex->setText(toHex);
}

/********************************************************************
**CRC校验输入框编辑动作
** 参数arg1,为当前的文本
*********************************************************************/
void MainWindow::on_lineEdit_CRC_in_textEdited(const QString &arg1)
{
    uchar CRCBuff[260]={0};
    bool OK;
    ushort CRCResult;
    QString ShowCRCResult;
    QStringList HexList = arg1.split(' ', QString::SkipEmptyParts);

    for(int i = 0; i < HexList.count(); i++)
    {
        CRCBuff[i] = (uchar)HexList[i].toUShort(&OK,16);
        if(false == OK)
        {
            return ;
        }
    }
    CRCResult = Alg_ModBusCRC16(CRCBuff,HexList.count());
    U64_to_ASIICHEX((quint64)CRCResult,&ShowCRCResult);
    ui->lineEdit_CRC_out->setText(ShowCRCResult);
}


/********************************************************************
**Hex转文本输入框编辑动作
** 参数arg1,为当前的文本 0x41 -> A
*********************************************************************/
void MainWindow::on_lineEdit_Hex_to_Asiic_textEdited(const QString &arg1)
{
    QString toASIIC;
    bool OK;
    QStringList HexList = arg1.split(' ', QString::SkipEmptyParts);
    for(int i = 0; i < HexList.count(); i++)
    {
        toASIIC.append((char)HexList[i].toUShort(&OK,16));
        if(false == OK)
        {
            return ;
        }
    }
    ui->lineEdit_Asiic_to_Hex->setText(toASIIC);
}

/********************************************************************
**文本转Hex输入框编辑动作
** 参数arg1,为当前的文本 A -> 0x41
*********************************************************************/
void MainWindow::on_lineEdit_Asiic_to_Hex_textEdited(const QString &arg1)
{
    long long CharTemp;
    QString toHex;
    QString toHex_temp;
    std::string para = arg1.toStdString();
    for(uint i = 0; i < para.size(); i++)
    {
        CharTemp = (long long)para[i];
        U64_to_ASIICHEX(CharTemp, &toHex_temp);
        toHex = toHex + toHex_temp;
    }
    ui->lineEdit_Hex_to_Asiic->setText(toHex);
}



/****************************************************************
*接收数据
*串口接收数据完毕自动调用此函数
*****************************************************************/
void MainWindow::serialreceiveInfo()
{

    QByteArray Rcv_Data;
    Rcv_Data = serialport->readAll();
    //处理串口数据


}


/******************************************************
*点击发送按钮动作
*
*******************************************************/
void MainWindow::on_pushButton_Send_clicked()
{
    QString SendString;
    SendString = ui->plainTextEdit_Send->toPlainText();
    //ui->plainTextEdit_Rcv->setPlainText(SendString);
    /*
     * 检查格式是否有错误
     * 无错误写入文件
     * 检查模式，
     * 转换为字节码
     * 发送
     */

}

/******************************************************
*点击升级浏览文件按钮
*获取文件路径和文件名填入
*******************************************************/
void MainWindow::on_pushButton_Find_bin_clicked()
{
    QString curPath=QDir::currentPath();//获取系统当前目录
    QString dlgTitle="打开升级包"; //对话框标题
    QString filter="字节文件(*.bin)"; //文件过滤器
    QString aFileName=QFileDialog::getOpenFileName(this,dlgTitle,curPath,filter);
    if (aFileName.isEmpty())
    {
        return;
    }
    else
    {
        ui->lineEdit_File_bin->setText(aFileName);
    }
}

/******************************************************
*点击开始升级按钮
*获取文件路径和文件名打开文件
* 分包处理
* 发送
* 显示进度
*******************************************************/
void MainWindow::on_pushButton_Start_Download_clicked()
{
    if(!serialport->get_Serial_status())
    {
        //请先连接串口
        return;

    }
}

/******************************************************
*点击获取程序地址
*获取当前程序运行地址区
*******************************************************/
void MainWindow::on_pushButton_Get_Program_clicked()
{
    //disconnect(serialport,SIGNAL(readyRead()),this,SLOT(serialreceiveInfo()));  //数据接收完成信号连接槽
    //通过串口发送指令获取程序运行地址
    /*
    serialport->Send_by_Serial();
    if(!serialport->waitForReadyRead(5000))
    {
        //升级失败
    }
    serialport->readAll();
    */
}
