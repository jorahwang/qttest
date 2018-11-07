#include "mainwindow.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;


    qDebug("w=%d, h=%d", w.geometry().x(),w.geometry().y());

    w.show();



    return a.exec();
}
