#ifndef GLOBAL_H
#define GLOBAL_H
#include <QApplication>
#include <QStringView>

/**
 * @brief Global path
 * PATH -> app dir path
 * ASSETS -> assets dir
 * CONFIG -> app config
 * I18N -> app translation (qm)
 * IMG -> app img (img_96x64 = img_x_y)
 * STYLE -> app style (css/qcss)
 * DATA -> transaction data
 * TMP -> temporary data
 */
namespace lgs::global {

    static const QString ASSETS = "/assets";

    static const QString CONFIG = ASSETS + "/config";
    static const QString I18N = CONFIG + "/i18n";

    static const QString IMG = ASSETS + "/img";

    static const QString STYLE = ASSETS + "/style";

    static const QString DATA = ASSETS + "/data";

    static const QString TMP = ASSETS + "/tmp";

    static const QString LOG = ASSETS + "/logs";

} // END NAMESPACE lgs::global



#endif // GLOBAL_H
