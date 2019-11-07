#include "calculatrice.h"
#include "ui_calculatrice.h"

calculatrice::calculatrice(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::calculatrice)
{
    ui->setupUi(this);
}

calculatrice::~calculatrice()
{
    delete ui;
}

void calculatrice::on_pushButton0_9_clicked()
{
    ui->lineEdit_Calcul->setText(ui->lineEdit_Calcul->text()+"9");
}

void calculatrice::on_pushButton0_8_clicked()
{
    ui->lineEdit_Calcul->setText(ui->lineEdit_Calcul->text()+"8");
}

void calculatrice::on_pushButton0_7_clicked()
{
    ui->lineEdit_Calcul->setText(ui->lineEdit_Calcul->text()+"7");
}

void calculatrice::on_pushButton0_6_clicked()
{
    ui->lineEdit_Calcul->setText(ui->lineEdit_Calcul->text()+"6");
}

void calculatrice::on_pushButton0_5_clicked()
{
    ui->lineEdit_Calcul->setText(ui->lineEdit_Calcul->text()+"5");
}

void calculatrice::on_pushButton0_4_clicked()
{
    ui->lineEdit_Calcul->setText(ui->lineEdit_Calcul->text()+"4");
}

void calculatrice::on_pushButton0_3_clicked()
{
    ui->lineEdit_Calcul->setText(ui->lineEdit_Calcul->text()+"3");
}

void calculatrice::on_pushButton0_2_clicked()
{
    ui->lineEdit_Calcul->setText(ui->lineEdit_Calcul->text()+"2");
}

void calculatrice::on_pushButton0_1_clicked()
{
    ui->lineEdit_Calcul->setText(ui->lineEdit_Calcul->text()+"1");
}

void calculatrice::on_pushButton0_clicked()
{
    ui->lineEdit_Calcul->setText(ui->lineEdit_Calcul->text()+"0");
}

void calculatrice::on_pushButton_Plus_clicked()
{
    ui->lineEdit_Calcul->setText(ui->lineEdit_Calcul->text()+"+");
}

void calculatrice::on_pushButton_Moins_clicked()
{
    ui->lineEdit_Calcul->setText(ui->lineEdit_Calcul->text()+"-");
}

void calculatrice::on_pushButton_Multiplier_clicked()
{
    ui->lineEdit_Calcul->setText(ui->lineEdit_Calcul->text()+"*");
}

void calculatrice::on_pushButton_DIviser_clicked()
{
    ui->lineEdit_Calcul->setText(ui->lineEdit_Calcul->text()+"/");
}

void calculatrice::on_pushButton_Egal_clicked()
{
    QScriptEngine myEngine;
    QScriptValue resultat = myEngine.evaluate(ui->lineEdit_Calcul->text());
    ui->lineEdit_Calcul->clear();
    ui->lineEdit_Calcul->setText(resultat.toString());
}

void calculatrice::on_pushButton_Clear_clicked()
{
    ui->lineEdit_Calcul->clear();
}
