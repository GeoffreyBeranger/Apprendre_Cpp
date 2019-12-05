#ifndef BARQUETTE_H
#define BARQUETTE_H

#include <QThread>
#include <QObject>
#include <QSemaphore>

class Barquette : public QThread
{
    Q_OBJECT

public:
    Barquette(const int _emplacement,const QString _codeBarre,QObject *parent = nullptr);
    ~Barquette();
    void Run();
    QString ObtenirCodeBarre();


private:
    QString codeBarre;
    int emplacement;
    QString capteurCourant;
    quint8 EtatCapteur;
    QSemaphore synchro;

signals:
    void EjecteurTrouve();
    void CapteurChange();



};

#endif // BARQUETTE_H
