#include "main_window.hpp"
#include "ui_main_window.h"

main_window::main_window()
    : ui(new Ui::main_window)
{
    ui->setupUi(this);

    auto *group = new QActionGroup(this);
    group->addAction(ui->cursor);
    group->addAction(ui->state);
}

/*virtual*/ main_window::~main_window()
{
    delete ui;
}