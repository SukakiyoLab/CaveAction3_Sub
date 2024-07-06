import xml_to_cpp
import glob
import os


def xml_to_cpp_all(r_directory, w_directory):
    files = glob.glob(r_directory + "**/*.xml", recursive=True)
    for file in files:
        if file.split(".")[-1] == "xml":
            file_base = os.path.splitext(os.path.split(file)[-1])[0]
            w_directory_all = w_directory
            print(file.split('\\'))
            for i,text in enumerate(file.split('\\')):
                if i == 0 or i == 1:
                    continue
                elif not i == len(file.split('\\')) - 1:
                    w_directory_all += text
                    w_directory_all += "/"
                else:
                    print(w_directory_all)
                    if not os.path.exists(w_directory_all):
                        os.makedirs(w_directory_all)
                    w_directory_all += file_base + ".h"
            print(file_base)
            xml_to_cpp.xml_to_cpp(file , w_directory_all , file_base)

if __name__ == "__main__" :
    r_directory = "./sub_input/"
    w_directory = "./sub_output/"
    
    xml_to_cpp_all(r_directory, w_directory)