
#include "paintedWidget.h"

PaintedWidget::PaintedWidget(QWidget *parent) :
    QWidget(parent)
{
    resize(800, 600);//设置了窗口的大小和标题
    setWindowTitle(tr("Paint Demo"));
}

void PaintedWidget::paintEvent(QPaintEvent *) //绘制
{
    QPainter painter(this);
//    painter.drawLine(80, 100, 650, 500);
//    painter.setPen(Qt::red);
//    painter.drawRect(10, 10, 100, 400);
//    painter.setPen(QPen(Qt::green, 5));
//    painter.setBrush(Qt::blue);
//    painter.drawEllipse(50, 150, 400, 200);

    QPen pen(Qt::green, 3, Qt::DotLine, Qt::RoundCap, Qt::RoundJoin);
    painter.setPen(pen);

    QRadialGradient gradient(50, 50, 50, 50, 50);
    gradient.setColorAt(0, QColor::fromRgbF(0, 1, 0, 1));
    gradient.setColorAt(1, QColor::fromRgbF(0, 0, 0, 0));

    QBrush brush(gradient);
    brush.setColor(Qt::blue);

    painter.setBrush(brush);
    painter.drawEllipse(50, 150, 400, 200);
}


