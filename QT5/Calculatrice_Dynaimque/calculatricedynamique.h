#ifndef CALCULATRICEDYNAMIQUE_H
#define CALCULATRICEDYNAMIQUE_H

#include <QWidget>

namespace Ui {
class CalculatriceDynamique;
}

class CalculatriceDynamique : public QWidget
{
    Q_OBJECT

public:
    explicit CalculatriceDynamique(QWidget *parent = nullptr);
    ~CalculatriceDynamique();

private:
    Ui::CalculatriceDynamique *ui;
};

#endif // CALCULATRICEDYNAMIQUE_H
