#ifndef SERVEUR_H
#define SERVEUR_H

#include <QWidget>

namespace Ui {
class Serveur;
}

class Serveur : public QWidget
{
    Q_OBJECT

public:
    explicit Serveur(QWidget *parent = nullptr);
    ~Serveur();

private:
    Ui::Serveur *ui;
};

#endif // SERVEUR_H
