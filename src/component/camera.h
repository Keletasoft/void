#ifndef CAMERA_H
#define CAMERA_H
#include <QWidget>
#include <QPushButton>

/**
 * @namespace lgs::component
 */
namespace lgs::componnent
{

/**
 * @brief The Camera class
 */
class Camera : public QWidget
{
    Q_OBJECT

    private :
        QPushButton *take;


    public :

        /**
         * @brief Camera
         * @param parent
         */
        Camera(QWidget *parent = nullptr);

        /**
         * @brief ~Camera
         */
        virtual ~Camera() noexcept;

    public :

        /**
         * @brief move
         */
        void move() const;
};

} // END NAMESPACE lgs::camera

#endif // CAMERA_H
