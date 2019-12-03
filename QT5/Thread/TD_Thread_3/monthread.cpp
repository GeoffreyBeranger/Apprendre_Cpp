#include "monthread.h"


QBuffer MonThread::zoneCommune;
unsigned int MonThread::nbThread=0;
QMutex MonThread::verrou;

MonThread::MonThread(QString _nom):
    nom(_nom)
{
    nbThread++;
}

void MonThread::run()
{
    verrou.lock();
    zoneCommune.open(QIODevice::ReadWrite);
    QDataStream out(&zoneCommune);
    qDebug() << "Début du lancement du thread" << nom << "id : " << (quint64)QThread::currentThreadId();
    out << (qint64)QThread::currentThreadId();
    out << nom;
    afficherZone();
    verrou.lock();

}

void MonThread::afficherZone()
{

    zoneCommune.open(QIODevice::ReadWrite);
    QDataStream in(&zoneCommune);
    qint64 ptr;
    QString chaine;
    in >> ptr >> chaine;
    qDebug() << "thread" << nom << "Zone Commune" << chaine << "id : " << ptr;

}
