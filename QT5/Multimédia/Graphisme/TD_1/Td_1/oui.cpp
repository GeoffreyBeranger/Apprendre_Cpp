#include "oui.h"
#include "ui_oui.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QLinearGradient>
#include <QConicalGradient>

Oui::Oui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Oui)
{
    ui->setupUi(this);
}

Oui::~Oui()
{
    delete ui;
}

void Oui::on_pushButton_Rectangle_clicked()
{
    QGraphicsScene *maScene = new QGraphicsScene();
    QGraphicsView *maVue = new QGraphicsView(this);
    maScene->setSceneRect(0,0,600,300);
    QColor vert(0,255,0);
    QColor rouge(255,0,0);
    QColor bleu(0,0,255);
    QRect unRectangle;
    unRectangle.setCoords(50,50,400,200);

    QGraphicsRectItem *unRectangleItem=new QGraphicsRectItem(unRectangle);
    QPen contour(bleu);
    contour.setCapStyle(Qt::RoundCap);
    contour.setStyle(Qt::SolidLine);
    contour.setJoinStyle(Qt::RoundJoin);
    contour.setWidth(5);

    QBrush textureContour(bleu);
    //textureContour.setStyle(Qt::Dense6Pattern);
    contour.setBrush(textureContour);


    QBrush interieur(bleu);
    unRectangleItem->setBrush(interieur);
    unRectangleItem->setPen(contour);
    //unPolygoneItem->setFlag(QGraphicsItem::ItemIsMovable);
    maScene->addItem(unRectangleItem);
    maVue->setBackgroundBrush(Qt::white);
    maVue->fitInView(maScene->sceneRect(), Qt::KeepAspectRatio);
    maVue->setScene(maScene);
    maVue->show();
}

void Oui::on_pushButton_Triangle_clicked()
{

    QGraphicsScene *maScene = new QGraphicsScene();
    QGraphicsView *maVue = new QGraphicsView(this);
    maScene->setSceneRect(0,0,600,300);
    QColor vert(0,255,0);
    QColor rouge(255,0,0);
    QColor bleu(0,0,255);
    QPolygon unTriangle;

    unTriangle.setPoints(3,
                         120,50,
                         60,120,
                         180,120
                         );

    QGraphicsPolygonItem *unPolyItem=new QGraphicsPolygonItem(unTriangle);
    QPen contour(rouge);
    contour.setCapStyle(Qt::RoundCap);
    contour.setStyle(Qt::SolidLine);
    contour.setJoinStyle(Qt::RoundJoin);
    contour.setWidth(2);

    QBrush textureContour(rouge);
    //textureContour.setStyle(Qt::Dense6Pattern);
    contour.setBrush(textureContour);


    QBrush interieur(bleu);
    unPolyItem->setBrush(interieur);
    unPolyItem->setPen(contour);
    //unPolygoneItem->setFlag(QGraphicsItem::ItemIsMovable);
    maScene->addItem(unPolyItem);
    maVue->setBackgroundBrush(Qt::white);
    maVue->fitInView(maScene->sceneRect(), Qt::KeepAspectRatio);
    maVue->setScene(maScene);
    maVue->show();

}

void Oui::on_pushButton_RR_clicked()
{

    QGraphicsScene *maScene = new QGraphicsScene();
    QGraphicsView *maVue = new QGraphicsView(this);
    maScene->setSceneRect(0,0,600,300);
    QColor vert(0,255,0);
    QColor rouge(255,0,0);
    QColor bleu(0,0,255);

    QGraphicsEllipseItem uneEllipse;
    uneEllipse.setPos(100,50);

    QGraphicsEllipseItem *uneEllipseitem=new QGraphicsEllipseItem(120,120,250,100);
    QPen contour(rouge);
    contour.setCapStyle(Qt::RoundCap);
    contour.setStyle(Qt::SolidLine);
    contour.setJoinStyle(Qt::RoundJoin);
    contour.setWidth(2);

    QBrush textureContour(rouge);
    //textureContour.setStyle(Qt::Dense6Pattern);
    contour.setBrush(textureContour);


    QBrush interieur(rouge);
    uneEllipseitem->setBrush(interieur);
    uneEllipseitem->setPen(contour);
    //unPolygoneItem->setFlag(QGraphicsItem::ItemIsMovable);
    maScene->addItem(uneEllipseitem);
    maVue->setBackgroundBrush(Qt::white);
    maVue->fitInView(maScene->sceneRect(), Qt::KeepAspectRatio);
    maVue->setScene(maScene);
    maVue->show();


}

void Oui::on_pushButton_Cercle_clicked()
{
    QGraphicsScene *maScene = new QGraphicsScene();
    QGraphicsView *maVue = new QGraphicsView(this);
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
    maVue->setBackgroundBrush(Qt::white);
    maVue->fitInView(maScene->sceneRect(), Qt::KeepAspectRatio);
    maVue->setScene(maScene);
    maVue->show();
}

