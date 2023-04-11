#ifndef TRANSLATION_H
#define TRANSLATION_H
#include <QLocale>
#include <QApplication>

/**
 * @namespace lgs
 */
namespace lgs {

/**
 * @brief The Translation class
 */
class Translation : public QObject
{
    Q_OBJECT

    public :
        Translation(QObject *parent = nullptr);
        virtual ~Translation() noexcept;

    public :
        void load();

};

} // END NAMESPACE lgs

#endif // TRANSLATION_H
