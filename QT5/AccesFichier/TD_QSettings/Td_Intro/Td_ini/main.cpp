#include "ini.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ini w;
    w.show();

    return a.exec();
}
