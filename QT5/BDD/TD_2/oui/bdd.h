#ifndef BDD_H
#define BDD_H

#include <QWidget>
#include <QCoreApplication>
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QString>

namespace Ui {
class BDD;
}

class BDD : public QWidget
{
    Q_OBJECT

public:
    explicit BDD(QWidget *parent = nullptr);
    ~BDD();
    QSqlDatabase bd;


private slots:
    void on_pushButton_ObtenirNom_clicked();

    void on_comboBox_Region_currentIndexChanged(int index);

    void on_comboBox_Departement_currentIndexChanged(int index);
private:
    Ui::BDD *ui;
};

#endif // BDD_H
