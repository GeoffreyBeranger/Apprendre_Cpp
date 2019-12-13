#include "view.h"
#include "ui_view.h"
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsLineItem>
#include <QGraphicsPolygonItem>

view::view(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::view)
{
    ui->setupUi(this);

    /* Elements Statiques
    QGraphicsScene *maScene = new QGraphicsScene();
    QGraphicsView *maVue = new QGraphicsView(this);

    maScene->setSceneRect(0,0,400,300);
    QVector<QPoint> sommets;

    sommets << QPoint(10,10) << QPoint(30,10) << QPoint(60,50);
    QPolygon poly(sommets);
    QPolygon poly2;
    poly2.setPoints(6,
                    260,66,
                    287,166,
                    373,239,
                    259,182,
                    174,241,
                    246,157
                    );
    maScene->addPolygon(poly2);
    maVue->fitInView( maScene->sceneRect(), Qt::KeepAspectRatio );
    maVue->setScene(maScene);
    maVue->show();
*/

    /* Objets Dynamiques*/

    //    QGraphicsScene *maScene = new QGraphicsScene();
    //    QGraphicsView *maVue = new QGraphicsView(this);
    //    maScene->setSceneRect(0,0,400,300);
    //    QPolygon poly1;
    //    QGraphicsLineItem *ligne;
    //    QGraphicsPolygonItem *polyA;
    //    QGraphicsTextItem *monTexte;
    //    poly1.setPoints(4,
    //                  10,10,
    //                  100,20,
    //                  50,50,
    //                  30,100
    //                  );
    //    ligne = new QGraphicsLineItem(0,0,400,300);
    //    polyA = new QGraphicsPolygonItem(poly1);
    //    monTexte = new QGraphicsTextItem("bonjour");
    //    monTexte->setPos(50,100);
    //    monTexte->setFlag(QGraphicsItem::ItemIsMovable);
    //    polyA->setFlag(QGraphicsItem::ItemIsMovable);
    //    ligne->setFlag(QGraphicsItem::ItemIsMovable);
    //    maScene->addItem(monTexte);
    //    maScene->addItem(polyA);
    //    maScene->addItem(ligne);
    //    maVue->fitInView(maScene->sceneRect(), Qt::KeepAspectRatio);
    //    maVue->setScene(maScene);
    //    maVue->show();




    QGraphicsScene *maScene = new QGraphicsScene();
    QGraphicsView *maVue = new QGraphicsView(this);
    maScene->setSceneRect(0,0,400,300);
    QColor vert(0,255,0);
    QColor rouge(255,0,0);
    QPolygon unPolygone;
    unPolygone.setPoints(6,
                         256,66,
                         287,166,
                         373,239,
                         259,182,
                         174,241,
                         246,157
                         );
    QGraphicsPolygonItem *unPolygoneItem=new QGraphicsPolygonItem(unPolygone);
    QPen contour(rouge);
    contour.setCapStyle(Qt::RoundCap);
    contour.setStyle(Qt::SolidLine);
    contour.setJoinStyle(Qt::RoundJoin);
    contour.setWidth(5);

    QBrush textureContour(rouge);
    textureContour.setStyle(Qt::Dense6Pattern);
    contour.setBrush(textureContour);

    unPolygoneItem->setPen(contour);
    QBrush interieur(vert);
    interieur.setStyle(Qt::DiagCrossPattern);
    unPolygoneItem->setBrush(interieur);
    unPolygoneItem->setFlag(QGraphicsItem::ItemIsMovable);
    maScene->addItem(unPolygoneItem);
    maVue->setBackgroundBrush(Qt::white);
    maVue->fitInView(maScene->sceneRect(), Qt::KeepAspectRatio);
    maVue->setScene(maScene);
    maVue->show();


}

view::~view()
{
    delete ui;
}
