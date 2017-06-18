#include <QApplication>
#include <QtWidgets>
#include <QString>
#include "mafenetre.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MaFenetre maFenetre(400, 150);

    maFenetre.show();

    return app.exec();
}
