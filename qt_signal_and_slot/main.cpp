#include "mainwindow.h"

#include <QApplication>
#include <QPushButton>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
//    MainWindow w;
//    w.setWindowTitle("signal_and_slot");

    QPushButton button("Quit");

    /*qt5 写法*/
//    QObject::connect(&button, &QPushButton::clicked,
//    &app, &QApplication::quit);


    /*qt5使用lambda表达式写法*/
    QObject::connect(&button, &QPushButton::clicked,
    [](bool) {
        qDebug() << "You clicked me!";
    });

    button.show();
//    w.show();

    return app.exec();
}
