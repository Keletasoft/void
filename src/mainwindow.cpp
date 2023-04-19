#include "mainwindow.h"

lgs::MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->authentication = new lgs::component::Authentication(this);

    if(!this->authentication->isAuthenticated())
        this->setCentralWidget(this->authentication);


}

lgs::MainWindow::~MainWindow() noexcept
{ }
