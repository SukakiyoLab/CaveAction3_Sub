#pragma once

#include <string>
#include <map>
#include <vector>
#include "xml_data.h"

inline XMLData* fireball_object_data(){
	XMLData* next_storage_0 = new XMLData(std::string(""));
	next_storage_0->tag = "root";
	XMLData* next_storage_1 = new XMLData(std::string("fireball"));
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
	next_storage_17->tag = "animation_image";
	XMLData* next_storage_18 = new XMLData(std::string("fireball_anim_data"));
	next_storage_18->tag = "data_name";
	next_storage_17->nexts["data_name"].push_back(next_storage_18);
	XMLData* next_storage_19 = new XMLData(std::string(""));
	next_storage_19->tag = "offset";
	XMLData* next_storage_20 = new XMLData(std::string("0"));
	next_storage_20->tag = "x";
	next_storage_19->nexts["x"].push_back(next_storage_20);
	XMLData* next_storage_21 = new XMLData(std::string("0"));
	next_storage_21->tag = "y";
	next_storage_19->nexts["y"].push_back(next_storage_21);
	next_storage_17->nexts["offset"].push_back(next_storage_19);
	XMLData* next_storage_22 = new XMLData(std::string("255"));
	next_storage_22->tag = "image_alpha";
	next_storage_17->nexts["image_alpha"].push_back(next_storage_22);
	XMLData* next_storage_23 = new XMLData(std::string("2"));
	next_storage_23->tag = "image_layer";
	next_storage_17->nexts["image_layer"].push_back(next_storage_23);
	next_storage_16->nexts["animation_image"].push_back(next_storage_17);
	next_storage_0->nexts["component"].push_back(next_storage_16);
	XMLData* next_storage_24 = new XMLData(std::string(""));
	next_storage_24->tag = "component";
	XMLData* next_storage_25 = new XMLData(std::string(""));
	next_storage_25->tag = "rigidbody";
	XMLData* next_storage_26 = new XMLData(std::string("Aristoteles"));
	next_storage_26->tag = "type";
	next_storage_25->nexts["type"].push_back(next_storage_26);
	XMLData* next_storage_27 = new XMLData(std::string("8.0"));
	next_storage_27->tag = "mass";
	next_storage_25->nexts["mass"].push_back(next_storage_27);
	XMLData* next_storage_28 = new XMLData(std::string("1.0"));
	next_storage_28->tag = "coefficient";
	next_storage_25->nexts["coefficient"].push_back(next_storage_28);
	XMLData* next_storage_29 = new XMLData(std::string("1.0"));
	next_storage_29->tag = "friction_coefficient";
	next_storage_25->nexts["friction_coefficient"].push_back(next_storage_29);
	XMLData* next_storage_30 = new XMLData(std::string(""));
	next_storage_30->tag = "virtual_normal_force";
	XMLData* next_storage_31 = new XMLData(std::string("0.0"));
	next_storage_31->tag = "x";
	next_storage_30->nexts["x"].push_back(next_storage_31);
	XMLData* next_storage_32 = new XMLData(std::string("0.0"));
	next_storage_32->tag = "y";
	next_storage_30->nexts["y"].push_back(next_storage_32);
	XMLData* next_storage_33 = new XMLData(std::string("1000.0"));
	next_storage_33->tag = "z";
	next_storage_30->nexts["z"].push_back(next_storage_33);
	next_storage_25->nexts["virtual_normal_force"].push_back(next_storage_30);
	next_storage_24->nexts["rigidbody"].push_back(next_storage_25);
	next_storage_0->nexts["component"].push_back(next_storage_24);
	XMLData* next_storage_34 = new XMLData(std::string(""));
	next_storage_34->tag = "component";
	XMLData* next_storage_35 = new XMLData(std::string(""));
	next_storage_35->tag = "box_collider2d";
	XMLData* next_storage_36 = new XMLData(std::string("0"));
	next_storage_36->tag = "layer";
	next_storage_35->nexts["layer"].push_back(next_storage_36);
	XMLData* next_storage_37 = new XMLData(std::string("4500"));
	next_storage_37->tag = "magnitude";
	next_storage_35->nexts["magnitude"].push_back(next_storage_37);
	XMLData* next_storage_38 = new XMLData(std::string("1"));
	next_storage_38->tag = "collision";
	next_storage_35->nexts["collision"].push_back(next_storage_38);
	XMLData* next_storage_39 = new XMLData(std::string("40.0"));
	next_storage_39->tag = "w";
	next_storage_35->nexts["w"].push_back(next_storage_39);
	XMLData* next_storage_40 = new XMLData(std::string("40.0"));
	next_storage_40->tag = "h";
	next_storage_35->nexts["h"].push_back(next_storage_40);
	XMLData* next_storage_41 = new XMLData(std::string(""));
	next_storage_41->tag = "offset";
	XMLData* next_storage_42 = new XMLData(std::string("0"));
	next_storage_42->tag = "x";
	next_storage_41->nexts["x"].push_back(next_storage_42);
	XMLData* next_storage_43 = new XMLData(std::string("0"));
	next_storage_43->tag = "y";
	next_storage_41->nexts["y"].push_back(next_storage_43);
	next_storage_35->nexts["offset"].push_back(next_storage_41);
	XMLData* next_storage_44 = new XMLData(std::string("0"));
	next_storage_44->tag = "rigidbody_id";
	next_storage_35->nexts["rigidbody_id"].push_back(next_storage_44);
	next_storage_34->nexts["box_collider2d"].push_back(next_storage_35);
	next_storage_0->nexts["component"].push_back(next_storage_34);
	XMLData* next_storage_45 = new XMLData(std::string(""));
	next_storage_45->tag = "component";
	XMLData* next_storage_46 = new XMLData(std::string(""));
	next_storage_46->tag = "animation_curve";
	XMLData* next_storage_47 = new XMLData(std::string("point_data"));
	next_storage_47->tag = "key_points_data";
	next_storage_46->nexts["key_points_data"].push_back(next_storage_47);
	XMLData* next_storage_48 = new XMLData(std::string("0"));
	next_storage_48->tag = "loop";
	next_storage_46->nexts["loop"].push_back(next_storage_48);
	next_storage_45->nexts["animation_curve"].push_back(next_storage_46);
	next_storage_0->nexts["component"].push_back(next_storage_45);
	XMLData* next_storage_49 = new XMLData(std::string(""));
	next_storage_49->tag = "component";
	XMLData* next_storage_50 = new XMLData(std::string(""));
	next_storage_50->tag = "ball_controller";
	XMLData* next_storage_51 = new XMLData(std::string("0"));
	next_storage_51->tag = "animation_image_id";
	next_storage_50->nexts["animation_image_id"].push_back(next_storage_51);
	XMLData* next_storage_52 = new XMLData(std::string("0"));
	next_storage_52->tag = "rigidbody_id";
	next_storage_50->nexts["rigidbody_id"].push_back(next_storage_52);
	XMLData* next_storage_53 = new XMLData(std::string("0"));
	next_storage_53->tag = "animation_curve_id";
	next_storage_50->nexts["animation_curve_id"].push_back(next_storage_53);
	XMLData* next_storage_54 = new XMLData(std::string(""));
	next_storage_54->tag = "direction";
	XMLData* next_storage_55 = new XMLData(std::string("1"));
	next_storage_55->tag = "x";
	next_storage_54->nexts["x"].push_back(next_storage_55);
	XMLData* next_storage_56 = new XMLData(std::string("0"));
	next_storage_56->tag = "y";
	next_storage_54->nexts["y"].push_back(next_storage_56);
	next_storage_50->nexts["direction"].push_back(next_storage_54);
	next_storage_49->nexts["ball_controller"].push_back(next_storage_50);
	next_storage_0->nexts["component"].push_back(next_storage_49);
	XMLData* next_storage_57 = new XMLData(std::string(""));
	next_storage_57->tag = "other_object_components";
	next_storage_0->nexts["other_object_components"].push_back(next_storage_57);
	return next_storage_0;
}