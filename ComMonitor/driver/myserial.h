#ifndef MYSERIAL_H
#define MYSERIAL_H

#include <QSerialPort>
#include <QSerialPortInfo>


typedef struct{
    QString SerialName;
    QString Parity;
    QString stop;
    int baud;
    int data;
}SERIAL;


QStringList get_port_Name_list();
bool Open_Serial(SERIAL *stSerial);
bool get_Serial_status();
bool close_Serial();



#endif // MYSERIAL_H