void Oui::on_pushButton_Etoile_clicked()
{

    QGraphicsScene *maScene = new QGraphicsScene();
    QGraphicsView *maVue = new QGraphicsView(this);
    maScene->setSceneRect(0,0,500,500);
    QColor vert(0,255,0);
    QColor rouge(255,0,0);
    QColor bleu(0,0,255);
    QPolygon unTriangle1;
    QPolygon unTriangle2;

    unTriangle1.setPoints(10,
                          150,200,
                          170,140,
                          120,110,
                          180,110,
                          200,50,
                          220,110,
                          280,110,
                          230,140,
                          250,200,
                          200,160
                          );

    unTriangle2.setPoints(10,
                          150,200,
                          170,140,
                          120,110,
                          180,110,
                          200,50,
                          220,110,
                          280,110,
                          230,140,
                          250,200,
                          200,160
                          );

    QGraphicsPolygonItem *unPolyItem1 = new QGraphicsPolygonItem(unTriangle1);
    QGraphicsPolygonItem *unPolyItem2 = new QGraphicsPolygonItem(unTriangle2);

    QBrush interieurEtoile1(bleu);
    interieurEtoile1.setStyle(Qt::BDiagPattern);
    unPolyItem1->setBrush(interieurEtoile1);
    QPen contourEtoile1(bleu);
    contourEtoile1.setWidth(5);
    unPolyItem1->setPen(contourEtoile1);

    unPolyItem1->setRotation(45);

    QBrush interieurEtoile2(vert);
    unPolyItem2->setBrush(interieurEtoile2);
    QPen contourEtoile2(bleu);
    contourEtoile2.setWidth(5);
    unPolyItem2->setPen(contourEtoile2);



    maScene->addItem(unPolyItem2);
    maScene->addItem(unPolyItem1);

    maVue->fitInView(maScene->sceneRect(),Qt::KeepAspectRatio);
    maVue->setScene(maScene);
    maVue->show();

}

void Oui::on_pushButton_AfficherTout_clicked()
{

    QGraphicsScene *maScene = new QGraphicsScene();
    QGraphicsView *maVue = new QGraphicsView(this);
    maScene->setSceneRect(0,0,500,500);
    QColor bleu(0,0,255);
    QColor blanc(255,255,255);



    QGraphicsEllipseItem *rondLinear = new QGraphicsEllipseItem(25,25,50,50);
    QGraphicsEllipseItem *rondConical = new QGraphicsEllipseItem(80,25,50,50);
    QGraphicsEllipseItem *rondRadial = new QGraphicsEllipseItem(135,25,50,50);
    QGraphicsEllipseItem *rondTexture = new QGraphicsEllipseItem(190,25,50,50);
    QGraphicsRectItem *carreConical = new QGraphicsRectItem(25,100,50,50);
    QGraphicsRectItem *carreLinear = new QGraphicsRectItem(80,100,50,50);


    QLinearGradient colorLinearRond(QPointF(50,50) , QPointF(90,90));
    colorLinearRond.setColorAt(0,blanc);
    colorLinearRond.setColorAt(1,bleu);
    rondLinear->setBrush(colorLinearRond);

    QConicalGradient colorConicalRond(QPointF(100,45),25);
    colorConicalRond.setColorAt(0,blanc);
    colorConicalRond.setColorAt(1,bleu);
    rondConical->setBrush(colorConicalRond);

    QRadialGradient colorRadialRond(QPointF(160,50),45,QPoint(160,60));
    colorRadialRond.setColorAt(0,blanc);
    colorRadialRond.setColorAt(1,bleu);
    rondRadial->setBrush(colorRadialRond);

    QPixmap oui("brique.jpg");
    rondTexture->setBrush(oui);

    QConicalGradient colorGradientCarre1(QPointF(50,110),0);
    colorGradientCarre1.setColorAt(0,blanc);
    colorGradientCarre1.setColorAt(1,bleu);
    carreConical->setBrush(colorGradientCarre1);

    QLinearGradient colorGradientCarre2(QPointF(300,60) , QPointF(380,140));
        colorGradientCarre2.setColorAt(0,blanc);
        colorGradientCarre2.setColorAt(1,bleu);
        carreLinear->setBrush(colorGradientCarre2);



    maScene->addItem(rondLinear);
    maScene->addItem(rondConical);
    maScene->addItem(rondRadial);
    maScene->addItem(rondTexture);
    maScene->addItem(carreConical);
    maScene->addItem(carreLinear);


    maVue->fitInView(maScene->sceneRect(),Qt::KeepAspectRatio);
    maVue->setScene(maScene);
    maVue->show();

}

void Oui::on_pushButton_Flocon_clicked()
{

    QGraphicsScene *maScene = new QGraphicsScene();
        QGraphicsView *maVue = new QGraphicsView();
        maScene->setSceneRect(0,0,400,300);

        QColor bleu(0,0,255);
        QColor blanc(255,255,255);

        QPolygon flocon1;
        flocon1.setPoints(66,
                          148,12,
                          165,11,
                          165,55,
                          198,34,
                          205,45,
                          167,70,
                          165,127,
                          213,100,
                          218,54,
                          231,52,
                          230,88,
                          264,72,
                          274,83,
                          242,104,
                          273,120,
                          266,132,
                          224,115,
                          173,142,
                          221,169,
                          263,151,
                          272,162,
                          241,180,
                          276,198,
                          264,213,
                          230,195,
                          231,235,
                          217,229,
                          212,184,
                          166,157,
                          167,212,
                          205,238,
                          198,252,
                          169,232,
                          167,273,
                          151,271,
                          149,233,
                          118,252,
                          109,239,
                          148,213,
                          152,159,
                          103,184,
                          99,227,
                          85,234,
                          86,196,
                          51,214,
                          43,200,
                          77,181,
                          42,163,
                          51,151,
                          92,169,
                          142,144,
                          92,113,
                          50,132,
                          42,120,
                          76,105,
                          40,84,
                          50,71,
                          86,88,
                          83,52,
                          99,58,
                          102,99,
                          148,126,
                          149,72,
                          111,46,
                          117,35,
                          149,53
                         );

        QGraphicsPolygonItem *floconItem1=new QGraphicsPolygonItem(flocon1);
        maScene->addItem(floconItem1);

        QPen contour(Qt::black);
        contour.setWidth(5);
        floconItem1->setPen(contour);

        maVue->fitInView(maScene->sceneRect(),Qt::KeepAspectRatio);
        maVue->setScene(maScene);
        maVue->show();

}
