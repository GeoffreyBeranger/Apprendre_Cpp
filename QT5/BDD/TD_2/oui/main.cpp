#include "bdd.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BDD w;
    w.show();

    return a.exec();
}
