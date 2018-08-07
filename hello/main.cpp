#include <QApplication>
#include <QPushButton>

/*
 * Qt: can't find -lGL error
 * Install package "libgl1-mesa-dev":
 * sudo apt-get install libgl1-mesa-dev */

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    QPushButton button ("Hello world !");
    button.show();

    return app.exec();
}
