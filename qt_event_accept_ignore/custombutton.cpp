#include <custombutton.h>
#include <QDebug>

// ---------- custombutton.cpp ---------- //
CustomButton::CustomButton(QWidget *parent) :
    QPushButton(parent)
{
    connect(this, &CustomButton::clicked,
            this, &CustomButton::onButtonCliecked);
}

void CustomButton::mousePressEvent(QMouseEvent *event)
{
//    if (event->button() == Qt::LeftButton) {
//        qDebug() << "left";
//    } else {
//        QPushButton::mousePressEvent(event);
//    }

    qDebug() << "CustomButton";
}

void CustomButton::onButtonCliecked()
{
    qDebug() << "You clicked this!";
}
