#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    QWidget window;
    window.setFixedSize(100, 80);

    QPushButton *buttonInfo = new QPushButton("Info", &window);
    buttonInfo->setGeometry(10, 10, 80, 30);
    buttonInfo->setIcon(QIcon::fromTheme("dialog-information"));

    QPushButton *buttonQuit = new QPushButton("Quit", &window);
    buttonQuit->setGeometry(10, 40, 80, 30);
    buttonQuit->setIcon(QIcon::fromTheme("application-exit"));

    window.show();

    // Add your code here
    // connect in classes needs Q_OBJECT macro
    //         in main function needs QObject::
    QObject::connect(buttonInfo, SIGNAL (clicked()), &app, SLOT (aboutQt()));
    QObject::connect(buttonQuit, SIGNAL (clicked()), &app, SLOT (quit()));
    // For more icons, https://specifications.freedesktop.org/icon-naming-spec/icon-naming-spec-latest.html

    return app.exec();
}

