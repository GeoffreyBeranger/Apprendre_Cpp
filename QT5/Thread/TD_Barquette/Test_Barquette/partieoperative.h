#ifndef PARTIEOPERATIVE_H
#define PARTIEOPERATIVE_H

#include <QWidget>
#include "barquette.h"
#include <QString>
#include <QQueue>
#include <QTimer>
#include <QList>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class PartieOperative;
}

class PartieOperative : public QWidget
{
    Q_OBJECT

public:
    explicit PartieOperative(QWidget *parent = nullptr);
    ~PartieOperative();

public slots:
    void on_pushButton_NewBarquette_clicked();

    void on_pushButton_DebutProduction_clicked();


    void on_pushButton_ArretProduction_clicked();


    void onTimerPo_TimeOut();


    void onEjecteurTrouve();


    void on_checkBox_Capteur1_stateChanged(int arg1);

    void on_checkBox_Capteur2_stateChanged(int arg1);

    void on_checkBox_Capteur3_stateChanged(int arg1);

    void on_checkBox_Capteur4_stateChanged(int arg1);

signals:
    void CapteurChange(quint8 octet);
    void EjecteurTrouve();


private:
    Ui::PartieOperative *ui;
    QQueue<Barquette*> fileBarquettes;
    QList<Barquette*> tapis;
    QTimer timerPo;
    quint8 capteurs;
    bool frontMontant;
};

#endif // PARTIEOPERATIVE_H
