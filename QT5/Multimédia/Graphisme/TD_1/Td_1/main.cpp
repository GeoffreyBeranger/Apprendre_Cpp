#include "oui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Oui w;
    w.show();

    return a.exec();
}
