#!/bin/python
from __future__ import print_function

if __name__ == "__main__":
    n, m = raw_input().strip().split(' ')
    n, m = [int(n), int(m)]
    arr = []
    for arr_i in xrange(n):
        arr_temp = map(int,raw_input().strip().split(' '))
        arr.append(arr_temp)
    k = int(raw_input().strip())
    arr.sort(key=lambda arr: arr[k])
    for i in range(n):
        for attribute in arr[i]:
            print(attribute, end=' ')
        print("")