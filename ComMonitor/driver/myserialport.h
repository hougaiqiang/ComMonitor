#ifndef MYSERIALPORT_H
#define MYSERIALPORT_H

//#include <QObject>
#include <QSerialPort>
#include <QSerialPortInfo>

class MySerialPort : public QSerialPort
{
    Q_OBJECT
public:
    //explicit MySerialPort(QObject *parent = nullptr);
public:
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
    bool Send_by_Serial(const char *data, int len);
    bool Send_And_Wait_Rcv(unsigned char *data, int SendLens, unsigned char *RcvData, int *RcvLens);
    //void receiveInfo();


private:

//public slots:
    //void receiveInfo();
};

#endif // MYSERIALPORT_H
