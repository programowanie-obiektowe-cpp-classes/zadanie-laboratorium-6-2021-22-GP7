#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());
    std::for_each(people.begin(), people.end(), [](Human& n) { n.birthday(); });
    std::transform(people.rbegin(),
                   people.rend(),
                   std::back_inserter(ret_v),
                   [](unsigned char c, Human& h) -> unsigned char { return c = h.isMonster(); });

    return ret_v;
}
