import shutil
import glob
import os

import csv_to_cpp_all
import xml_to_cpp_all
import create_function_map

def generate_cppfiles(r_directory:str, w_directory:str):
    directories = glob.glob(w_directory + "*\\")
    print(directories)
    for directory in directories:
        shutil.rmtree(directory)

    files = glob.glob(w_directory + "*.h")
    print(files)
    for file in files:
        os.remove(file)

    csv_to_cpp_all.csv_to_cpp_all(r_directory, w_directory)
    xml_to_cpp_all.xml_to_cpp_all(r_directory, w_directory)

    shutil.copy("./xml_data.h", w_directory)

    create_function_map.create_function_map_object(w_directory,["char_func","value_func"],["XMLData*","std::vector<std::vector<unsigned short>>*"],"function_map","./cpp_header")

  



if __name__ == "__main__":
  r_directory = ".\\sub_input\\"
  w_directory = ".\\cpp_header\\"

  generate_cppfiles(r_directory, w_directory)


