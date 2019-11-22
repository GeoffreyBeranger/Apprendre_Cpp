#include "serveurbanque.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ServeurBanque w;
    w.show();

    return a.exec();
}
