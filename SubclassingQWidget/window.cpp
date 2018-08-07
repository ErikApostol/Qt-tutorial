#include "window.h"
#include <QWidget>

Window::Window(QWidget *parent) : QWidget(parent)
{
    this->setFixedSize(200, 100);

    this->button = new QPushButton("HelloWorld", this);
    this->button->setGeometry(10, 10, 100, 50);
};
