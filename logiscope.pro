QT += widgets

#TODO
#ansible + auto build windows && aab | apk
#go build + assets

TRANSLATIONS = \
    assets/i18n/fr_FR.ts \
    assets/i18n/en_US.ts \

SOURCES += \
    src/component/authentication.cpp \
    src/main.cpp \
    src/mainwindow.cpp \
    src/translation.cpp

HEADERS += \
    src/component/authentication.h \
    src/db/manager.h \
    src/global.h \
    src/mainwindow.h \
    src/translation.h \
    src/utility/instance.h
