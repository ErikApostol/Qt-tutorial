#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
    class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    QString name() const;
    void setName(const QString &name);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
