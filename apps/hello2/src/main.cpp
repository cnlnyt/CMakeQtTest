#include "hello2.h"

#include <QApplication>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    Hello2 window;
    window.show();
    return app.exec();
}
