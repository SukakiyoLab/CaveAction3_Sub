import xml.etree.ElementTree as ET
import copy


def attach_text(front_text : str,text : str,back_text : str) -> str:
  return front_text + text + back_text

def create_data(xml_original : ET.Element, w_f, tag_list : list, id_list : list, id : int):
  new_tag_list = copy.copy(tag_list)
  new_tag_list.append(xml_original)
  name = "next_storage_{}".format(id)
  w_f.write("\tXMLData* ")
  if xml_original.text is None:
    w_f.write("{} = new XMLData(std::string(\"{}\"));\n".format(name, ''))
  elif type(xml_original.text) is str:
    w_f.write("{} = new XMLData(std::string(\"{}\"));\n".format(name, xml_original.text.replace('\n','').replace(' ', '')))
  w_f.write("\t{}->tag = \"{}\";\n".format(name,xml_original.tag))
  #w_f.write("\t{}->item = \"{}\";\n".format(name,xml_original.text.replace('\n','').replace(' ', "")))
  id += 1
  for child in xml_original:
    child_name, id = create_data(child, w_f, tag_list, id_list, id)
    w_f.write("\t{}->nexts[\"{}\"].push_back({});\n".format(name, child.tag, child_name))


  #w_f.write("\n")

  return name,id


def xml_to_cpp(r_path : str, w_path : str, func_name : str):
  
  with open(w_path, 'w', encoding='utf8', newline="") as w_f:
    w_f.write("#pragma once\n")
    w_f.write("\n")
    w_f.write("#include <string>\n")
    w_f.write("#include <map>\n")
    w_f.write("#include <vector>\n")
    w_f.write("#include \"xml_data.h\"\n")
    w_f.write("\n")
    w_f.write("inline XMLData* {}(){{\n".format(func_name))
    
    
  

    data = ET.parse(r_path)
    root = data.getroot()

    #w_f.write("\tXMLData storage(\"{}\");\n".format())

    create_data(root, w_f, [], [], 0)

    #w_f.write("\tXMLData* storage = next_storage_0;\n")
    #w_f.write("\tfor(auto item_ptr = next_storage_0->nexts.begin(); item_ptr != next_storage_0->nexts.end() ; item_ptr++){\n")
    #w_f.write("\t\tstd::vector<XMLData*> item_vector = next_storage_0->nexts[item_ptr->first];\n")
    #w_f.write("\t\tfor(int i = 0; i < item_vector.size(); i++){\n")
    #w_f.write("\t\t\tnext_storage_0->nexts[item_ptr->first][i] = nullptr;\n")
    #w_f.write("\t\t}\n")
    #w_f.write("\t}\n")
    #w_f.write("\tdelete next_storage_0;\n")
    w_f.write("\treturn next_storage_0;\n")
    w_f.write("}")
    

    


if __name__ == "__main__":
  read_file = 'slime_anim_data.xml'
  write_file = 'slime_anim_data.h'
  function_name = 'slime_anim_data'

  xml_to_cpp(read_file, write_file, function_name)
