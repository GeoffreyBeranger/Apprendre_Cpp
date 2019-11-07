#ifndef CALCULATRICESD_H
#define CALCULATRICESD_H

#include <QWidget>

namespace Ui {
class CalculatriceSd;
}

class CalculatriceSd : public QWidget
{
    Q_OBJECT

public:
    explicit CalculatriceSd(QWidget *parent = nullptr);
    ~CalculatriceSd();

private:
    Ui::CalculatriceSd *ui;
};

#endif // CALCULATRICESD_H
