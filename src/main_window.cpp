#include "main_window.hpp"
#include "ui_main_window.h"
#include "statechart_model.hpp"

main_window::main_window()
    : ui(new Ui::main_window),
      statechart(std::make_shared<statechart_model>())
{
    ui->setupUi(this);

    auto *group = new QActionGroup(this);
    group->addAction(ui->cursor);
    group->addAction(ui->state);

    ui->area->set_current_state(statechart);
}

/*virtual*/ main_window::~main_window()
{
    delete ui;
}
