#include "test001.h"

#include <QApplication>
#pragma comment(lib, "user32.lib")

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    test001 w;
    w.show();
    return a.exec();
}