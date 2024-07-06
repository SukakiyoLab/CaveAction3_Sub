#pragma once

#include <string>
#include <map>
#include <vector>
#include "xml_data.h"

inline XMLData* fireball_anim_data(){
	XMLData* next_storage_0 = new XMLData(std::string(""));
	next_storage_0->tag = "data";
	XMLData* next_storage_1 = new XMLData(std::string(""));
	next_storage_1->tag = "animation";
	XMLData* next_storage_2 = new XMLData(std::string(""));
	next_storage_2->tag = "frame";
	XMLData* next_storage_3 = new XMLData(std::string("./resource/imgs/ball/fire/fire1.png"));
	next_storage_3->tag = "filename";
	next_storage_2->nexts["filename"].push_back(next_storage_3);
	XMLData* next_storage_4 = new XMLData(std::string("150"));
	next_storage_4->tag = "duration";
	next_storage_2->nexts["duration"].push_back(next_storage_4);
	next_storage_1->nexts["frame"].push_back(next_storage_2);
	XMLData* next_storage_5 = new XMLData(std::string(""));
	next_storage_5->tag = "frame";
	XMLData* next_storage_6 = new XMLData(std::string("./resource/imgs/ball/fire/fire2.png"));
	next_storage_6->tag = "filename";
	next_storage_5->nexts["filename"].push_back(next_storage_6);
	XMLData* next_storage_7 = new XMLData(std::string("150"));
	next_storage_7->tag = "duration";
	next_storage_5->nexts["duration"].push_back(next_storage_7);
	next_storage_1->nexts["frame"].push_back(next_storage_5);
	XMLData* next_storage_8 = new XMLData(std::string(""));
	next_storage_8->tag = "frame";
	XMLData* next_storage_9 = new XMLData(std::string("./resource/imgs/ball/fire/fire3.png"));
	next_storage_9->tag = "filename";
	next_storage_8->nexts["filename"].push_back(next_storage_9);
	XMLData* next_storage_10 = new XMLData(std::string("150"));
	next_storage_10->tag = "duration";
	next_storage_8->nexts["duration"].push_back(next_storage_10);
	next_storage_1->nexts["frame"].push_back(next_storage_8);
	XMLData* next_storage_11 = new XMLData(std::string(""));
	next_storage_11->tag = "frame";
	XMLData* next_storage_12 = new XMLData(std::string("./resource/imgs/ball/fire/fire4.png"));
	next_storage_12->tag = "filename";
	next_storage_11->nexts["filename"].push_back(next_storage_12);
	XMLData* next_storage_13 = new XMLData(std::string("150"));
	next_storage_13->tag = "duration";
	next_storage_11->nexts["duration"].push_back(next_storage_13);
	next_storage_1->nexts["frame"].push_back(next_storage_11);
	next_storage_0->nexts["animation"].push_back(next_storage_1);
	return next_storage_0;
}