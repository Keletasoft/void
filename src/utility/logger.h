#ifndef LOGGER_H
#define LOGGER_H
#include <QFile>
#include <QDateTime>
#include <QApplication>

#include "../global.h"

namespace lgs::utility {

/**
 * @brief The level of the line of logs
 */
enum class LEVEL_EC : quint8
{
    _INFO_,
    _WARNING_,
    _CRITICAL_,
    _DEBUG_,
};

/**
 * @brief An internal event logger)
 */
class Logger
{
    private :
        static bool debugLog;

    private :

        /**
         * @brief Archive the logs in an archive folder
         */
        static void archive();

    public :

        /**
         * @brief Enable debug logging
         * @param debug
         */
        static void setDebug(bool debug);

        /**
         * @brief Returned if debug logs are active
         * @return
         */
        static bool debug();

        /**
         * @brief Returns the log format
         * @param message
         * @return
         */
        static QString format(LEVEL_EC, const QString &message);

        /**
         * @brief Returns the log file start header
         * @return
         */
        static QString header();

        /**
         * @brief Write a log in the log file
         * @param message
         */
        static void log(LEVEL_EC, const QString &message);
};

} // END NAMESPACE lgs::utility

#endif // LOGGER_H
