#pragma once
#include <vector>

inline std::vector<std::vector<unsigned short>>* rock_anim_tuple() {
    return new std::vector<std::vector<unsigned short>> {
        {0,0,0},
        {0,1,0},
        {0,2,0},
        {0,3,0},
    };
}
