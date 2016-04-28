#include "application.hpp"

int main(int argc, char *argv[])
{
    application app(argc, argv);
    QCoreApplication::setApplicationName("StateSimul");
    return app.exec();
}