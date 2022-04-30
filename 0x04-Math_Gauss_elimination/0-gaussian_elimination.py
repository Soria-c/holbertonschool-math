#!/usr/bin/env python3
import numpy as np


def gaussian_elimination(A, b):
    b = np.expand_dims(b, axis=0)
    c = np.concatenate((A, b.T), axis=1)
    if not(np.linalg.det(A)):
        print("You can't divide by zero!")
        return
    lenght = len(c)
    l2 = len(c[0])
    for i in range(0, lenght - 1):
        for j in range(i + 1, lenght):
            if not(c[i][i]):
                print("You can't divide by zero!")
                return
            else:
                c[j] = np.array(c[i] * ((c[j][i] / c[i][i]) * -1)) + c[j]
    r = np.ndarray((lenght), dtype=object)
    x = c[lenght - 1][l2 - 1] / c[lenght - 1][l2 - 2]
    if ( x.is_integer()):
        r[lenght - 1] = int(x)
    else:
        r[lenght - 1] = round(x, 9)
    for i in range(lenght - 2, -1, -1):
        summ = 0
        for j in range(i, -1, -1):
            c[j][i + 1] *= -x
        for k in range(i + 1, lenght + 1):
            summ += c[i][k]
        x = summ / c[i][i]
        if ( x.is_integer()):
            r[i] = int(x)
        else:
            r[i] = round(x, 9)
    return r
