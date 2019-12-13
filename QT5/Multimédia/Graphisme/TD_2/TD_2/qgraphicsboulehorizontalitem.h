#ifndef QGRAPHICSBOULEHORIZONTALITEM_H
#define QGRAPHICSBOULEHORIZONTALITEM_H

#include <QGraphicsEllipseItem>
#include <QGraphicsItem>
#include <QGraphicsView>
#include <QGraphicsScene>


class QGraphicsBouleHorizontalItem : public QGraphicsEllipseItem
{
public:
    QGraphicsBouleHorizontalItem(qreal x, qreal y, qreal width, qreal height, QGraphicsItem *parent = nullptr);
protected:
    void advance(int step) override;
private:
    qreal dx;   // valeur du pas et sens du deplacement
    qreal dy;           // si <0 de droite a gauche
               // si >0 de gauche a droite

};

#endif // QGRAPHICSBOULEHORIZONTALITEM_H
