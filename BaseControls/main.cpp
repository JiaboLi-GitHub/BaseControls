#include "BaseControls.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BaseControls w;
    w.show();
    return a.exec();
}
