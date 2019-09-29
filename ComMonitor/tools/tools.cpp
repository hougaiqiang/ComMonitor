
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


void uchar_to_ASIICHEX(char data, char *str)
{
    sprintf(str,"%#.2X",data);
}

/**************************************************************
** 长整型数据转换为十六进制形式的字符
**  如此形式 0x10 0x56 0xff
**************************************************************/
void U64_to_ASIICHEX(const long long data, QString *str)
{
    unsigned char temp = 0;
    unsigned long long DataTemp = (unsigned long long) data;
    char strTemp[] = "0x00";

    str->clear();

    while(DataTemp > 0)
    {
        temp = DataTemp & 0xff;
        //sprintf(strTemp,"%#.2X ",temp);
        UCHAR_TO_ASIICHEX(temp,strTemp);
        str->prepend(" ");  //空格
        str->prepend(strTemp);
        DataTemp = DataTemp >> 8;
    }
    return ;
}


/**************************************************************
** 十六进制形式的字符转换为整型数据
**  如此形式 0x10  转换为unsigned char
**
**************************************************************/
unsigned char ASIICHEX_to_uchar(QString str)
{
    //QString str_temp = str.right(2);
    bool OK;
    unsigned char data = (unsigned char)str.toUShort(&OK,16);
    return data;
}

/**************************************************************
** 十六进制形式的字符转换为整型数据
** 如此形式 0x10 0x56 0xff转换为long long
** 最大长度 0x12 0x24 0x56 0x78 0x9a 0xbc 0xde 0xf0
**************************************************************/
bool ASIICHEX_to_int(QString str, unsigned long long *toInt)
{
    unsigned long long data = 0;
    unsigned char data_temp= 0;
    if(str.length() > 40 || str.length() < 4)
    {
        return false;
    }

    QStringList list_temp = str.split(' ', QString::SkipEmptyParts);

    for (int i = 0; i < list_temp.count(); ++i)
    {
        data <<= 8;
        data_temp = ASIICHEX_to_uchar(list_temp[i]);
        data += data_temp;
    }
    *toInt = data;
    return true;
}

/**************************************************************
** uchar转换为二进制文本，如0x8f -> "10001111 "
**************************************************************/
void uchar_to_ASIICBit(unsigned char data, char *bitArry)
{
    for(int i = 7; i >= 0; i--)
    {
        if( data & 0x01 )
        {
            bitArry[i] = '1';
        }
        else
        {
            bitArry[i] = '0';
        }
        data >>= 1;
    }
    return ;
}

/**************************************************************
** unsigned long long转换为二进制文本，如0x8fff -> "10001111 11111111 "
**************************************************************/
bool u64_to_ASIICBit( unsigned long long data, QString *str)
{
    char BitAsiic[10] = "00000000 ";
    unsigned char onebyte = 0;
    str->clear();

    for(int i = 7; i >= 0; i--)
    {
        onebyte = data & 0xff;
        uchar_to_ASIICBit(onebyte, BitAsiic);
        data >>= 8;
        str->prepend(BitAsiic);
        if(0 == data)
        {
            break;
        }
    }
    return true;
}

/**************************************************************
** 二进制文本转换为long long，如0x8fff <- "10001111 11111111 "
**************************************************************/
bool ASIICBit_to_int64(QString str, unsigned long long *pdata)
{
    unsigned long long data = 0;
    unsigned char data_temp= 0;
    bool OK;
    if(str.length() > 72 )
    {
        return false;
    }

    QStringList list_temp = str.split(' ', QString::SkipEmptyParts);

    for (int i = 0; i < list_temp.count(); ++i)
    {
        data <<= 8;
        data_temp = (unsigned char)list_temp[i].toUShort(&OK,2);
        if(false == OK)
        {
            return false;
        }
        data += data_temp;
    }
    *pdata = data;
    return true;
}
