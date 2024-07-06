import matplotlib.pyplot as plt

import math
import numpy as np

def BiCoe(n, k):
    if n < k :
        return -1
    return math.factorial(n) / (math.factorial(k) * math.factorial((n - k)))


def Bernstein(n, i, t):
    return BiCoe(n, i) * np.power((1-t), (n-i)) * np.power(t, i)


def BezierCurve(points, t):
    Gt = 0
    n = len(points) - 1
    for k, point in enumerate(points):
        lst = [point[0] * Bernstein(n, k, t), point[1] * Bernstein(n, k ,t)]
        Gt += np.array(lst)
    return Gt


def DrawBezierCurve(points):
    x = np.arange(0, 1, 0.01, dtype=np.float32)
    x = np.append(x, 1)
    print(x)
    gt = [BezierCurve(points, t) for t in x]
    gt_x = [g[0] for g in gt]
    gt_y = [g[1] for g in gt]
    ct_x = [ct[0] for ct in points]
    ct_y = [ct[1] for ct in points]
    print(gt_x)
    
    ct_t = np.append(np.arange(0,1,1/(len(points) - 1)),1)
    plt.plot(ct_t, ct_y, linestyle='dashed', linewidth=1)
    plt.plot(x, gt_y, linewidth = 3)
    plt.scatter(ct_t, ct_y)

    plt.show()



if __name__ == "__main__":
    points_list = []
    points_list.append([0,100])
    points_list.append([1,100])
    points_list.append([1,70])
    points_list.append([2,70])

    points = np.array(points_list)

    DrawBezierCurve(points)


