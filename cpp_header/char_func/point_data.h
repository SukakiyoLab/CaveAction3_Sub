#pragma once

#include <string>
#include <map>
#include <vector>
#include "xml_data.h"

inline XMLData* point_data(){
	XMLData* next_storage_0 = new XMLData(std::string(""));
	next_storage_0->tag = "data";
	XMLData* next_storage_1 = new XMLData(std::string(""));
	next_storage_1->tag = "animation";
	XMLData* next_storage_2 = new XMLData(std::string(""));
	next_storage_2->tag = "key";
	XMLData* next_storage_3 = new XMLData(std::string("0"));
	next_storage_3->tag = "time";
	next_storage_2->nexts["time"].push_back(next_storage_3);
	XMLData* next_storage_4 = new XMLData(std::string("250"));
	next_storage_4->tag = "value";
	next_storage_2->nexts["value"].push_back(next_storage_4);
	next_storage_1->nexts["key"].push_back(next_storage_2);
	XMLData* next_storage_5 = new XMLData(std::string(""));
	next_storage_5->tag = "key";
	XMLData* next_storage_6 = new XMLData(std::string("500"));
	next_storage_6->tag = "time";
	next_storage_5->nexts["time"].push_back(next_storage_6);
	XMLData* next_storage_7 = new XMLData(std::string("200"));
	next_storage_7->tag = "value";
	next_storage_5->nexts["value"].push_back(next_storage_7);
	next_storage_1->nexts["key"].push_back(next_storage_5);
	next_storage_0->nexts["animation"].push_back(next_storage_1);
	return next_storage_0;
}