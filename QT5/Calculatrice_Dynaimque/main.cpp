#include "calculatricedynamique.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalculatriceDynamique w;
    w.show();

    return a.exec();
}
