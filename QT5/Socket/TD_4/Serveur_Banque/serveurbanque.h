#ifndef SERVEURBANQUE_H
#define SERVEURBANQUE_H

#include <QWidget>

namespace Ui {
class ServeurBanque;
}

class ServeurBanque : public QWidget
{
    Q_OBJECT

public:
    explicit ServeurBanque(QWidget *parent = nullptr);
    ~ServeurBanque();

private:
    Ui::ServeurBanque *ui;
};

#endif // SERVEURBANQUE_H
