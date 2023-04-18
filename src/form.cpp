#include "form.h"


lgs::Form::Form(QWidget *parent)
    : QWidget(parent)
{

}

lgs::Form::~Form() noexcept
{ }

bool lgs::Form::isValid()
{
    return true;
}

QString lgs::Form::toJSON()
{
    return "";
}
