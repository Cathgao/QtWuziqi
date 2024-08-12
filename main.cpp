#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
//    w.setWindowFlags(Qt::FramelessWindowHint);
    w.showFullScreen();
//    w.setWindowFlags(Qt::CustomizeWindowHint);
//    w.showMaximized();
//    w.show();
    return a.exec();
}
