#ifndef INTRO_H
#define INTRO_H

#include <QWidget>
#include <QFile>
#include <QDebug>
#include <QTextStream>
#include <QDataStream>
#include <QFileDialog>

namespace Ui {
class Intro;
}

class Intro : public QWidget
{
    Q_OBJECT

public:
    explicit Intro(QWidget *parent = nullptr);
    ~Intro();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Intro *ui;
};

#endif // INTRO_H
