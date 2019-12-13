#include "oui.h"
#include "ui_oui.h"


oui::oui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::oui)
{
    ui->setupUi(this);

    foreach(QSerialPortInfo info, QSerialPortInfo::availablePorts())
        ui->comboBox_Port->addItem(info.portName());







}

oui::~oui()
{
    delete ui;
}

void oui::on_pushButton_OuvrirPortSerie_clicked()
{
    if(ui->pushButton_OuvrirPortSerie->text() == "Ouvrir le Port Série"){

        SerialPort = new QSerialPort(ui->comboBox_Port->currentText());

        if(!SerialPort->open(QIODevice::ReadWrite)){
            if(ui->comboBox_Port->currentIndex() == 0){

            }else{
                qDebug() << "ERREUR: " << SerialPort->errorString();
            }

        }else{
            qDebug()<< "Port série ouvert dans " << ui->comboBox_Port->currentText();
            SerialPort->setBaudRate(QSerialPort::Baud9600);
            SerialPort->setDataBits(QSerialPort::Data8);
            SerialPort->setParity(QSerialPort::NoParity);
            SerialPort->setStopBits(QSerialPort::OneStop);
            SerialPort->setFlowControl(QSerialPort::NoFlowControl);
            connect(SerialPort,&QSerialPort::readyRead,this,&oui::onQSerialPort_readyRead);

            ui->pushButton_OuvrirPortSerie->setText("Fermer le port série");
            ui->pushButton_Envoyer->setEnabled(true);
        }

    }else{
        ui->pushButton_OuvrirPortSerie->setText("Ouvrir le Port Série");
        SerialPort->close();
        ui->pushButton_Envoyer->setEnabled(false);
    }
}

void oui::onQSerialPort_readyRead()
{

    QString donnees;
    while(SerialPort->bytesAvailable()){
        donnees = SerialPort->readAll();
    }
    QString message = static_cast<QString>(donnees.data());
    ui->textEdit_TexteRecu->append(message);


}

void oui::on_pushButton_Envoyer_clicked()
{

    QString trame = ui->lineEdit_TexteEnvoyer->text();
    if(SerialPort->isOpen())
        SerialPort->write(trame.toLatin1(),trame.length());

    ui->lineEdit_TexteEnvoyer->clear();



}

void oui::on_lineEdit_TexteEnvoyer_returnPressed()
{

    on_pushButton_Envoyer_clicked();

}
