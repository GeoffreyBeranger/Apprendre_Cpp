#include "oui.h"
#include "ui_oui.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QLinearGradient>
#include <QConicalGradient>

oui::oui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::oui)
{
    ui->setupUi(this);
}

oui::~oui()
{
    delete ui;
}

void oui::on_pushButton_Animation_clicked()
{
    QGraphicsScene *maScene = new QGraphicsScene();

    ui->graphicsView_1->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView_1->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    maScene->setSceneRect(0,0,600,300);
    QColor vert(0,255,0);
    QColor rouge(255,0,0);
    QColor magenta(255,0,255);
    QColor bleu(0,0,255);

    QGraphicsEllipseItem unRond;
    unRond.setPos(100,100);

    QGraphicsEllipseItem *unRondItem=new QGraphicsEllipseItem(200,150,50,50);
    QPen contour(magenta);
    contour.setCapStyle(Qt::RoundCap);
    contour.setStyle(Qt::SolidLine);
    contour.setJoinStyle(Qt::RoundJoin);
    contour.setWidth(2);

    QBrush textureContour(magenta);
    //textureContour.setStyle(Qt::Dense6Pattern);
    contour.setBrush(textureContour);


    QBrush interieur(vert);
    unRondItem->setBrush(interieur);
    unRondItem->setPen(contour);
    //unPolygoneItem->setFlag(QGraphicsItem::ItemIsMovable);
    maScene->addItem(unRondItem);
    ui->graphicsView_1->setBackgroundBrush(Qt::white);
    ui->graphicsView_1->fitInView(maScene->sceneRect(), Qt::KeepAspectRatio);
    ui->graphicsView_1->setScene(maScene);
    ui->graphicsView_1->show();
}
