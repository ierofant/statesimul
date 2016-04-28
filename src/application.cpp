#include "application.hpp"

application::application(int &argc, char **argv)
    : QApplication(argc, argv)
{

}

int application::exec()
{
    window.show();
    return QApplication::exec();
}
