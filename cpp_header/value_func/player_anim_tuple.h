#pragma once
#include <vector>

inline std::vector<std::vector<unsigned short>>* player_anim_tuple() {
    return new std::vector<std::vector<unsigned short>> {
        {0,0,0},
        {0,1,1},
        {0,2,2},
        {0,3,3},
        {1,0,4},
        {1,1,5},
        {1,2,6},
        {1,3,7},
        {2,0,8},
        {2,1,9},
        {2,2,10},
        {2,3,11},
        {3,0,12},
        {3,1,13},
        {3,2,14},
        {3,3,15},
        {4,0,16},
        {4,1,17},
        {4,2,18},
        {4,3,19},
    };
}
