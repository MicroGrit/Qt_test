#include "ratiobutton.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RatioButton w;
    w.show();

    return a.exec();
}
