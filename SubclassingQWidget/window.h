#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QPushButton>

class Window : public QWidget
{
public:
    Window(QWidget *parent = 0);
private:
    QPushButton *button;
};

#endif // WINDOW_H
