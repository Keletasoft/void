#include "authentication.h"

//////////////////////////////////////////////////////////////////////////////////////////

lgs::component::Register::Register(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *mainLayout = new QVBoxLayout(this);

    this->companyCode = new QLineEdit(this);
    mainLayout->addWidget(this->companyCode);

    this->name = new QLineEdit(this);
    mainLayout->addWidget(this->name);

    this->email = new QLineEdit(this);
    mainLayout->addWidget(this->email);

    this->password = new QLineEdit(this);
    mainLayout->addWidget(this->password);
}
lgs::component::Register::~Register() noexcept
{ }

void lgs::component::Register::checkRegister()
{

}

//////////////////////////////////////////////////////////////////////////////////////////

lgs::component::Login::Login(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *mainLayout = new QVBoxLayout(this);

    this->companyCode = new QLineEdit(this);
    mainLayout->addWidget(this->companyCode);

    this->name = new QLineEdit(this);
    mainLayout->addWidget(this->name);

    this->email = new QLineEdit(this);
    mainLayout->addWidget(this->email);

    this->password = new QLineEdit(this);
    mainLayout->addWidget(this->password);
}

lgs::component::Login::~Login() noexcept
{ }

void lgs::component::Login::checkLogin()
{

}

//////////////////////////////////////////////////////////////////////////////////////////

lgs::component::Authentication::Authentication(QWidget *parent)
    : QWidget(parent)
{

}

lgs::component::Authentication::~Authentication() noexcept
{ }

bool lgs::component::Authentication::isAuthenticated() const
{
    return false;
}

void lgs::component::Authentication::registerSucces()
{

}

void lgs::component::Authentication::loginSucces()
{

}
