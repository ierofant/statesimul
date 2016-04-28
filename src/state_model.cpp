#include "state_model.hpp"

state_model::state_model(const std::string &name)
    : name(name)
{

}

/*virtual*/ std::string state_model::get_name() const
{
    return name;
}

unsigned state_model::count_children() const
{
    return children.size();
}
