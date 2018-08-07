#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    QPushButton button;
    button.setWindowTitle("test <2>");
    button.setText("A very nice and pretty button");
    button.setToolTip("Click on this button is nice !");
    QFont font("Courier New", 14, 70, true);
    button.setFont(font);
    button.setIcon(QIcon::fromTheme("face-smile"));
    button.show();

    return app.exec();
}
