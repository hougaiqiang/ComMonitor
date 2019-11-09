#include "upgrade.h"

upgrade::upgrade(QObject *parent) : QObject(parent)
{

}

void upgrade::set_upgrade_file(QString strFileName)
{
    FileName = strFileName;


}

/****************************************************************
** 初始化串口发送函数
** 参数：
** SerialPort ：串口实例
**
*****************************************************************/
void upgrade::set_serialport(MySerialPort SerialPort)
{
    senddata = SerialPort.Send_by_Serial;
    connect(SerialPort,SIGNAL(readyRead()),this,SLOT(receivedata()));  //数据接收完成信号连接槽

}

/****************************************************************
** 串口数据接收函数
** 参数：无
**
*****************************************************************/
void upgrade::receivedata()
{
    QByteArray Rcv_Data;

    Rcv_Data = serialport->readAll();

    Alg_ModBusCRC16(Rcv_Data, sizeof(Rcv_Data)-2);


}
