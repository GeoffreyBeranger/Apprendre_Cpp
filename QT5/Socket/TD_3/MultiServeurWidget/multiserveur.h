#ifndef MULTISERVEUR_H
#define MULTISERVEUR_H

#include <QTcpServer>
#include <QTcpSocket>
#include <QWidget>
#include <QHostInfo>
#include <QProcess>
#include <QDebug>
#include <QString>
namespace Ui {
class MultiServeur;
}

class MultiServeur : public QWidget
{
    Q_OBJECT

public:
    explicit MultiServeur(QWidget *parent = nullptr);
    ~MultiServeur();

private slots:
    void on_pushButtonLancerServeur_clicked();
    void onQTcpServer_newConnection();
    void onQTcpSocket_readyRead();
    void onQTcpSocket_disconnected();
    void onQProcess_readyReadStandardOutput();
private:
    Ui::MultiServeur *ui;
    QTcpServer *socketEcouteServeur;
    QList<QTcpSocket*> socketDialogueClient;
    QList<QProcess*> process;

};

#endif // MULTISERVEUR_H
