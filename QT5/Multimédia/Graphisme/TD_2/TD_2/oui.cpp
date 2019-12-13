#include "oui.h"
#include "ui_oui.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QLinearGradient>
#include <QConicalGradient>

#define LARGEUR 381
#define HAUTEUR 241

oui::oui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::oui)
{
    ui->setupUi(this);
    maScene.setSceneRect(0,0,LARGEUR,HAUTEUR);
    ui->graphicsView_1->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView_1->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    ui->graphicsView_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView_2->rotate(180);

    ui->graphicsView_3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    QColor bleu(0,0,255);
    QBrush fond(bleu);
    fond.setStyle(Qt::Dense5Pattern);
    ui->graphicsView_3->setBackgroundBrush(fond);

    ui->graphicsView_4->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView_4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    QColor rouge(255,0,0);
    QColor blanc(255,255,255);
    QRadialGradient colorRadialRond(QPointF(200,100),45,QPoint(160,60));
    colorRadialRond.setColorAt(0,blanc);
    colorRadialRond.setColorAt(1,rouge);
    ui->graphicsView_4->setBackgroundBrush(colorRadialRond);


    ui->graphicsView_1->fitInView(maScene.sceneRect(),Qt::KeepAspectRatio);
    ui->graphicsView_1->setScene(&maScene);

    ui->graphicsView_2->fitInView(maScene.sceneRect(),Qt::KeepAspectRatio);
    ui->graphicsView_2->setScene(&maScene);

    ui->graphicsView_3->fitInView(maScene.sceneRect(),Qt::KeepAspectRatio);
    ui->graphicsView_3->setScene(&maScene);

    ui->graphicsView_4->fitInView(maScene.sceneRect(),Qt::KeepAspectRatio);
    ui->graphicsView_4->setScene(&maScene);

    connect(&timer,&QTimer::timeout,&maScene,&QGraphicsScene::advance);

    timer.start(30);
}

oui::~oui()
{
    delete ui;
}

void oui::on_pushButton_Animation_clicked()
{

    QColor rouge (255,0,0);
    maBoule = new QGraphicsBouleHorizontalItem(0,2,20,20);
    maScene.addItem(maBoule);
    QBrush fondBoule(rouge);
    maBoule->setBrush(fondBoule);

}

void oui::on_pushButton_Effacer_clicked()
{
    maScene.clear();
}
