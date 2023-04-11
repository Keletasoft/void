#include <QApplication>

// debug
#ifdef QT_DEBUG
#include <QDebug>
#endif

#include "mainwindow.h"
#include "translation.h"
#include "utility/instance.h"

/**
 * @brief main
 * @param argc
 * @param argv
 * @return error code
 */
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    lgs::utility::Singleton<lgs::Translation> translation;
    translation.instance();

    // need auth
    lgs::MainWindow mainWindow;
    mainWindow.show();
    return app.exec();
}
