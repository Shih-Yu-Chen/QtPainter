#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w(true);  // true 表示這是 server
    w.show();
    return a.exec();
}
