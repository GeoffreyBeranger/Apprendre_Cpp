#include "multiserveur.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MultiServeur w;
    w.show();

    return a.exec();
}
