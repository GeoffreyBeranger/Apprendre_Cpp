#include "affichage_brique.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Affichage_Brique w;
    w.show();

    return a.exec();
}
