import glob
from pathlib import Path

def create_function_map_object(func_directory : str, func_directory_sub : list, func_type_list : list, w_file_name : str, out_directory : str):
    function_directory = func_directory
    function_type_list = func_type_list
    file_info_map = {}
    map_name_map = {}

    for i in range(len(func_directory_sub)):
        sub_directory = func_directory_sub[i]
        files = glob.glob(function_directory + "/" + sub_directory + "/" + "**/*.h" , recursive=True)
        file_info = []
        for j in range(len(files)) :
            file = files[j]
            path = Path(file)
            s = str(path)
            file_info.append(s.split('\\')[1:])
        file_info_map[func_type_list[i]] = file_info
    
    print(file_info_map)

    with open(out_directory + "/" + w_file_name + ".h", "w", encoding='utf8', newline="") as w_f:
        w_f.write("#pragma once\n")
        w_f.write("#include <vector>\n")
        w_f.write("#include \"xml_data.h\"\n")
        w_f.write("\n")
        for file_info in file_info_map.values():
            for i in range(len(file_info)):
                file_name = ""
                for j in range(len(file_info[i])):
                    file_name += file_info[i][j]
                    if not j == len(file_info[i]) - 1:
                        file_name += "/"
                w_f.write("#include \"{0}\"\n".format(file_name))
        w_f.write("\n")
        w_f.write("class FunctionMap{\n")
        w_f.write("private:\n")

        for i in range(len(func_directory_sub)):
            sub_directory = func_directory_sub[i]
            map_name = sub_directory+"_map"
            w_f.write("\tstd::vector<{}> {};\n".format(func_type_list[i], map_name + "_holder"))
            w_f.write("\tstd::map<std::string,{}(*)(void)> {} = {{\n".format(func_type_list[i], map_name))
            for file_list in file_info_map[func_type_list[i]]:
                print(file_list)
                name = file_list[-1].split('.')[0]
                print(name)
                w_f.write("\t\t{{\"{0}\",{1}}},\n".format(name,name))
            w_f.write("\t};\n")
            map_name_map[func_type_list[i]] = map_name

        
        w_f.write("\n")
        w_f.write("public:\n")
        for i in range(len(func_directory_sub)):
            w_f.write("\tinline {} use_{}(std::string func_name){{\n".format(func_type_list[i], func_directory_sub[i]))
            w_f.write("\t\t{}_holder.push_back((*{}[func_name])());\n".format(map_name_map[func_type_list[i]], map_name_map[func_type_list[i]]))
            w_f.write("\t\treturn {}_holder[{}_holder.size() - 1];\n".format(map_name_map[func_type_list[i]],map_name_map[func_type_list[i]]))
            w_f.write("\t}\n")

        w_f.write("\n")

        w_f.write("\tinline FunctionMap(){}\n")

        w_f.write("\n")

        w_f.write("\tinline ~FunctionMap(){\n")
        for i in range(len(func_directory_sub)):    
            w_f.write("\t\tfor({0} {2}_item : {1}_holder) delete {2}_item;\n".format(func_type_list[i], map_name_map[func_type_list[i]], func_directory_sub[i]))
        w_f.write("\t}\n")

        


        w_f.write("};")

if __name__ == "__main__":
    create_function_map_object("./cpp_header",["char_func","value_func"],["XMLData*","std::vector<std::vector<unsigned short>>*"],"function_map","./cpp_header")
    
