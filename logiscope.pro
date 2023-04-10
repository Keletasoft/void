QT += widgets

#TODO
#ansible + auto build windows && aab | apk
#go build + assets

SOURCES += \
    src/component/authentication.cpp \
    src/main.cpp \
    src/mainwindow.cpp

HEADERS += \
    src/component/authentication.h \
    src/db/manager.h \
    src/mainwindow.h \
    src/utility/instance.h
