#ifndef DIAGRAM_PAINTER_HPP
#define DIAGRAM_PAINTER_HPP

#include <QPainter>

class statechart_model;
class state_model;

class diagram_painter : public QPainter
{
public:
    diagram_painter(QPaintDevice *device);

    void draw_statechart(const statechart_model &statechart);

private:
    void draw_state(const state_model &state);
};

#endif //DIAGRAM_PAINTER_HPP
