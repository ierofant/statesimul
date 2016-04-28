#include <QAction>
#include <QMouseEvent>
#include "drawing_area.hpp"
#include "diagram_painter.hpp"
#include <iostream>

drawing_area::drawing_area(QWidget *parent)
    : QWidget(parent)
{

}

void drawing_area::set_current_state(const std::shared_ptr<state_model> &state)
{
    current_state = state;
}

void drawing_area::on_action(QAction *action)
{
    std::cout << action->text().toStdString() << std::endl;
}

/*virtual*/ void drawing_area::paintEvent(QPaintEvent *event)
{
    if (current_state)
    {
	
    }
}

/*virtual*/ void drawing_area::mousePressEvent(QMouseEvent *event)
{
    switch (event->button())
    {
        case Qt::LeftButton:
            break;
    }
}
