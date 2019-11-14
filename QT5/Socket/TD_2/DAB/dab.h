#ifndef DAB_H
#define DAB_H

#include <QWidget>
#include <QTcpSocket>

namespace Ui {
class Dab;
}

class Dab : public QWidget
{
    Q_OBJECT

public:
    explicit Dab(QWidget *parent = nullptr);
    ~Dab();

private slots:
    void on_pushButton_Connexion_clicked();
    void onQTcpSocket_connected();
    void onQtcpSocket_disconnected();
    void onQTcpSocket_readyRead();

    void on_pushButton_NumeroCompte_clicked();

    void on_pushButton_Envoi_clicked();

private:
    Ui::Dab *ui;
    QTcpSocket *socketDeDialogueAvecServeur;
};

#endif // DAB_H
