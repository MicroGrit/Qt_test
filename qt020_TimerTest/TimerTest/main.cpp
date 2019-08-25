#include "mytimer.h"
#include <QApplication>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myTimer w;
    w.show();

//    QTimer::singleShot(5000,&a,SLOT(quit()));

    return a.exec();
}
