#pragma once
#include <vector>

std::vector<std::vector<unsigned short>> tilemap_data1() {
    return std::vector<std::vector<unsigned short>> {
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
