#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <QApplication>
#include "main_window.hpp"

class application : public QApplication
{
    Q_OBJECT

public:
    application(int &argc, char **argv);

    int exec();

private:
    main_window window;
};

#endif //APPLICATION_HPP
