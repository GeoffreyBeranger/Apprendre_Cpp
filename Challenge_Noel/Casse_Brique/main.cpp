#include "cassebrique.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CasseBrique w;
    w.show();

    return a.exec();
}
