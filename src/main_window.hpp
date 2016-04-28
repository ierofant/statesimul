#ifndef MAIN_WINDOW_HPP
#define MAIN_WINDOW_HPP

#include <QMainWindow>
#include "drawing_area.hpp"

namespace Ui
{
    class main_window;
}

class main_window : public QMainWindow
{
    Q_OBJECT

public:
    main_window();
    virtual ~main_window() override;

private:
    Ui::main_window *ui;
    drawing_area area;
};

#endif //MAIN_WINDOW_HPP
