#include <QCoreApplication>
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    QSqlDatabase bd;
    bd = QSqlDatabase::addDatabase("QMYSQL");
    bd.setHostName("172.18.58.14");
    bd.setDatabaseName("france2015plus");
    bd.setUserName("snir");
    bd.setPassword("snir");
    if (!bd.open())
    {

        qDebug() << "pb acces bd" << bd.lastError();

    }else {

        qDebug() << "acces bd ok" ;
        QSqlQuery requete("select departement_nom from departements");
        if(!requete.exec())
        {
            qDebug() << "pb requete" << requete.lastError();
        }else {

            qDebug() << "nomdre departements : " << requete.size();

            QString nomDepartement;
            while(requete.next())
            {

                nomDepartement = requete.value("departement_nom").toString();
                qDebug() << nomDepartement;

            }
        }

        QSqlQuery requetePrepare;
        requetePrepare.prepare("select departement_nom from departements where departements_region_id = :idr;");
        requetePrepare.bindValue(":idr",5);
        if(!requetePrepare.exec())
        {

            qDebug() << "Pb execution requete" << requetePrepare.prepare(":idr");

        }else {
            {

                qDebug() << "Nombre de departements dans la region : " << requetePrepare.size();
                QString nomDep;
                while(requetePrepare.next())
                {

                   nomDep = requetePrepare.value("departement_nom").toString();
                   qDebug() << nomDep;

                }

            }
        }

    }



    return a.exec();
}
