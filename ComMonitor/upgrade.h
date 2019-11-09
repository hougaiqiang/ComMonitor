#ifndef UPGRADE_H
#define UPGRADE_H

#include <QObject>
#include "driver/myserialport.h"
#include <QFile>
#include "tools/tools.h"

class upgrade : public QObject
{
    Q_OBJECT
public:
    explicit upgrade(QObject *parent = nullptr);

    void set_upgrade_file(QString strFileName);

    qint8 get_program_addr();

    int get_upgrade_progress();

    bool Start_upgrade();

    bool give_up_upgrade();

    void set_serialport(MySerialPort SerialPort);

    bool *senddata(const char *data, int len);


signals:


public slots:

    void receivedata();

private:
    int Progress;           //升级进度0-99
    qint16 PackNum;         //包个数(总数)
    qint16 SendPackNum;     //已发送包个数（包序号）
    QString FileName;       //升级文件包与包路径
    qint8 ProgramAddr;      //程序地址（高低区）

};

#endif // UPGRADE_H
