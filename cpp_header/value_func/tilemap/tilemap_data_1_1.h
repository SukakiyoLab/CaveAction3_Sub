#pragma once
#include <vector>

inline std::vector<std::vector<unsigned short>>* tilemap_data_1_1() {
    return new std::vector<std::vector<unsigned short>> {
        {1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1},
        {1,1,0,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,0,1,1},
        {1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,0,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,0,1},
        {1,1,1,1,1,1,1,1,1,1},
    };
}
