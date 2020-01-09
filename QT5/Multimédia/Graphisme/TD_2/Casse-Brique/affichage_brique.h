#ifndef AFFICHAGE_BRIQUE_H
#define AFFICHAGE_BRIQUE_H

#include <QWidget>

namespace Ui {
class Affichage_Brique;
}

class Affichage_Brique : public QWidget
{
    Q_OBJECT

public:
    explicit Affichage_Brique(QWidget *parent = nullptr);
    ~Affichage_Brique();

private:
    Ui::Affichage_Brique *ui;
};

#endif // AFFICHAGE_BRIQUE_H
