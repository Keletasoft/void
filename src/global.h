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

    const QString PATH = QApplication::applicationDirPath();

    const QString ASSETS = PATH + "/assets";

    const QString CONFIG = ASSETS + "/config";
    const QString I18N = CONFIG + "/i18n";

    const QString IMG = ASSETS + "/img";

    const QString STYLE = ASSETS + "/img";

    const QString DATA = ASSETS + "/data";

    const QString TMP = ASSETS + "/tmp";

} // END NAMESPACE lgs

#endif // GLOBAL_H
