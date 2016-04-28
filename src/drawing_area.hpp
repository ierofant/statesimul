#ifndef DRAWING_AREA_HPP
#define DRAWING_AREA_HPP

#include <QWidget>
#include <memory>

class state_model;
class drawing_area : public QWidget
{
    Q_OBJECT

public:
    drawing_area(QWidget *parent = nullptr);

    void set_current_state(const std::shared_ptr<state_model> &state);

public slots:
    void on_action(QAction *action);

protected:
    virtual void paintEvent(QPaintEvent *event) override;
    virtual void mousePressEvent(QMouseEvent *event) override;

private:
    std::shared_ptr<state_model> current_state;
};

#endif //AREA_HPP
