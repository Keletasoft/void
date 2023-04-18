#include "translator.h"


lgs::component::Translator::Translator(QWidget *parent)
    : QWidget(parent)
{

}

lgs::component::Translator::~Translator() noexcept
{

}


QStringList lgs::component::Translator::translation() const
{
    QDir dir(lgs::global::I18N);

    return {};
}

bool lgs::component::Translator::isValid(const QString &locale)
{
    (void)locale;
    return true;
}
