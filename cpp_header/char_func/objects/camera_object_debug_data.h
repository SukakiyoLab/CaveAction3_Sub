#pragma once

#include <string>
#include <map>
#include <vector>
#include "xml_data.h"

inline XMLData* camera_object_debug_data(){
	XMLData* next_storage_0 = new XMLData(std::string(""));
	next_storage_0->tag = "root";
	XMLData* next_storage_1 = new XMLData(std::string("debug_camera"));
	next_storage_1->tag = "name";
	next_storage_0->nexts["name"].push_back(next_storage_1);
	XMLData* next_storage_2 = new XMLData(std::string("Normal"));
	next_storage_2->tag = "type";
	next_storage_0->nexts["type"].push_back(next_storage_2);
	XMLData* next_storage_3 = new XMLData(std::string(""));
	next_storage_3->tag = "transform";
	XMLData* next_storage_4 = new XMLData(std::string(""));
	next_storage_4->tag = "position";
	XMLData* next_storage_5 = new XMLData(std::string("0.0"));
	next_storage_5->tag = "x";
	next_storage_4->nexts["x"].push_back(next_storage_5);
	XMLData* next_storage_6 = new XMLData(std::string("0.0"));
	next_storage_6->tag = "y";
	next_storage_4->nexts["y"].push_back(next_storage_6);
	XMLData* next_storage_7 = new XMLData(std::string("0.0"));
	next_storage_7->tag = "z";
	next_storage_4->nexts["z"].push_back(next_storage_7);
	next_storage_3->nexts["position"].push_back(next_storage_4);
	XMLData* next_storage_8 = new XMLData(std::string(""));
	next_storage_8->tag = "rotation";
	XMLData* next_storage_9 = new XMLData(std::string("0.0"));
	next_storage_9->tag = "x";
	next_storage_8->nexts["x"].push_back(next_storage_9);
	XMLData* next_storage_10 = new XMLData(std::string("0.0"));
	next_storage_10->tag = "y";
	next_storage_8->nexts["y"].push_back(next_storage_10);
	XMLData* next_storage_11 = new XMLData(std::string("0.0"));
	next_storage_11->tag = "z";
	next_storage_8->nexts["z"].push_back(next_storage_11);
	next_storage_3->nexts["rotation"].push_back(next_storage_8);
	XMLData* next_storage_12 = new XMLData(std::string(""));
	next_storage_12->tag = "scale";
	XMLData* next_storage_13 = new XMLData(std::string("1.0"));
	next_storage_13->tag = "x";
	next_storage_12->nexts["x"].push_back(next_storage_13);
	XMLData* next_storage_14 = new XMLData(std::string("1.0"));
	next_storage_14->tag = "y";
	next_storage_12->nexts["y"].push_back(next_storage_14);
	XMLData* next_storage_15 = new XMLData(std::string("1.0"));
	next_storage_15->tag = "z";
	next_storage_12->nexts["z"].push_back(next_storage_15);
	next_storage_3->nexts["scale"].push_back(next_storage_12);
	next_storage_0->nexts["transform"].push_back(next_storage_3);
	XMLData* next_storage_16 = new XMLData(std::string(""));
	next_storage_16->tag = "component";
	XMLData* next_storage_17 = new XMLData(std::string(""));
	next_storage_17->tag = "view_camera";
	XMLData* next_storage_18 = new XMLData(std::string(""));
	next_storage_18->tag = "view_port_center";
	XMLData* next_storage_19 = new XMLData(std::string("640.0"));
	next_storage_19->tag = "x";
	next_storage_18->nexts["x"].push_back(next_storage_19);
	XMLData* next_storage_20 = new XMLData(std::string("480.0"));
	next_storage_20->tag = "y";
	next_storage_18->nexts["y"].push_back(next_storage_20);
	XMLData* next_storage_21 = new XMLData(std::string("0.0"));
	next_storage_21->tag = "z";
	next_storage_18->nexts["z"].push_back(next_storage_21);
	next_storage_17->nexts["view_port_center"].push_back(next_storage_18);
	XMLData* next_storage_22 = new XMLData(std::string("960"));
	next_storage_22->tag = "width";
	next_storage_17->nexts["width"].push_back(next_storage_22);
	XMLData* next_storage_23 = new XMLData(std::string("720"));
	next_storage_23->tag = "height";
	next_storage_17->nexts["height"].push_back(next_storage_23);
	XMLData* next_storage_24 = new XMLData(std::string("player"));
	next_storage_24->tag = "other_object_name";
	next_storage_17->nexts["other_object_name"].push_back(next_storage_24);
	XMLData* next_storage_25 = new XMLData(std::string("0"));
	next_storage_25->tag = "other_transform_id";
	next_storage_17->nexts["other_transform_id"].push_back(next_storage_25);
	next_storage_16->nexts["view_camera"].push_back(next_storage_17);
	next_storage_0->nexts["component"].push_back(next_storage_16);
	XMLData* next_storage_26 = new XMLData(std::string(""));
	next_storage_26->tag = "other_object_components";
	XMLData* next_storage_27 = new XMLData(std::string("player"));
	next_storage_27->tag = "object";
	XMLData* next_storage_28 = new XMLData(std::string("CAT_Transform"));
	next_storage_28->tag = "component";
	next_storage_27->nexts["component"].push_back(next_storage_28);
	XMLData* next_storage_29 = new XMLData(std::string("0"));
	next_storage_29->tag = "component_id";
	next_storage_27->nexts["component_id"].push_back(next_storage_29);
	next_storage_26->nexts["object"].push_back(next_storage_27);
	next_storage_0->nexts["other_object_components"].push_back(next_storage_26);
	return next_storage_0;
}