#ifndef DRAWING_AREA_HPP
#define DRAWING_AREA_HPP

#include <QWidget>

class drawing_area : public QWidget
{
    Q_OBJECT

public:
    drawing_area(QWidget *parent = nullptr);

public slots:
    void on_action(QAction *action);

protected:
    virtual void paintEvent(QPaintEvent *event) override;
    virtual void mousePressEvent(QMouseEvent *event) override;
};

#endif //AREA_HPP
