#ifndef BANQUE_H
#define BANQUE_H

#include <QWidget>

namespace Ui {
class Banque;
}

class Banque : public QWidget
{
    Q_OBJECT

public:
    explicit Banque(QWidget *parent = nullptr);
    ~Banque();

private:
    Ui::Banque *ui;
};

#endif // BANQUE_H
