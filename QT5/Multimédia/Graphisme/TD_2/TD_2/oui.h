#ifndef OUI_H
#define OUI_H

#include <QWidget>
#include <QGraphicsScene>
#include <QTimer>
#include "qgraphicsboulehorizontalitem.h"

namespace Ui {
class oui;
}

class oui : public QWidget
{
    Q_OBJECT

public:
    explicit oui(QWidget *parent = nullptr);
    ~oui();

private slots:
    void on_pushButton_Animation_clicked();

    void on_pushButton_Effacer_clicked();

private:
    Ui::oui *ui;
    QGraphicsScene maScene;
    QGraphicsBouleHorizontalItem *maBoule;
    QTimer timer;
};

#endif // OUI_H
