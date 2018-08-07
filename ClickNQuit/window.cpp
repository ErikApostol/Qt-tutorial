#include "window.h"
#include <QWidget>
#include <QPushButton>
#include <QApplication>

Window::Window(QWidget *parent) : QWidget(parent)
{
    this->setFixedSize(120, 50);

    QPushButton *m_button = new QPushButton("Click to Close", this);
    m_button->setGeometry(10, 10, 100, 30);

    connect(m_button, SIGNAL (clicked()), QApplication::instance(), SLOT (quit()));
}
