#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QAction>
#include <QMenuBar>
#include <QMessageBox>
#include <QStatusBar>
#include <QToolBar>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    setWindowTitle(tr("Main Window"));//设置标题

    openAction = new QAction(QIcon(":/images/doc-open"), tr("&Open..."), this); //创建动作 图标 文字 Qobject
    openAction->setShortcuts(QKeySequence::Open);//设置快捷键  QKeySequence::Open 代表Ctrl+O  QKeySequence类来添加快捷键，会根据平台的不同来定义相应的快捷键。
    openAction->setStatusTip(tr("Open an existing file"));//设置鼠标滑过提示
    connect(openAction, &QAction::triggered, this, &MainWindow::open);//连接信号槽 openAction triggered时 触发主窗口打开open动作

    QMenu *file = menuBar()->addMenu(tr("&File")); //添加菜单栏 菜单File
    file->addAction(openAction);//菜单栏 添加动作

    QToolBar *toolBar = addToolBar(tr("&File"));//添加工具栏 工具File
    toolBar->addAction(openAction);//工具栏添加 动作file

    statusBar();//底部边栏 显示提示信息 statusTip
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::open()
{
    QMessageBox::information(this, tr("Information"), tr("Open"));//打开提示MessageBox
}
