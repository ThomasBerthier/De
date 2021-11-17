#include "Affichage.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Affichage w;
    w.show();
    return a.exec();
}
