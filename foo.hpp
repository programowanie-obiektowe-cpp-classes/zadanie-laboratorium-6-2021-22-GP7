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
        people.rbegin(), people.rend(), ret_v.begin(), std::back_inserter(ret_v), [](Human& h) {
            if (h.isMonster()) {
                return 'n';
            }
            else {
                return 'y';
            };
        });

    return ret_v;
}
