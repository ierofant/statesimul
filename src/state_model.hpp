#ifndef STATE_MODEL_HPP
#define STATE_MODEL_HPP

#include <boost/multi_index_container.hpp>
#include <boost/multi_index/hashed_index.hpp>
#include <boost/multi_index/member.hpp>
#include <boost/multi_index/mem_fun.hpp>
#include <boost/geometry.hpp>
#include <boost/geometry/geometries/register/point.hpp>
#include <boost/geometry/geometries/register/box.hpp>
#include <QRect>

using namespace boost::multi_index;
namespace bg = boost::geometry;

BOOST_GEOMETRY_REGISTER_POINT_2D_GET_SET(QPoint, int, bg::cs::cartesian, QPoint::x, QPoint::y, QPoint::setX, QPoint::setY)
BOOST_GEOMETRY_REGISTER_BOX(QRect, QPoint, QRect::topLeft, QRect::bottomRight)

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

    state_model(const std::string &name, const std::shared_ptr<state_model> &parent = nullptr);

    virtual std::string get_name() const override;
    std::shared_ptr<state_model> get_parent();
    unsigned count_children() const;
    QRect get_box() const;
    

private:
    const std::string name;
    QRect box;
    std::weak_ptr<state_model> parent;
    children_type children;
};

#endif //STATE_MODEL_HPP
