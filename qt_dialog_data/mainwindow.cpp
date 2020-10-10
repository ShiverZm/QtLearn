#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "userAgeDialog.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setUserAge(int age)
{
    userAge = age;
}


void MainWindow::showUserAgeDialog(){
    UserAgeDialog *dialog = new UserAgeDialog(this);
    connect(dialog, &UserAgeDialog::userAgeChanged, this, &MainWindow::setUserAge);
    dialog->show();
}
