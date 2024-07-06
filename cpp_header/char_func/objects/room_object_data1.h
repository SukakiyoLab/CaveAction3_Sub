#pragma once

#include <string>
#include <map>
#include <vector>
#include "xml_data.h"

inline XMLData* room_object_data1(){
	XMLData* next_storage_0 = new XMLData(std::string(""));
	next_storage_0->tag = "root";
	XMLData* next_storage_1 = new XMLData(std::string("Room1"));
	next_storage_1->tag = "name";
	next_storage_0->nexts["name"].push_back(next_storage_1);
	XMLData* next_storage_2 = new XMLData(std::string("Normal"));
	next_storage_2->tag = "type";
	next_storage_0->nexts["type"].push_back(next_storage_2);
	XMLData* next_storage_3 = new XMLData(std::string(""));
	next_storage_3->tag = "transform";
	XMLData* next_storage_4 = new XMLData(std::string(""));
	next_storage_4->tag = "position";
	XMLData* next_storage_5 = new XMLData(std::string("-160.0"));
	next_storage_5->tag = "x";
	next_storage_4->nexts["x"].push_back(next_storage_5);
	XMLData* next_storage_6 = new XMLData(std::string("-160.0"));
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
	next_storage_17->tag = "tilemap";
	XMLData* next_storage_18 = new XMLData(std::string("./resource/imgs/tilemap1.png"));
	next_storage_18->tag = "tilemap_path";
	next_storage_17->nexts["tilemap_path"].push_back(next_storage_18);
	XMLData* next_storage_19 = new XMLData(std::string("tilemap_data_1_1"));
	next_storage_19->tag = "tilemap_init";
	next_storage_17->nexts["tilemap_init"].push_back(next_storage_19);
	XMLData* next_storage_20 = new XMLData(std::string("0"));
	next_storage_20->tag = "image_layer";
	next_storage_17->nexts["image_layer"].push_back(next_storage_20);
	XMLData* next_storage_21 = new XMLData(std::string("255"));
	next_storage_21->tag = "image_alpha";
	next_storage_17->nexts["image_alpha"].push_back(next_storage_21);
	XMLData* next_storage_22 = new XMLData(std::string(""));
	next_storage_22->tag = "offset";
	XMLData* next_storage_23 = new XMLData(std::string("0"));
	next_storage_23->tag = "x";
	next_storage_22->nexts["x"].push_back(next_storage_23);
	XMLData* next_storage_24 = new XMLData(std::string("0"));
	next_storage_24->tag = "y";
	next_storage_22->nexts["y"].push_back(next_storage_24);
	next_storage_17->nexts["offset"].push_back(next_storage_22);
	next_storage_16->nexts["tilemap"].push_back(next_storage_17);
	next_storage_0->nexts["component"].push_back(next_storage_16);
	XMLData* next_storage_25 = new XMLData(std::string(""));
	next_storage_25->tag = "component";
	XMLData* next_storage_26 = new XMLData(std::string(""));
	next_storage_26->tag = "tilemap";
	XMLData* next_storage_27 = new XMLData(std::string("./resource/imgs/tilemap1.png"));
	next_storage_27->tag = "tilemap_path";
	next_storage_26->nexts["tilemap_path"].push_back(next_storage_27);
	XMLData* next_storage_28 = new XMLData(std::string("tilemap_data_1_2"));
	next_storage_28->tag = "tilemap_init";
	next_storage_26->nexts["tilemap_init"].push_back(next_storage_28);
	XMLData* next_storage_29 = new XMLData(std::string("3"));
	next_storage_29->tag = "image_layer";
	next_storage_26->nexts["image_layer"].push_back(next_storage_29);
	XMLData* next_storage_30 = new XMLData(std::string("255"));
	next_storage_30->tag = "image_alpha";
	next_storage_26->nexts["image_alpha"].push_back(next_storage_30);
	XMLData* next_storage_31 = new XMLData(std::string(""));
	next_storage_31->tag = "offset";
	XMLData* next_storage_32 = new XMLData(std::string("0"));
	next_storage_32->tag = "x";
	next_storage_31->nexts["x"].push_back(next_storage_32);
	XMLData* next_storage_33 = new XMLData(std::string("-64"));
	next_storage_33->tag = "y";
	next_storage_31->nexts["y"].push_back(next_storage_33);
	next_storage_26->nexts["offset"].push_back(next_storage_31);
	next_storage_25->nexts["tilemap"].push_back(next_storage_26);
	next_storage_0->nexts["component"].push_back(next_storage_25);
	XMLData* next_storage_34 = new XMLData(std::string(""));
	next_storage_34->tag = "component";
	XMLData* next_storage_35 = new XMLData(std::string(""));
	next_storage_35->tag = "tilemap";
	XMLData* next_storage_36 = new XMLData(std::string("./resource/imgs/tilemap1.png"));
	next_storage_36->tag = "tilemap_path";
	next_storage_35->nexts["tilemap_path"].push_back(next_storage_36);
	XMLData* next_storage_37 = new XMLData(std::string("tilemap_data_1_3"));
	next_storage_37->tag = "tilemap_init";
	next_storage_35->nexts["tilemap_init"].push_back(next_storage_37);
	XMLData* next_storage_38 = new XMLData(std::string("1"));
	next_storage_38->tag = "image_layer";
	next_storage_35->nexts["image_layer"].push_back(next_storage_38);
	XMLData* next_storage_39 = new XMLData(std::string("255"));
	next_storage_39->tag = "image_alpha";
	next_storage_35->nexts["image_alpha"].push_back(next_storage_39);
	XMLData* next_storage_40 = new XMLData(std::string(""));
	next_storage_40->tag = "offset";
	XMLData* next_storage_41 = new XMLData(std::string("0"));
	next_storage_41->tag = "x";
	next_storage_40->nexts["x"].push_back(next_storage_41);
	XMLData* next_storage_42 = new XMLData(std::string("-64"));
	next_storage_42->tag = "y";
	next_storage_40->nexts["y"].push_back(next_storage_42);
	next_storage_35->nexts["offset"].push_back(next_storage_40);
	next_storage_34->nexts["tilemap"].push_back(next_storage_35);
	next_storage_0->nexts["component"].push_back(next_storage_34);
	XMLData* next_storage_43 = new XMLData(std::string(""));
	next_storage_43->tag = "component";
	XMLData* next_storage_44 = new XMLData(std::string(""));
	next_storage_44->tag = "tile_collider2d";
	XMLData* next_storage_45 = new XMLData(std::string("0"));
	next_storage_45->tag = "layer";
	next_storage_44->nexts["layer"].push_back(next_storage_45);
	XMLData* next_storage_46 = new XMLData(std::string("4500"));
	next_storage_46->tag = "magnitude";
	next_storage_44->nexts["magnitude"].push_back(next_storage_46);
	XMLData* next_storage_47 = new XMLData(std::string("1"));
	next_storage_47->tag = "collision";
	next_storage_44->nexts["collision"].push_back(next_storage_47);
	XMLData* next_storage_48 = new XMLData(std::string("32"));
	next_storage_48->tag = "width";
	next_storage_44->nexts["width"].push_back(next_storage_48);
	XMLData* next_storage_49 = new XMLData(std::string("tilemap_data_1_collider"));
	next_storage_49->tag = "tilemap_collider_init";
	next_storage_44->nexts["tilemap_collider_init"].push_back(next_storage_49);
	XMLData* next_storage_50 = new XMLData(std::string(""));
	next_storage_50->tag = "offset";
	XMLData* next_storage_51 = new XMLData(std::string("0"));
	next_storage_51->tag = "x";
	next_storage_50->nexts["x"].push_back(next_storage_51);
	XMLData* next_storage_52 = new XMLData(std::string("0"));
	next_storage_52->tag = "y";
	next_storage_50->nexts["y"].push_back(next_storage_52);
	next_storage_44->nexts["offset"].push_back(next_storage_50);
	XMLData* next_storage_53 = new XMLData(std::string("0"));
	next_storage_53->tag = "rigidbody_id";
	next_storage_44->nexts["rigidbody_id"].push_back(next_storage_53);
	next_storage_43->nexts["tile_collider2d"].push_back(next_storage_44);
	next_storage_0->nexts["component"].push_back(next_storage_43);
	XMLData* next_storage_54 = new XMLData(std::string(""));
	next_storage_54->tag = "other_object_components";
	next_storage_0->nexts["other_object_components"].push_back(next_storage_54);
	return next_storage_0;
}