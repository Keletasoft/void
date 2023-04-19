#include "logger.h"


bool lgs::utility::Logger::debugLog = true;

void lgs::utility::Logger::archive()
{

}

void lgs::utility::Logger::setDebug(bool debug)
{
    (void)debug;
}

bool lgs::utility::Logger::debug()
{
    return false;
}

QString lgs::utility::Logger::format(LEVEL_EC level_ec, const QString &message)
{
    QString level;
    switch (level_ec)
    {
        case LEVEL_EC::_DEBUG_ : level = QStringLiteral("DEBUG"); break;
        case LEVEL_EC::_INFO_ : level = QStringLiteral("INFORMATION"); break;
        case LEVEL_EC::_WARNING_ : level = QStringLiteral("WARNING"); break;
        case LEVEL_EC::_CRITICAL_ : level = QStringLiteral("CRITICAL"); break;
        default : level = QStringLiteral("UNKNOWN");
    }

    return QString(
        "[" + QDateTime::currentDateTimeUtc().toString("yyyy/MM/dd hh:mm:ss.zzz") + "]" +
        "[" + level + "]" +
        message + "\n"
    );
}

QString lgs::utility::Logger::header()
{
    return QString(
        "\t\t" + QApplication::tr("Logiscope software log file") + "\n" +
        QApplication::tr("Created on ") + QDateTime::currentDateTime().toString("yyyy/MM/dd hh:mm:ss.zzz") + "\n" +
        QApplication::tr("The format of the log -> [datetime] [log level] message") + "\n\n"
    );
}

void lgs::utility::Logger::log(LEVEL_EC level_ec, const QString &message)
{
    QFile file(QApplication::applicationDirPath() + lgs::global::LOG + "/log.txt");
    if (file.open(QIODevice::ReadWrite | QIODevice::Append | QIODevice::Text))
    {
        QTextStream stream(&file);
        if(file.size() == 0)
            stream << Logger::header();

        stream <<Logger::format(level_ec, message);
    }
}
