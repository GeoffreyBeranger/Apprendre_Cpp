#include "oui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    oui w;
    w.show();

    return a.exec();
}
