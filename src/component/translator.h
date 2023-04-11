#ifndef TRANSLATOR_H
#define TRANSLATOR_H
#include <QWidget>
#include <QStringList>

/**
 * @namespace lgs::component
 */
namespace lgs::component {

/**
 * @brief The Translator class
 */
class Translator : public QWidget
{
    Q_OBJECT

    public :
        Translator(QWidget *parent = nullptr);
        virtual ~Translator() noexcept;

    public :
        QStringList translation() const;
        bool isValid(const QString &locale);

    signals :
        void change(QLocale local)
};

} // END NAMESPACE lgs::component

#endif // TRANSLATOR_H
