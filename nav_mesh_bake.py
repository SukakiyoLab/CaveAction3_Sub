import csv
import numpy as np

from xml.dom import minidom
import xml.etree.ElementTree as ET

import sys

csv_data = []

with open("./navmesh_data_1.csv",encoding="utf8") as f:
  csv_reader = csv.reader(f)
  for data in csv_reader:
    csv_data.append([int(s) for s in data])
    
np_data = np.asarray(csv_data)

row_count = 1

border_0_to_1 = [[]]
border_1_to_0 = [[]]
border = [[]]
size_list = []


for i in range(np.shape(np_data)[0] - 1):
  
  if not np.all(np_data[i + 1] == np_data[i]):
    border_list_0_to_1_raw = set({})
    border_list_1_to_0_raw = set({})
    size_list.append(row_count)
    row_count = 1
    
    for j in range(np.shape(np_data[i + 1])[0] - 1):  

      if np_data[i + 1][j + 1] == 0 and np_data[i + 1][j] == 1:
        border_list_1_to_0_raw.add(j+1)

      elif np_data[i + 1][j + 1] == 1 and np_data[i + 1][j] == 0:
        border_list_0_to_1_raw.add(j+1) 

    border_1_to_0.append(sorted(border_list_1_to_0_raw))
    border_0_to_1.append(sorted(border_list_0_to_1_raw))
    border.append(sorted(border_list_1_to_0_raw | border_list_0_to_1_raw))


        
  else:
    row_count += 1

print(border_0_to_1)
print(border_1_to_0)
print(size_list)
#print(border)

if not len(border_0_to_1) == len(border_1_to_0):
  print("Error : Failed to Create NavMesh!")



TILE_SIZE = 32

class Rect:

  def __init__(self, id, width, height, center_x, center_y):
    self.id = id
    self.width = width
    self.height = height
    self.center_x = center_x
    self.center_y = center_y
    self.next_lists = []
    self.next_dists = []

  def get_width(self):
    return self.width
  
  def get_height(self):
    return self.height
  
  def get_center_x(self):
    return self.center_x
  
  def get_center_y(self):
    return self.center_y
  
  def add_next(self, next_rect):
    self.next_lists.append(next_rect)

  def calculate_dist(self):
    for item in self.next_lists:
      if int(item.get_center_y()) == int(self.get_center_y()):
        self.next_dists.append(abs(item.get_center_x() - self.get_center_x()))
      else:
        self.next_dists.append(abs(item.get_center_y() - self.get_center_y()))

  

rects = [[]]
rects_map = {}
sum_height = 1

id = 0

for i in range(len(border) - 2):
  pre_border_list = np.asarray(list(border[i]),dtype=int)
  next_border_list = np.asarray(list(border[i + 2]),dtype=int)
  

  pre_border_list_range = []
  next_border_list_range = []
  

  for j in range(len(border_0_to_1[i+1])):
    max_val = sorted(list(border_0_to_1[i+1]))[j]
    min_val = sorted(list(border_1_to_0[i+1]))[j]

    print(max_val)
    print(min_val)

    for k,item in enumerate(pre_border_list):
      if item < max_val and item > min_val:
        pre_border_list_range.append(item)

    for k,item in enumerate(next_border_list):
      if item < max_val and item > min_val:
        next_border_list_range.append(item)
    

  
  result_border = sorted(set(border[i + 1])
                         | set(pre_border_list_range)
                         | set(next_border_list_range))


  #print(size_list[i + 1])
  print(result_border)

  rects_row = []

  for j in range(len(result_border) - 1):

    key = 0

    for k in range(len(border_0_to_1[i+1])):
      if result_border[j + 1] <= border_0_to_1[i+1][k] and result_border[j] >= border_1_to_0[i+1][k]:
        key += 1

    if key == 0:
      continue

    rects_map[id] = Rect(id,
                      (result_border[j + 1] - result_border[j]) * 32 / 2,
                      size_list[i + 1] * 32 / 2, 
                      (result_border[j + 1] + result_border[j]) * 32 / 2,
                      float((sum_height + size_list[i + 1] / 2) * 32))
    rects_row.append(rects_map[id])
    id += 1

    print("-----")
    print("ID : {0}".format(rects_row[-1].id))
    print("Width : {0}".format(rects_row[-1].get_width()))
    print("Height : {0}".format(rects_row[-1].get_height()))
    print("X : {0}".format(rects_row[-1].get_center_x()))
    print("Y : {0}".format(rects_row[-1].get_center_y()))
    print("-----")
    
  sum_height += size_list[i + 1]
  print("Sum Height : {}".format(sum_height))

  rects.append(rects_row)

rects.append([])

for num in range(len(rects) - 1):

  for item in rects[num+1]:
    left = item.get_center_x() - item.get_width()
    right = item.get_center_x() + item.get_width()

    for pre_item in rects[num]:
      if pre_item.get_center_x() > left and pre_item.get_center_x() < right:
        item.add_next(pre_item)
        pre_item.add_next(item)

    for next_item in rects[num + 2]:
      if next_item.get_center_x() > left and next_item.get_center_x() < right:
        item.add_next(next_item)
        next_item.add_next(item)

