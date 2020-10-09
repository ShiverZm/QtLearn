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
    setWindowTitle(tr("Main Window"));

    openAction = new QAction(QIcon(":/images/doc-open"), tr("&Open..."), this);
    openAction->setShortcuts(QKeySequence::Open);
    openAction->setStatusTip(tr("Open an existing file"));
    connect(openAction, &QAction::triggered, this, &MainWindow::open);

    QMenu *file = menuBar()->addMenu(tr("&File"));
    file->addAction(openAction);

    QToolBar *toolBar = addToolBar(tr("&File"));
    toolBar->addAction(openAction);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::open()
{
    /*** stack create dialog

    //QDialog dialog(this);// have parent,just fix on the MainWindow
    QDialog dialog;//no parent ,this dialog can be put on anywhere
    dialog.setWindowTitle(tr("Hello, dialog!"));
    //dialog.exec();// program level model dialog
    //dialog.open();// window level model dialog
    dialog.show();// anti-model dialog

    ***/


//    QDialog* ptrDialog = new QDialog(this);
//    ptrDialog->setWindowTitle("hello,dialog!");
//    ptrDialog->open();

    QDialog *dialog = new QDialog;
    dialog->setAttribute(Qt::WA_DeleteOnClose);//destory on closed
    dialog->setWindowTitle(tr("Hello, dialog!"));
    dialog->show();
}


