import csv_to_cpp
import glob
import os

if __name__ == "__main__" :
    r_directory = "./sub_input/"
    w_directory = "./sub_output/"
    
    files = glob.glob(r_directory + "*.csv")
    for file in files:
        if file.split(".")[-1] == "csv":
            file_base = os.path.splitext(os.path.split(file)[-1])[0]
            print(file_base)
            csv_to_cpp.csv_to_cpp(file , w_directory + file_base +  ".h" , file_base)