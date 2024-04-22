import csv
import sys

def csv_to_cpp(r_path : str, w_path : str,  func_name : str):

  if r_path.split(".")[-1] == "csv" and w_path.split(".")[-1] == "h":
    with open(r_path, encoding='utf8', newline='') as r_f:
      csvreader = csv.reader(r_f)

      with open(w_path,mode='w', encoding='utf8') as w_f:
        w_f.write("#pragma once\n")
        w_f.write("#include <vector>\n")
        w_f.write("\n")
        w_f.write("std::vector<std::vector<unsigned short>> {}() {{\n".format(func_name))
        w_f.write("    return std::vector<std::vector<unsigned short>> {{\n".format())

        for row in csvreader:
          line = "{{".format()
          for num,item in enumerate(row):
            if num == 0:
              line += item
            else:
              line += "," + item
          w_f.write("        {}}},\n".format(line))
        w_f.write("    }};\n".format())
        w_f.write("}}\n".format())


  else:  
    print("Error : Failed to Create CPP Header File!\n")

    

if __name__ == "__main__":
  read_file = sys.argv[1]
  write_file = read_file.split(".csv")[-2] + ".h"
  function_name = sys.argv[2]
  csv_to_cpp(read_file, write_file, function_name)


