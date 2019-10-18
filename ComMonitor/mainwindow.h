#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <string>
#include <QFileDialog>
#include "driver/myserialport.h"
#include "tools/tools.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    MySerialPort *serialport;  //声明一个串口类，

private slots:
    void on_actionOpen_triggered();

    void on_pushButton_Open_COM_clicked();

    void on_lineEdit_Int_textEdited(const QString &arg1);

    void on_lineEdit_Hex_textEdited(const QString &arg1);

    void on_lineEdit_Bit_textEdited(const QString &arg1);

    void on_lineEdit_CRC_in_textEdited(const QString &arg1);

    void on_lineEdit_Hex_to_Asiic_textEdited(const QString &arg1);

    void on_lineEdit_Asiic_to_Hex_textEdited(const QString &arg1);

    void serialreceiveInfo();

    void on_pushButton_Send_clicked();

    void on_pushButton_Find_bin_clicked();

    void on_pushButton_Start_Download_clicked();

    void on_pushButton_Get_Program_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
