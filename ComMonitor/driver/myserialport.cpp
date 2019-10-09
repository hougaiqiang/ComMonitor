#include "myserialport.h"
/*
MySerialPort::MySerialPort()
{

}
*/

/****************************************************************
*获取当前串口打开状态
*
*****************************************************************/
bool MySerialPort::get_Serial_status()
{
    return isOpen();
}



/****************************************************************
*打开串口
*参数：
*SerialName : 串口名，字符串
*****************************************************************/
bool MySerialPort::Open_Serial(SERIAL *stSerial)
{

    setPortName(stSerial->SerialName);
    setBaudRate(stSerial->baud);

    if("EVEN" == stSerial->Parity)
    {
        setParity(QSerialPort::EvenParity);
    }
    else if("ODD" == stSerial->Parity)
    {
        setParity(QSerialPort::OddParity);
    }
    else
    {
        setParity(QSerialPort::NoParity);
    }

    //设置数据位
    if(5 == stSerial->data)
    {
        setDataBits(QSerialPort::Data5);
    }
    else if(6 == stSerial->data)
    {
        setDataBits(QSerialPort::Data6);
    }
    else if(7 == stSerial->data)
    {
        setDataBits(QSerialPort::Data7);
    }
    else
    {
        setDataBits(QSerialPort::Data8);
    }

    //设置停止位
    if("2" == stSerial->stop)
    {
        setStopBits(QSerialPort::TwoStop);
    }
    else if("1.5" == stSerial->stop)
    {
        setStopBits(QSerialPort::OneAndHalfStop);
    }
    else
    {
        setStopBits(QSerialPort::OneStop);
    }


    if(open(QIODevice::ReadWrite))
    {
        //打开成功
        //connect(serialport,SIGNAL(readyRead()),this,SLOT(receiveInfo()));
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
bool MySerialPort::close_Serial()
{
    clear();
    close();
    if(isOpen())
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
QStringList MySerialPort::get_port_Name_list()
{
    QStringList ComList;

    foreach(const QSerialPortInfo &info,QSerialPortInfo::availablePorts())
    {
        ComList << info.portName();

    }
    return ComList;
}

/****************************************************************
*发送数据
*
*****************************************************************/
bool MySerialPort::Send_by_Serial(const char *data, int len)
{
    if(!isOpen())
    {
        //串口未打开
        return false;
    }
    write(data, len);
    return true;
}