for num in range(len(rects) - 1):
  for j in range(len(border_0_to_1[num+1])):
    max_val = sorted(list(border_0_to_1[num+1]))[j]
    min_val = sorted(list(border_1_to_0[num+1]))[j]
    row_rects = []

    for item in rects[num+1]:
      if item.get_center_x() / 32 > min_val and item.get_center_x() / 32 < max_val:
        row_rects.append(item)

    for k in range(len(row_rects) - 1):
      row_rects[k].add_next(row_rects[k+1])
      row_rects[k+1].add_next(row_rects[k])


for row in rects:
  for rect in row:
    rect.next_lists = sorted(set(rect.next_lists),key=lambda x:x.id)
    rect.calculate_dist()


for num in range(len(rects) - 1):

  for item in rects[num+1]:
    print("ID {0} : [".format(item.id),end="")
    for i in range(len(item.next_lists)):
      print("{0},".format(item.next_lists[i].id), end="")
    print("]")
    print("[",end="")
    for i in range(len(item.next_dists)):
      print("{0},".format(item.next_dists[i]),end="")
    print("]\n-----")



print(id - 1)


class Node:
  def __init__(self, parent=None, rect=None):
    self.parent = parent
    self.rect = rect

    self.cost_g = 0
    self.cost_h = 0
    self.cost_f = 0

  def __eq__(self, other):
    return self.rect.id == other.rect.id
  


class Route:
  
  def __init__(self,start,end,path):
    self.start = start
    self.end = end
    self.path = path


def astar(start, end) -> Route:
  start_node = Node(None,start)
  start_node.cost_g = start_node.cost_h = start_node.cost_f = 0
  end_node = Node(None,end)
  end_node.cost_g = end_node.cost_h = end_node.cost_f = 0

  open_list = []
  closed_list = []

  open_list.append(start_node)
  
  while len(open_list) > 0:

    current_node = open_list[0]
    current_index = 0
    for index, item in enumerate(open_list):
      if item.cost_f < current_node.cost_f:
        current_node = item
        current_index = index

    open_list.pop(current_index)
    closed_list.append(current_node)

    if current_node.rect.id == end_node.rect.id:
      path = []
      current = current_node
      while current is not None:
        path.append(current.rect.id)
        current = current.parent
      return Route(start.id,end.id,path[::-1])
    
    children = []

    for i,new_rect in enumerate(current_node.rect.next_lists):
      new_node = Node(current_node, new_rect)
      children.append(new_node)

    
    for child in children:

      if len([closed_child for closed_child in closed_list if closed_child == child]) > 0:
        continue

      child.cost_g = current_node.cost_g + abs(child.rect.get_center_x() - current_node.rect.get_center_x()) + abs(child.rect.get_center_y() - current_node.rect.get_center_y())
      child.cost_h = abs(end_node.rect.get_center_x() - child.rect.get_center_x()) + abs(end_node.rect.get_center_y() - child.rect.get_center_y())
      child.cost_f = child.cost_g + child.cost_h

      if len([open_node for open_node in open_list if child.rect.id == open_node.rect.id and child.cost_g > open_node.cost_g]) > 0:
        continue

      open_list.append(child)

  
#route = astar(rects_map[0],rects_map[7])

route_map = {}

for start_num in range(id):
  for end_num in range(id):
    route_map[(start_num,end_num)] = astar(rects_map[start_num],rects_map[end_num])
    print("({0},{1}) : {2}".format(start_num,end_num,route_map[(start_num,end_num)].path))

def pretty_print(current, parent=None, index=1, depth=0):
  for i, node in enumerate(current):
    pretty_print(node, current, i ,depth + 1)
  if parent is not None:
    if index == 0:
      parent.text = '\n' + ('\t' * depth)
    else:
      parent[index - 1].tail = '\n' + ('\t' * depth)
    
    if index == len(parent) - 1:
      current.tail = '\n' + ('\t' * (depth - 1))

def save_rect():
  root = ET.Element('root')
  for key in rects_map.keys():
    rect_item = rects_map[key]

    rect_root = ET.SubElement(root, 'rect')
    rect_id = ET.SubElement(rect_root, 'id')
    rect_id.text = str(rect_item.id)
    rect_x = ET.SubElement(rect_root, 'x')
    rect_x.text = str(rect_item.center_x)
    rect_y = ET.SubElement(rect_root, 'y')
    rect_y.text = str(rect_item.center_y)
    rect_w = ET.SubElement(rect_root, 'width')
    rect_w.text = str(rect_item.width)
    rect_h = ET.SubElement(rect_root, 'height')
    rect_h.text = str(rect_item.height)

  pretty_print(root)

  tree = ET.ElementTree(root)

  file_name = sys.argv[1]
  with open(file_name, "wb") as file:
    tree.write(file,encoding='utf-8',xml_declaration=True)

def save_route():
  write_rows = []

  #root = ET.Element('root')
  for key in route_map.keys():
    row = []

    route = route_map[key]
    #print("key : {0} -> {1}".format(key[0], key[1]))
    if not route.start == route.end:
      
      
      tmp = 0
      path_length = 0
      for item in route.path:
        if tmp == 1:
          row.append(route.start)
          row.append(route.end)
          row.append(item)
          
        tmp += 1
        path_length += 1
      row.append(path_length)
      write_rows.append(row)
  print(write_rows)

    
      
  #pretty_print(root)

  #tree = ET.ElementTree(root)

  file_name = sys.argv[2]
  #with open(file_name, "wb") as file:
  #  tree.write(file,encoding='utf-8',xml_declaration=True)
  with open(file_name, "w", newline="") as file:
    writer = csv.writer(file)
    writer.writerows(write_rows)
    


save_rect()
save_route()

