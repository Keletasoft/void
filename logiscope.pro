QT += widgets

#TODO
#ansible + auto build windows && aab | apk
#go build + assets

TRANSLATIONS = \
    assets/i18n/fr_FR.ts \
    assets/i18n/en_US.ts \

SOURCES += \
    src/component/authentication.cpp \
    src/component/camera.cpp \
    src/component/translator.cpp \
    src/form.cpp \
    src/main.cpp \
    src/mainwindow.cpp \
    src/translation.cpp \
    src/utility/logger.cpp

HEADERS += \
    src/component/authentication.h \
    src/component/camera.h \
    src/component/translator.h \
    src/db/manager.h \
    src/form.h \
    src/global.h \
    src/mainwindow.h \
    src/translation.h \
    src/utility/instance.h \
    src/utility/logger.h
