#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

class QPushButton;
class Window : public QWidget
{
    Q_OBJECT
    public:
       explicit Window(QWidget *parent = 0);
    signals:
       void counterReached();
       /* You don't need to implement signal
        * functions. They look like functions,
        * but they are only empty shells, used
        * only to transmit the "parameters".*/
    private slots:
       void slotButtonClicked(bool checked);
    private:
       int m_counter;
       QPushButton *m_button;
};

#endif // WINDOW_H
