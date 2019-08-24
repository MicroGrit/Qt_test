#include "mytreewidget.h"
#include <QApplication>
#include <QFile>
void setStyleSheet()
{
//    QFile file("../StyleSheet/"+styleSheetName+".css");
    QFile file("://StyleSheet/styleSheet.css");
    file.open(QFile::ReadOnly);
    QString css =file.readAll(); //QString::fromLatin1(file.readAll());
    qApp->setStyleSheet(css);
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    setStyleSheet();
    myTreeWidget w;
    w.show();

    return a.exec();
}
