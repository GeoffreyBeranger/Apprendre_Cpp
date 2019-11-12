#ifndef CLIENT_H
#define CLIENT_H

#include <QWidget>
#include <QTcpSocket>

namespace Ui {
class Client;
}

class Client : public QWidget
{
    Q_OBJECT

public:
    explicit Client(QWidget *parent = nullptr);
    ~Client();

private slots:
    void on_pushButton_Connexion_clicked();

    void on_pushButton_NomdOrdiDistant_clicked();

    void on_pushButton_NomUtilisateur_clicked();

    void on_pushButton_ArchitectureOrdi_clicked();

    void on_pushButton_OsOrdi_clicked();

private:
    Ui::Client *ui;
    QTcpSocket *socketDeDialogueAvecServeur;
    void onQTcpSocket_connected();
    void onQtspSocket_disconnected();
    void onQTcpSocket_readyRead();
    void onQTcpSocket_error();
    QString typeDeDemande;

};

#endif // CLIENT_H
