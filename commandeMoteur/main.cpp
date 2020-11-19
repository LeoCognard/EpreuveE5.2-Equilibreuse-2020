#include "equilibreuse.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Equilibreuse w;
    w.show();
    return a.exec();
}
