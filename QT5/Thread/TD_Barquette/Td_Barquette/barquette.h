#ifndef BARQUETTE_H
#define BARQUETTE_H

#include <QWidget>

namespace Ui {
class barquette;
}

class barquette : public QWidget
{
    Q_OBJECT

public:
    explicit barquette(QWidget *parent = nullptr);
    ~barquette();

private:
    Ui::barquette *ui;
};

#endif // BARQUETTE_H
