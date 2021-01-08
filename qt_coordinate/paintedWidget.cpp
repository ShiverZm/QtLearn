
#include "paintedWidget.h"
#include <QBitmap>
#include <QPicture>

PaintedWidget::PaintedWidget(QWidget *parent) :
    QWidget(parent)
{
    resize(600, 400);//设置了窗口的大小和标题
    setWindowTitle(tr("Paint Demo"));
}

void PaintedWidget::paintEvent(QPaintEvent *) //绘制
{
    //QPainter painter(this);
    //painter.setWindow(0, 0, 200, 200);// 400*unit1*400*unit1 = 200*unit2*200**unit2    unit1:unit2 = 1:2


    //painter.setWindow(0, 0, 400, 400);
//    painter.setViewport(0, 0, 200, 200);// 400*unit2*400*unit2 = 200*200   unit2:1 = 0.5
//    painter.fillRect(0, 0, 200, 200, Qt::red);  //200*0.5 *200*0.5 = 100*100

//        QString strPngFilePath = "/home/shive/workspace/qt/QtLearn/qt_coordinate/images/qt-codesample.png";
//        QString strPngFilePath2 = "/home/shive/workspace/qt/QtLearn/qt_coordinate/images/qt-codesample.png";
//       QPainter painter(this);
//       QPixmap pixmap(strPngFilePath);
//       QBitmap bitmap(strPngFilePath);
//       painter.drawPixmap(10, 10, 250, 125, pixmap);
//       painter.drawPixmap(270, 10, 250, 125, bitmap);
//       QPixmap whitePixmap(strPngFilePath);
//       QImage whiteQImage(strPngFilePath)
//       //QBitmap whiteBitmap(strPngFilePath);
//       painter.drawPixmap(10, 140, 250, 125, whitePixmap);
//       //painter.drawPixmap(270, 140, 250, 125, whiteBitmap);
//       painter.drawImage(270,140,250,125,whiteQImage);


//    QPicture picture;
//    QPainter painter;
//    painter.begin(&picture);             // 在 picture 进行绘制
//    painter.drawEllipse(10, 20, 80, 70); // 绘制一个椭圆
//    painter.end();                       // 绘制完成
//    picture.save("drawing.jpg");         // 保存 picture

    QPicture pic;
    pic.load("/home/shive/workspace/qt/QtLearn/qt_coordinate/images/drawing.jpg");

    QPainter p(this);
    p.drawPicture(0,0,pic);
}





