#ifndef BARQUETTE_H
#define BARQUETTE_H

#include <QThread>
#include <QObject>
#include <QSemaphore>
#include <QDebug>


class Barquette : public QThread
{
    Q_OBJECT

public:
    Barquette(const quint8 _emplacement,const QString _codeBarre,QObject *parent = nullptr);
    ~Barquette();
    void Run();
    QString ObtenirCodeBarre();
    quint8 ObtenirEmplacement();


private:
    QString codeBarre;
    quint8 emplacement;
    QString capteurCourant;
    quint8 etatCapteur;
    QSemaphore synchro;

public slots:
    void onCapteurChange(quint8 octet);



signals:

    void EjecteurTrouve();



};

#endif // BARQUETTE_H
