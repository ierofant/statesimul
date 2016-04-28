#ifndef STATE_MODEL_HPP
#define STATE_MODEL_HPP

#include <boost/multi_index_container.hpp>
#include <boost/multi_index/hashed_index.hpp>
#include <boost/multi_index/member.hpp>
#include <boost/multi_index/mem_fun.hpp>

using namespace boost::multi_index;

class state_model_base
{
public:
    virtual ~state_model_base() = default;

    virtual std::string get_name() const = 0;
};

class state_model : public state_model_base
{
public:
    using children_type = boost::multi_index_container<std::shared_ptr<state_model_base>,
        indexed_by<
            hashed_unique<tag<std::string>, const_mem_fun<state_model_base, std::string, &state_model_base::get_name>>
        >
    >;

    state_model(const std::string &name);

    virtual std::string get_name() const override;
    unsigned count_children() const;

private:
    const std::string name;
    children_type children;
};

#endif //STATE_MODEL_HPP
