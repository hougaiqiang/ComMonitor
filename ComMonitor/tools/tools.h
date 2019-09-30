#ifndef TOOLS_H
#define TOOLS_H

#include <QString>
#include <stdio.h>
#include <QStringList>

#define UCHAR_TO_ASIICHEX(data,str) sprintf(str,"0X%.2X",data)

void uchar_to_ASIICHEX(char data, char *str);

void U64_to_ASIICHEX(const long long data, QString *str);

unsigned char ASIICHEX_to_uchar(QString str);

bool ASIICHEX_to_int(QString str, unsigned long long *toInt);

bool u64_to_ASIICBit( unsigned long long data, QString *str);

bool ASIICBit_to_int64(QString str, unsigned long long *pdata);

ushort Alg_ModBusCRC16(uchar *  pucFrame,  ushort usLen);

#endif // TOOLS_H
