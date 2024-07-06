#pragma once
#include <vector>
#include "xml_data.h"

#include "char_func/fireball_anim_data.h"
#include "char_func/nav_mesh_rect1.h"
#include "char_func/player_anim_data.h"
#include "char_func/point_data.h"
#include "char_func/rock_anim_data.h"
#include "char_func/slime_anim_data.h"
#include "char_func/objects/camera_object_debug_data.h"
#include "char_func/objects/camera_object_release_data.h"
#include "char_func/objects/fireball_object_data.h"
#include "char_func/objects/player_object_data.h"
#include "char_func/objects/rock_object_data.h"
#include "char_func/objects/room_object_data1.h"
#include "char_func/objects/room_object_data2.h"
#include "char_func/objects/room_object_data3.h"
#include "char_func/objects/slime_object_data.h"
#include "value_func/nav_mesh_bake1.h"
#include "value_func/player_anim_tuple.h"
#include "value_func/rock_anim_tuple.h"
#include "value_func/tilemap/tilemap_data_1_1.h"
#include "value_func/tilemap/tilemap_data_1_2.h"
#include "value_func/tilemap/tilemap_data_1_3.h"
#include "value_func/tilemap/tilemap_data_1_collider.h"
#include "value_func/tilemap/tilemap_data_2_1.h"
#include "value_func/tilemap/tilemap_data_2_2.h"
#include "value_func/tilemap/tilemap_data_2_3.h"
#include "value_func/tilemap/tilemap_data_2_collider.h"
#include "value_func/tilemap/tilemap_data_3_1.h"
#include "value_func/tilemap/tilemap_data_3_2.h"
#include "value_func/tilemap/tilemap_data_3_3.h"
#include "value_func/tilemap/tilemap_data_3_collider.h"

class FunctionMap{
private:
	std::vector<XMLData*> char_func_map_holder;
	std::map<std::string,XMLData*(*)(void)> char_func_map = {
		{"fireball_anim_data",fireball_anim_data},
		{"nav_mesh_rect1",nav_mesh_rect1},
		{"player_anim_data",player_anim_data},
		{"point_data",point_data},
		{"rock_anim_data",rock_anim_data},
		{"slime_anim_data",slime_anim_data},
		{"camera_object_debug_data",camera_object_debug_data},
		{"camera_object_release_data",camera_object_release_data},
		{"fireball_object_data",fireball_object_data},
		{"player_object_data",player_object_data},
		{"rock_object_data",rock_object_data},
		{"room_object_data1",room_object_data1},
		{"room_object_data2",room_object_data2},
		{"room_object_data3",room_object_data3},
		{"slime_object_data",slime_object_data},
	};
	std::vector<std::vector<std::vector<unsigned short>>*> value_func_map_holder;
	std::map<std::string,std::vector<std::vector<unsigned short>>*(*)(void)> value_func_map = {
		{"nav_mesh_bake1",nav_mesh_bake1},
		{"player_anim_tuple",player_anim_tuple},
		{"rock_anim_tuple",rock_anim_tuple},
		{"tilemap_data_1_1",tilemap_data_1_1},
		{"tilemap_data_1_2",tilemap_data_1_2},
		{"tilemap_data_1_3",tilemap_data_1_3},
		{"tilemap_data_1_collider",tilemap_data_1_collider},
		{"tilemap_data_2_1",tilemap_data_2_1},
		{"tilemap_data_2_2",tilemap_data_2_2},
		{"tilemap_data_2_3",tilemap_data_2_3},
		{"tilemap_data_2_collider",tilemap_data_2_collider},
		{"tilemap_data_3_1",tilemap_data_3_1},
		{"tilemap_data_3_2",tilemap_data_3_2},
		{"tilemap_data_3_3",tilemap_data_3_3},
		{"tilemap_data_3_collider",tilemap_data_3_collider},
	};

public:
	inline XMLData* use_char_func(std::string func_name){
		char_func_map_holder.push_back((*char_func_map[func_name])());
		return char_func_map_holder[char_func_map_holder.size() - 1];
	}
	inline std::vector<std::vector<unsigned short>>* use_value_func(std::string func_name){
		value_func_map_holder.push_back((*value_func_map[func_name])());
		return value_func_map_holder[value_func_map_holder.size() - 1];
	}

	inline FunctionMap(){}

	inline ~FunctionMap(){
		for(XMLData* char_func_item : char_func_map_holder) delete char_func_item;
		for(std::vector<std::vector<unsigned short>>* value_func_item : value_func_map_holder) delete value_func_item;
	}
};