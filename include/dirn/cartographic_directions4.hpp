#pragma once

#include "directions4_base.hpp"
#include <string_view>
#include <functional>
#include <cstdint>
#include <cassert>

namespace dirn
{
class cartographic_directions4 : public directions4_base
{
public:
    inline static constexpr direction4 north = directions[0];
    inline static constexpr direction4 east = directions[1];
    inline static constexpr direction4 south = directions[2];
    inline static constexpr direction4 west = directions[3];

    inline static char to_char(direction4 dir)
    {
        static std::string_view chars("?%NESW");
        return chars.at(dir.index() + 2);
    }

    inline static std::string_view to_string_view(direction4 dir)
    {
        static std::array<std::string_view, count + 2> sv_array{ "Undefined", "Bad", "North", "East", "South", "West" };
        return sv_array.at(dir.index() + 2);
    }
};
}
