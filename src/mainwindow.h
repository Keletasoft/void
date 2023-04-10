#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>

/**
 * @namespace lgs
 */
namespace lgs {

/**
 * @brief The MainWindow class
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

    public :

        /**
         * @brief MainWindow
         * @param parent
         */
        MainWindow(QWidget *parent = nullptr);

        /**
         * @brief ~MainWindow
         */
        virtual ~MainWindow() noexcept;

};

}; // END NAMESPACE lgs

#endif // MAINWINDOW_H
