#ifndef OUI_H
#define OUI_H

#include <QWidget>

namespace Ui {
class oui;
}

class oui : public QWidget
{
    Q_OBJECT

public:
    explicit oui(QWidget *parent = nullptr);
    ~oui();

private:
    Ui::oui *ui;
};

#endif // OUI_H
