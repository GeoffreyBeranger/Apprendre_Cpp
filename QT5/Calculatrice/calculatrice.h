#ifndef CALCULATRICE_H
#define CALCULATRICE_H
#include <QScriptEngine>
#include <QString>

#include <QWidget>

namespace Ui {
class calculatrice;
}

class calculatrice : public QWidget
{
    Q_OBJECT

public:
    explicit calculatrice(QWidget *parent = nullptr);
    ~calculatrice();

private slots:
    void on_pushButton0_9_clicked();

    void on_pushButton0_8_clicked();

    void on_pushButton0_7_clicked();

    void on_pushButton0_6_clicked();

    void on_pushButton0_5_clicked();

    void on_pushButton0_4_clicked();

    void on_pushButton0_3_clicked();

    void on_pushButton0_2_clicked();

    void on_pushButton0_1_clicked();

    void on_pushButton0_clicked();

    void on_pushButton_Plus_clicked();

    void on_pushButton_Moins_clicked();

    void on_pushButton_Multiplier_clicked();

    void on_pushButton_DIviser_clicked();

    void on_pushButton_Egal_clicked();

    void on_pushButton_Clear_clicked();

private:
    Ui::calculatrice *ui;
};

#endif // CALCULATRICE_H
