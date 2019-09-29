#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_actionOpen_triggered();

    void on_pushButton_Open_COM_clicked();

    void on_lineEdit_Int_textEdited(const QString &arg1);

    void on_lineEdit_Hex_textEdited(const QString &arg1);

    void on_lineEdit_Bit_textEdited(const QString &arg1);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
