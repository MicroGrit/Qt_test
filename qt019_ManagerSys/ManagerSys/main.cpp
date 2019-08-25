#include "mainwindow.h"
#include <QApplication>
#include <QFile>
#include <QTextStream>
#include <QFont>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile file("://style/white.qss");
    if(file.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        QTextStream in(&file);
        QString style = in.readAll();
        file.close();
        qApp->setStyleSheet(style);
    }

    QFont seriFont("Times",12,QFont::Thin);
    a.setFont(seriFont);

    MainWindow w;
    w.show();

    return a.exec();
}
