#include <QCoreApplication>
#include "monthread.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    MonThread *tab[5];
    for (int i = 0;i<5;i++)
    {

        tab[i] = new MonThread("Thread"+QString::number(i));
        tab[i]->start();

    }



    return a.exec();
}
