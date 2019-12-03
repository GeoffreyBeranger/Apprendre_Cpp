#ifndef INI_H
#define INI_H

#include <QWidget>
#include <QDebug>
#include <QFile>
#include <QFileInfo>
#include <QSettings>

namespace Ui {
class ini;
}

class ini : public QWidget
{
    Q_OBJECT

public:
    explicit ini(QWidget *parent = nullptr);
    ~ini();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ini *ui;
};

#endif // INI_H
