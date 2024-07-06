#pragma once

#include <vector>
#include <map>
#include <string>

//template<typename T>
struct XMLData{
    std::string tag;
    std::string item;
    std::map<std::string, std::vector<XMLData*>> nexts;

    XMLData(std::string item){this->item = item;}
    ~XMLData(){ 
        for(auto item_ptr = nexts.begin(); item_ptr != nexts.end() ; item_ptr++){
            for(XMLData* little_item : item_ptr->second){
                delete little_item;
            }
        }
    }

};