#ifndef PARTIEOPERATIVE_H
#define PARTIEOPERATIVE_H

#include <QWidget>
#include "barquette.h"
#include <QString>
#include <QQueue>
#include <QTimer>
#include <QList>
#include <QDebug>

namespace Ui {
class PartieOperative;
}

class PartieOperative : public QWidget
{
    Q_OBJECT

public:
    explicit PartieOperative(QWidget *parent = nullptr);
    ~PartieOperative();

private slots:
    void on_pushButton_NewBarquette_clicked();

    void on_pushButton_DebutProduction_clicked();

    void onTimerPo_TimeOut();



    void onEjecteurTrouve(Barquette pBarquette);

    void on_pushButton_ArretProduction_clicked();

private:
    Ui::PartieOperative *ui;
    QQueue<Barquette*> fileBarquettes;
    QList<Barquette*> tapis;
    QTimer timerPo;
};

#endif // PARTIEOPERATIVE_H
