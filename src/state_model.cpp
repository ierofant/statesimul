#include "state_model.hpp"

state_model::state_model(const std::string &name, const std::shared_ptr<state_model> &parent)
    : name(name),
      box(0, 0, 80, 50),
      parent(parent)
{

}

/*virtual*/ std::string state_model::get_name() const
{
    return name;
}

std::shared_ptr<state_model> state_model::get_parent()
{
    return parent.lock();
}

unsigned state_model::count_children() const
{
    return children.size();
}

QRect state_model::get_box() const
{
    return box;
}