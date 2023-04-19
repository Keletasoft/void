#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>

#include "component/authentication.h"
#include "form.h"

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

    private :
       lgs::component::Authentication *authentication;
       lgs::Form *form;

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
