#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>


int main(int argc,char *argv[])
{
    QApplication app(argc,argv);
    QPushButton *button = new QPushButton("退出!");
    QObject::connect(button,SIGNAL(clicked(bool)),&app,SLOT(quit()));
    button->show();

    return app.exec();
}
