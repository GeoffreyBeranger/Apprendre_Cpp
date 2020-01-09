#ifndef CASSE_BRIQUE_H
#define CASSE_BRIQUE_H

#include <QWidget>

namespace Ui {
class Casse_Brique;
}

class Casse_Brique : public QWidget
{
    Q_OBJECT

public:
    explicit Casse_Brique(QWidget *parent = nullptr);
    ~Casse_Brique();

private:
    Ui::Casse_Brique *ui;
};

#endif // CASSE_BRIQUE_H
