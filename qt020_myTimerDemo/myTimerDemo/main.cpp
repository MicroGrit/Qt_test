#include "mytimerwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myTimerWidget w;
    w.show();

    return a.exec();
}
