#ifndef OUI_H
#define OUI_H

#include <QWidget>
#include <QFileDialog>
#include <QMediaPlayer>


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


    void on_pushButton_ChooseFile_clicked();

    void on_pushButton_PlayExternalSound_clicked();

    void onQMediaPlayer_stateChanged(QMediaPlayer::State state);

    void onQMediaPlayer_error(QMediaPlayer::Error error);

private:
    Ui::oui *ui;
    QMediaPlayer player;
    QString nomFichier;
};

#endif // OUI_H
