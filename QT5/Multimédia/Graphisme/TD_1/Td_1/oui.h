#ifndef OUI_H
#define OUI_H

#include <QWidget>

namespace Ui {
class Oui;
}

class Oui : public QWidget
{
    Q_OBJECT

public:
    explicit Oui(QWidget *parent = nullptr);
    ~Oui();

private slots:
    void on_pushButton_Rectangle_clicked();

    void on_pushButton_Triangle_clicked();

    void on_pushButton_RR_clicked();

    void on_pushButton_Cercle_clicked();

    void on_pushButton_Etoile_clicked();

    void on_pushButton_AfficherTout_clicked();

    void on_pushButton_Flocon_clicked();

private:
    Ui::Oui *ui;
};

#endif // OUI_H
