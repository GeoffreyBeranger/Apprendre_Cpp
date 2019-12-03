#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include

namespace Ui {
class widget;
}

class widget : public QWidget
{
    Q_OBJECT

public:
    explicit widget(QWidget *parent = nullptr);
    ~widget();

private slots:
    void on_pushButton_Lancer_clicked();

private:
    Ui::widget *ui;
};

#endif // WIDGET_H
