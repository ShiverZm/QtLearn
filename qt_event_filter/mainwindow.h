#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow();

    ~MainWindow();
protected:
     bool eventFilter(QObject *obj, QEvent *event);

private:
    Ui::MainWindow *ui;
    QTextEdit *textEdit;
};
#endif // MAINWINDOW_H
