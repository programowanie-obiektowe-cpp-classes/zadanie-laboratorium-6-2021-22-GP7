#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());
    std::for_each(people.begin(), people.end(), [](Human& n) { n.birthday(); });
    std::transform(
        people.rbegin(), people.rend(), ret_v.begin(), ret_v.end(), [](Human& h) -> char {
            return h.isMonster();
        });

    return ret_v;
}
