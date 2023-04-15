#ifndef FORM_H
#define FORM_H
#include <QWidget>

/**
 * @namespace lgs
 */
namespace lgs {

/**
 * @brief The Form class
 */
class Form
{
    Q_OBJECT

    public :

        /**
         * @brief Form
         * @param parent
         */
        Form(QWidget *parent = nullptr);

        /**
         * @brief ~Form
         */
        virtual ~Form() noexcept;

    public :

        /**
         * @brief isValid
         * @return
         */
        bool isValid();

        /**
         * @brief toJSON
         * @return
         */
        QString toJSON();

    signals :

        /**
         * @brief send
         * @param json
         */
        void send(const QString &json);
};

} // END NAMESPACE lgs

#endif // FORM_H
