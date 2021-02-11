#include <QApplication>
#include <QStyleFactory>
#include <QDebug>

#include "MainWindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qDebug() << QStyleFactory::keys().join(" ");
    MainWindow mw;
    mw.show();
    return a.exec();
}