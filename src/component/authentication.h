#ifndef AUTHENTICATION_H
#define AUTHENTICATION_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>

namespace lgs::component {

/**
 * @brief The Register class
 */
class Register : public QWidget
{
    Q_OBJECT

    private :
        QLineEdit *companyCode;
        QLineEdit *name;
        QLineEdit *email;
        QLineEdit *password;
        // ... etc

    public :
        /**
         * @brief Register
         * @param parent
         */
        Register(QWidget *parent = nullptr);

        /**
         * @brief ~Register
         */
        virtual ~Register() noexcept;

    private slots :

        /**
         * @brief checkRegister
         */
        void checkRegister();

    signals :

        /**
         * @brief succesful
         */
        void succesful();

        /**
         * @brief failled
         */
        void failled();
};

/**
 * @brief The Login class
 */
class Login : public QWidget
{
    Q_OBJECT

    private :
        QLineEdit *companyCode;
        QLineEdit *name;
        QLineEdit *email;
        QLineEdit *password;

    public :

        /**
         * @brief Login
         * @param parent
         */
        Login(QWidget *parent = nullptr);

        /**
         * @brief ~Login
         */
        virtual ~Login() noexcept;

    private slots :

        /**
         * @brief checkLogin
         */
        void checkLogin();

    signals :

        /**
         * @brief succesful
         */
        void succesful();

        /**
         * @brief failled
         */
        void failled();
};

/**
 * @brief Authentication tab
 */
class Authentication : public QWidget
{
    Q_OBJECT

    private :
        Register *registerWidget;
        Login *LoginWidget;

    public :

        /**
         * @brief Authentication
         * @param parent
         */
        Authentication(QWidget *parent = nullptr);

        /**
         * @brief ~Authentication
         */
        virtual ~Authentication() noexcept;

        /**
         * @brief isAuthenticated
         * @return
         */
        bool isAuthenticated() const;

    private slots :

        /**
         * @brief next
         */
        void registerSucces();

        /**
         * @brief loginSucces
         */
        void loginSucces();
};


} // END NAMESPACE lgs::component

#endif // AUTHENTICATION_H
