import xml

def text_to_cpp(r_path : str, w_path : str, func_name : str):
  with open(r_path, 'r', encoding='utf8', newline="") as r_f:
    data = r_f.read()
    
    with open(w_path, 'w', encoding='utf8', newline="") as w_f:
      w_f.write("#pragma once\n")
      w_f.write("\n")
      w_f.write("const char* {}(){{\n".format(func_name))
      w_f.write('    return R"(\n')
      w_f.write(data + "\n")
      w_f.write(')";\n')
      w_f.write("}}\n".format())

    


if __name__ == "__main__":
  read_file = 'nav_mesh_bake1.xml'
  write_file = 'nav_mesh_bake1.h'
  function_name = 'nav_mesh_bake1'

  text_to_cpp(read_file, write_file, function_name)
