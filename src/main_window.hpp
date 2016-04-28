#ifndef MAIN_WINDOW_HPP
#define MAIN_WINDOW_HPP

#include <QMainWindow>
#include "drawing_area.hpp"

namespace Ui
{
    class main_window;
}

class statechart_model;
class main_window : public QMainWindow
{
    Q_OBJECT

public:
    main_window();
    virtual ~main_window() override;

private:
    Ui::main_window *ui;
    drawing_area area;
    std::shared_ptr<statechart_model> statechart;
};

#endif //MAIN_WINDOW_HPP
