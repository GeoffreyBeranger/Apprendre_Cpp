#ifndef CASSEBRIQUE_H
#define CASSEBRIQUE_H

#include <QWidget>

namespace Ui {
class CasseBrique;
}

class CasseBrique : public QWidget
{
    Q_OBJECT

public:
    explicit CasseBrique(QWidget *parent = nullptr);
    ~CasseBrique();

private:
    Ui::CasseBrique *ui;
};

#endif // CASSEBRIQUE_H
