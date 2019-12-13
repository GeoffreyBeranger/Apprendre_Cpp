#ifndef OUI_H
#define OUI_H

#include <QWidget>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <QByteArray>

namespace Ui {
class oui;
}

class oui : public QWidget
{
    Q_OBJECT

public:
    explicit oui(QWidget *parent = nullptr);
    ~oui();

private slots:
    void on_pushButton_OuvrirPortSerie_clicked();
    void onQSerialPort_readyRead();

    void on_pushButton_Envoyer_clicked();

    void on_lineEdit_TexteEnvoyer_returnPressed();

private:
    Ui::oui *ui;
    QSerialPort *SerialPort;
};

#endif // OUI_H
