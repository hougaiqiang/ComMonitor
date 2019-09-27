
#include "tools.h"

void int_to_bit()
{

}

void int_to_hex()
{

}

void hex_to_int()
{

}
void hex_to_bit()
{

}
void bit_to_hex()
{

}

void bit_to_int()
{

}

#define UCHAR_TO_ASIICHEX(data,str) sprintf(str,"%#.2X", data)
void uchar_to_ASIICHEX(unsigned char data, char * str)
{
    sprintf(str,"%#.2X",data);
}

/**************************************************************
** 长整型数据转换为十六进制形式的字符
**  如此形式 0x10 0x56 0xff
**************************************************************/
void hex_to_ASIICHEX(const long long data, QString str)
{
    unsigned char temp = 0;
    long long DataTemp = data;
    unsigned char strTemp[] = "0x00 ";

    str.clear();

    while(data > 0)
    {
        temp = DataTemp & 0xff;
        //sprintf(strTemp,"%#.2X ",temp);
        UCHAR_TO_ASIICHEX(strTemp,temp);
        str.append(strTemp);
        str.append(" ");  //空格
        DataTemp = DataTemp >> 8;
    }
}


/**************************************************************
** 十六进制形式的字符转换为整型数据
**  如此形式 0x10  转换为unsigned char
**
**************************************************************/
unsigned char ASIICHEX_to_uchar(QString str)
{
    QString str_temp = str.right(2);
    unsigned char data = (unsigned char)str_temp.toUShort();
    return data;
}

/**************************************************************
** 十六进制形式的字符转换为整型数据
** 如此形式 0x10 0x56 0xff转换为long long
** 最大长度 0x12 0x24 0x56 0x78 0x9a 0xbc 0xde 0xf0
**************************************************************/
unsigned long long ASIIC_to_int(QString str)
{
    unsigned long long data = 0;
    unsigned char data_temp= 0;
    if(str.length() > 40 && str.length() < 4)
    {
        return 0;
    }

    QStringList list_temp = str.split(' ', QString::SkipEmptyParts);

    for (int i = 0; i < list_temp.count(); ++i)
    {
        data <<= 8;
        data_temp = ASIICHEX_to_uchar(list_temp[i]);
        data += data_temp;
    }
    return data;
}

