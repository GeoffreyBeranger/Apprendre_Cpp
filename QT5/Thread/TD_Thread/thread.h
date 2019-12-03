#ifndef THREAD_H
#define THREAD_H

#include <QWidget>

namespace Ui {
class Thread;
}

class Thread : public QWidget
{
    Q_OBJECT

public:
    explicit Thread(QWidget *parent = nullptr);
    ~Thread();

private:
    Ui::Thread *ui;
};

#endif // THREAD_H
