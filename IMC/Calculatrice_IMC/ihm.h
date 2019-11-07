#ifndef IHM_H
#define IHM_H

#include <QWidget>

namespace Ui {
class IHM;
}

class IHM : public QWidget
{
    Q_OBJECT

public:
    explicit IHM(QWidget *parent = nullptr);
    ~IHM();

private slots:
    void on_pushButton_suite_clicked();

    void on_pushButton_Devine_clicked();

    void on_pushButton_Lorentz_clicked();

    void on_pushButton_Lorentz_Age_clicked();

private:
    Ui::IHM *ui;
    void afficherInfos();
    double poids;
    double taille;
    QString nom;
    QString prenom;
    int age;
    static const int NBIMC = 6;
    static const int NBCORPULENCE = 7;
};

#endif // IHM_H
