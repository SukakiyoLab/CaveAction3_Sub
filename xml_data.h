#pragma once

#include <vector>
#include <map>
#include <string>

//template<typename T>
struct XMLData{
    std::string tag;
    std::string item;
    std::map<std::string, std::vector<XMLData*>> nexts;

    //void set_item(T item) {this->item = item;}
    //void add_next_vector(XMLData<T>* data) {this->nexts[data.tag].push_back(data);}

    //T get_item(){ return item; }
    //std::vector<XMLData<T>*> get_next_vector(std::string tag) { return nexts[tag]; }
    //XMLData<T>* get_next_data(std::string tag, int id) {return nexts[tag][id];}
    XMLData(std::string item){this->item = item;}
    ~XMLData(){ 
        for(auto item_ptr = nexts.begin(); item_ptr != nexts.end() ; item_ptr++){
            for(XMLData* little_item : item_ptr->second){
                delete little_item;
            }
        }
    }

};