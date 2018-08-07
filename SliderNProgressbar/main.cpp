#include <QApplication>
#include <QWidget>
#include <QSlider>
#include <QProgressBar>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    QWidget window;
    window.setFixedSize(200, 90);

    QSlider slider(&window);
    slider.setOrientation(Qt::Horizontal);
    slider.setRange(0, 100);
    slider.setValue(0);
    slider.setGeometry(20, 50, 160, 20);

    QProgressBar progressbar(&window);
    progressbar.setRange(0, 100);
    progressbar.setValue(0);
    progressbar.setGeometry(20, 20, 160, 20);

    QObject::connect(&slider, SIGNAL (valueChanged(int)), &progressbar, SLOT (setValue(int)));

    window.show();

    return app.exec();
}
