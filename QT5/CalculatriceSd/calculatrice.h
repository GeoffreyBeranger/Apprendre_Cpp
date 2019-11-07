#ifndef CALCULATRICE_H
#define CALCULATRICE_H
#include <QScriptEngine>
#include <QString>
#include <QPushButton>

#include <QWidget>

namespace Ui {
class Calculatrice;
}

class Calculatrice : public QWidget
{
    Q_OBJECT

public:
    explicit Calculatrice(QWidget *parent = nullptr);
    ~Calculatrice();

private slots:
    void on_pushButton_Egal_clicked();

    void on_pushButton_Clear_clicked();

    void on_QPushButtonClicked();

private:
    Ui::Calculatrice *ui;
    QPushButton *touche;
};

#endif // CALCULATRICE_H
