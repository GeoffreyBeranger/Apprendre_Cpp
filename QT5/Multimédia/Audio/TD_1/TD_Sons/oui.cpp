#include "oui.h"
#include "ui_oui.h"
#include <QMediaPlayer>
#include <QDebug>

oui::oui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::oui)
{
    ui->setupUi(this);
    connect(&player,&QMediaPlayer::stateChanged,this,&oui::onQMediaPlayer_stateChanged);
    connect(&player,QOverload<QMediaPlayer::Error>::of(&QMediaPlayer::error),this,&oui::onQMediaPlayer_error);
}

oui::~oui()
{
    delete ui;
}

void oui::on_pushButton_ChooseFile_clicked()
{

    nomFichier = QFileDialog::getOpenFileName();

}

void oui::on_pushButton_PlayExternalSound_clicked()
{

    player.setMedia(QUrl::fromLocalFile(nomFichier));
    player.setVolume(100);
    player.play();

}

void oui::onQMediaPlayer_stateChanged(QMediaPlayer::State state)
{

    QString etat;
    switch (state)
    {

    case QMediaPlayer::StoppedState :etat = "stopped";break;
    case QMediaPlayer::PlayingState :etat = "playing";break;
    case QMediaPlayer::PausedState :etat =  "paused";break;

    }
    qDebug() << etat;

}

void oui::onQMediaPlayer_error(QMediaPlayer::Error error)
{

    qDebug() << player.errorString();

}
