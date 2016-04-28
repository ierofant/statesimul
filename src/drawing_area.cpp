#include <QAction>
#include <QMouseEvent>
#include "drawing_area.hpp"
#include "diagram_painter.hpp"
#include <iostream>

drawing_area::drawing_area(QWidget *parent)
    : QWidget(parent)
{

}

void drawing_area::on_action(QAction *action)
{
    std::cout << action->text().toStdString() << std::endl;
}

/*virtual*/ void drawing_area::paintEvent(QPaintEvent *event)
{
    diagram_painter painter(this);
    painter.drawRect(0, 0, 10, 10);
}

/*virtual*/ void drawing_area::mousePressEvent(QMouseEvent *event)
{
    switch (event->button())
    {
        case Qt::LeftButton:
            break;
    }
}
