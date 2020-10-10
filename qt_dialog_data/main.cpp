#include "mainwindow.h"

#include <QApplication>

#include <QDebug>


/***
 *
 *
 *  code means
 *  when close the dialog,will change userAge, and emit some message ;
 *
***/
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.show();
    w.showUserAgeDialog();

    a.exec();

    qDebug()<<w.userAge;

    return 0;
}
