#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());
    auto dodaj = [](const char& c)
    {
        if (it->isMonster() == true)
        {
            c.push_back('n');
        }
        else
        {
            c.push_back('y');
        }
    };

    std::for_each(people.begin(), people.end(), [](Human& n) { n.birthday(); });


    std::for_each(ret_v.rbegin(), ret_v.rend(), dodaj });

    return ret_v;
}
