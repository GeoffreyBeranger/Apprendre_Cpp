#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "monthread.h"

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
    void on_pushButton_Threads_clicked();

private:
    Ui::widget *ui;
};

#endif // WIDGET_H
