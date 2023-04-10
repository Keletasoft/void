#ifndef INSTANCE_H
#define INSTANCE_H

#include <QMutex>

namespace lgs::utility {

/**
 * @class Singleton
 * @brief Generic singleton
 */
template <typename T> struct Singleton
{
    /**
     * @fn  static T& instance
     * @brief Returns the static instance of type T
     *
     * @param void
     * @return T&
     */
    static T& instance() {
        static T instance;
        return instance;
    }
};

/**
 * @class SingletonT
 * @brief Multithreaded generic singleton with locking (by static QMutex)
 */
template <typename T> struct SingletonT
{

    public :

        /**
          * @fn  static T& instance
          * @brief Returns the static instance of type T
          *
          * @param void
          * @return T&
          */
        static T& instance()
        {
            static QMutex mutex;
            QMutexLocker mutexLocket(&mutex);

            static T instance;
            return instance;
        }
};

}; // END NAMESPACE lgs::utility

#endif // INSTANCE_H
