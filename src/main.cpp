#include <QApplication>

// debug
#ifdef QT_DEBUG
#include <QDebug>
#endif

#include "mainwindow.h"

/**
 * @brief main
 * @param argc
 * @param argv
 * @return error code
 */
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // need auth
    lgs::MainWindow mainWindow;
    mainWindow.show();
    return app.exec();
}
