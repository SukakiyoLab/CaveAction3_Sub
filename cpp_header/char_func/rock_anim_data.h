#pragma once

#include <string>
#include <map>
#include <vector>
#include "xml_data.h"

inline XMLData* rock_anim_data(){
	XMLData* next_storage_0 = new XMLData(std::string(""));
	next_storage_0->tag = "data";
	XMLData* next_storage_1 = new XMLData(std::string(""));
	next_storage_1->tag = "animation";
	XMLData* next_storage_2 = new XMLData(std::string(""));
	next_storage_2->tag = "frame";
	XMLData* next_storage_3 = new XMLData(std::string("./resource/imgs/rock2.png"));
	next_storage_3->tag = "filename";
	next_storage_2->nexts["filename"].push_back(next_storage_3);
	XMLData* next_storage_4 = new XMLData(std::string("1000"));
	next_storage_4->tag = "duration";
	next_storage_2->nexts["duration"].push_back(next_storage_4);
	next_storage_1->nexts["frame"].push_back(next_storage_2);
	next_storage_0->nexts["animation"].push_back(next_storage_1);
	return next_storage_0;
}