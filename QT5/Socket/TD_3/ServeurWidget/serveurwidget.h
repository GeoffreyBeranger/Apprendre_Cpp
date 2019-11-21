#ifndef SERVEURWIDGET_H
#define SERVEURWIDGET_H
#include <QTcpServer>
#include <QTcpSocket>
#include <QWidget>
#include <QHostInfo>
#include <QProcess>
#include <QDebug>
#include <QString>

namespace Ui {
class ServeurWidget;
}

class ServeurWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ServeurWidget(QWidget *parent = nullptr);
    ~ServeurWidget();

private slots:
    void on_pushButtonLancerServeur_clicked();


private:
    Ui::ServeurWidget *ui;
    QTcpServer *socketEcouteServeur;
    QTcpSocket *socketDialogueClient;
    QProcess * process;

   /* QList<QTcpSocket*> socketDialogueClient;
    QList<QProcess*> process; */
    void onQTcpServer_newConnection();
    void onQTcpSocket_readyRead();
    void onQTcpSocket_disconnected();
    void onQProcess_readyReadStandardOutput();
};

#endif // SERVEURWIDGET_H
