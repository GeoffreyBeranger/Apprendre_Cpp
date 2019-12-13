#include "qgraphicsboulehorizontalitem.h"



QGraphicsBouleHorizontalItem::QGraphicsBouleHorizontalItem(qreal x, qreal y, qreal width, qreal height, QGraphicsItem *parent):
    QGraphicsEllipseItem (x,y,width,height,parent),
    dx(2),
    dy(2)
{

}

void QGraphicsBouleHorizontalItem::advance(int step)
{

    moveBy(dx,dy);
    qreal largeurBoule = rect().width();
    qreal largeurScene = scene()->width();
    qreal  hauteurScene = scene()->height();

    if(x()<= 0)
    {
        dx = 2;

    }

    if(x()>= (largeurScene - largeurBoule))
    {
        dx = -2;
    }

    if(y()<0)
    {
        dy = 2;
    }

    if(y()>(hauteurScene-largeurBoule))
    {
        dy = -2;
    }

}


