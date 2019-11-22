#ifndef BANQUEMAINWINDOW_H
#define BANQUEMAINWINDOW_H

#include <QMainWindow>
#include "serveurbanque.h"

namespace Ui {
class BanqueMainWindow;
}

class BanqueMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit BanqueMainWindow(ServeurBanque* leServeur,QWidget *parent = nullptr);
    ~BanqueMainWindow();

private:
    Ui::BanqueMainWindow *ui;
    ServeurBanque* leServeur;
};

#endif // BANQUEMAINWINDOW_H
