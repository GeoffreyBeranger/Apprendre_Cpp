#ifndef MONTHREAD_H
#define MONTHREAD_H
#include <QThread>
#include <QBuffer>
#include <QDebug>
#include <QDataStream>
#include <QMutex>

class MonThread : public QThread
{
    Q_OBJECT
public:
    MonThread(QString _nom);
    void run();
    static unsigned int nbThread
;
private:
    QString nom;
    static QBuffer zoneCommune;
    void afficherZone();
    static QMutex verrou;

signals:
    void monId(qint64 id);
};

#endif // MONTHREAD_H
