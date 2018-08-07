#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <string>

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    QWidget window;
    window.setFixedSize(450, 100);

    QPushButton button1("", &window);
    button1.setText("\n\nA very nice and pretty button");
    button1.setToolTip("Click on this button is nice !");
    QFont font1("Courier New", 14, 70, true);
    button1.setFont(font1);
    button1.setIcon(QIcon::fromTheme("face-smile"));
    //button1.show();
    button1.setGeometry(10, 10, 400, 88);

    QPushButton button2("", &button1);
    button2.setText("Hello world !");
    QFont font2("Arial", 12, 10, false);
    button2.setFont(font2);
    //button2.show();
    button2.setGeometry(5, 5, 90, 20);

    window.show();

    return app.exec();
}
