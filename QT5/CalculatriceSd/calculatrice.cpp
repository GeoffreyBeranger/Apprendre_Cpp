#include "calculatrice.h"
#include "ui_calculatrice.h"
#include <QDebug>

Calculatrice::Calculatrice(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Calculatrice)
{
    ui->setupUi(this);

    connect(ui->pushButton_0,&QPushButton::clicked,this,&Calculatrice::on_QPushButtonClicked);
    connect(ui->pushButton_1,&QPushButton::clicked,this,&Calculatrice::on_QPushButtonClicked);
    connect(ui->pushButton_2,&QPushButton::clicked,this,&Calculatrice::on_QPushButtonClicked);
    connect(ui->pushButton_3,&QPushButton::clicked,this,&Calculatrice::on_QPushButtonClicked);
    connect(ui->pushButton_4,&QPushButton::clicked,this,&Calculatrice::on_QPushButtonClicked);
    connect(ui->pushButton_5,&QPushButton::clicked,this,&Calculatrice::on_QPushButtonClicked);
    connect(ui->pushButton_6,&QPushButton::clicked,this,&Calculatrice::on_QPushButtonClicked);
    connect(ui->pushButton_7,&QPushButton::clicked,this,&Calculatrice::on_QPushButtonClicked);
    connect(ui->pushButton_8,&QPushButton::clicked,this,&Calculatrice::on_QPushButtonClicked);
    connect(ui->pushButton_9,&QPushButton::clicked,this,&Calculatrice::on_QPushButtonClicked);
    connect(ui->pushButton_Plus,&QPushButton::clicked,this,&Calculatrice::on_QPushButtonClicked);
    connect(ui->pushButton_Moins,&QPushButton::clicked,this,&Calculatrice::on_QPushButtonClicked);
    connect(ui->pushButton_Diviser,&QPushButton::clicked,this,&Calculatrice::on_QPushButtonClicked);
    connect(ui->pushButton_Multiplier,&QPushButton::clicked,this,&Calculatrice::on_QPushButtonClicked);


}

Calculatrice::~Calculatrice()
{
    delete ui;
}

void Calculatrice::on_pushButton_Egal_clicked()
{
    QScriptEngine myEngine;
    QScriptValue resultat = myEngine.evaluate(ui->lineEdit_Calcul->text());
    ui->lineEdit_Calcul->clear();
    ui->lineEdit_Calcul->setText(resultat.toString());
}

void Calculatrice::on_pushButton_Clear_clicked()
{
    ui->lineEdit_Calcul->clear();
}


void Calculatrice::on_QPushButtonClicked()
{

    touche = qobject_cast<QPushButton*>(sender());
        ui->lineEdit_Calcul->setText(ui->lineEdit_Calcul->text()+touche->text());
}
