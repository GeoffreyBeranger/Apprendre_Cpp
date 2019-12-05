#include "barquette.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    barquette w;
    w.show();

    return a.exec();
}
