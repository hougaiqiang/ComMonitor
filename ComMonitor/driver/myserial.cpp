/*****************************************************************
*串口配置与打开
*
*
******************************************************************/



#include "myserial.h"
#include "mainwindow.h"

QSerialPort *serialport = new QSerialPort;


/****************************************************************
*获取当前串口打开状态
*
*****************************************************************/
bool get_Serial_status()
{
    return serialport->isOpen();
}



/****************************************************************
*打开串口
*参数：
*SerialName : 串口名，字符串
*****************************************************************/
bool Open_Serial(SERIAL *stSerial)
{

    serialport->setPortName(stSerial->SerialName);
    serialport->setBaudRate(stSerial->baud);

    if("EVEN" == stSerial->Parity)
    {
        serialport->setParity(QSerialPort::EvenParity);
    }
    else if("ODD" == stSerial->Parity)
    {
        serialport->setParity(QSerialPort::OddParity);
    }
    else
    {
        serialport->setParity(QSerialPort::NoParity);
    }

    //设置数据位
    if(5 == stSerial->data)
    {
         serialport->setDataBits(QSerialPort::Data5);
    }
    else if(6 == stSerial->data)
    {
        serialport->setDataBits(QSerialPort::Data6);
    }
    else if(7 == stSerial->data)
    {
        serialport->setDataBits(QSerialPort::Data7);
    }
    else
    {
        serialport->setDataBits(QSerialPort::Data8);
    }

    //设置停止位
    if("2" == stSerial->stop)
    {
        serialport->setStopBits(QSerialPort::TwoStop);
    }
    else if("1.5" == stSerial->stop)
    {
        serialport->setStopBits(QSerialPort::OneAndHalfStop);
    }
    else
    {
        serialport->setStopBits(QSerialPort::OneStop);
    }


    if(serialport->open(QIODevice::ReadWrite))
    {
        //打开成功
        return true;
    }
    else
    {
        return false;
    }
}

/****************************************************************
*关闭串口
*
*****************************************************************/
bool close_Serial()
{
    serialport->clear();
    serialport->close();
    if(serialport->isOpen())
    {
        return false;
    }
    else
    {
        return true;
    }
}

/****************************************************************
*获取当前可用的设备列表
*
*****************************************************************/
QStringList get_port_Name_list()
{
    QStringList ComList;

    foreach(const QSerialPortInfo &info,QSerialPortInfo::availablePorts())
    {
        ComList << info.portName();

    }
    return ComList;
}


