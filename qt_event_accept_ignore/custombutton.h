#ifndef CUSTOMBUTTON_H
#define CUSTOMBUTTON_H


#include <QPushButton>
#include <QMouseEvent>
#include <QDebug>
#include <QMainWindow>
#include <QVBoxLayout>

class CustomButton :public QPushButton
{
Q_OBJECT
public:
   CustomButton(QWidget *parent = 0);
protected:
   void mousePressEvent(QMouseEvent *event);
private:
   void onButtonCliecked();
};


class CustomButtonEx : public CustomButton
{
    Q_OBJECT
public:
    CustomButtonEx(QWidget *parent) : CustomButton(parent)
    {
    }
protected:
    void mousePressEvent(QMouseEvent *event)
    {

        qDebug() << "CustomButtonEx";
    }
};

class CustomWidget : public QWidget
{
    Q_OBJECT
public:
    CustomWidget(QWidget *parent) : QWidget(parent)
    {
    }
protected:
    void mousePressEvent(QMouseEvent *event)
    {

        qDebug() << "CustomWidget";
        //QWidget::mousePressEvent(event);
        event->ignore();
    }
};

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0) : QMainWindow(parent)
    {
        CustomWidget *widget = new CustomWidget(this);
        CustomButton *cbex = new CustomButton(widget);
        cbex->setText(tr("CustomButton"));
        CustomButtonEx *cb = new CustomButtonEx(widget);
        cb->setText(tr("CustomButtonEx"));
        QVBoxLayout *widgetLayout = new QVBoxLayout(widget);
        widgetLayout->addWidget(cbex);
        widgetLayout->addWidget(cb);
        this->setCentralWidget(widget);
    }
protected:
    void mousePressEvent(QMouseEvent *event)
    {
        qDebug() << "MainWindow";
    }
};

#endif // CUSTOMBUTTON_H
