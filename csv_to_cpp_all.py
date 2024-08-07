import csv_to_cpp
import glob
import os

  
def csv_to_cpp_all(r_directory, w_directory):
    files = glob.glob(r_directory + "**/*.csv", recursive=True)
    for file in files:
        if file.split(".")[-1] == "csv":
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
            csv_to_cpp.csv_to_cpp(file , w_directory_all , file_base)

if __name__ == "__main__" :
    r_directory = "./sub_input/"
    w_directory = "./sub_output/"
  
    csv_to_cpp_all(r_directory, w_directory)
