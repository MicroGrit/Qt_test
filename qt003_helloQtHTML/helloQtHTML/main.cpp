#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>

int main(int argc , char *argv[])
{
    QApplication app(argc,argv);

    QLabel *label = new QLabel("<h1> <font color=red>Hello</font> <br>Qt</br> </h1>");

    label->show();

    return app.exec();
}
