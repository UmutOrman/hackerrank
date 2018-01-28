#!/bin/python
import sys

def get_ops_count(target_val, number):
    ops_count = (number - target_val) / 5
    ops_count = ops_count + ((number - target_val) % 5 ) / 2
    ops_count = ops_count + (((number - target_val) % 5) % 2) / 1
    return ops_count

def get_total_ops_count(target_val, arr):
    total_ops_count = 0
    for number in arr:
        total_ops_count = total_ops_count + get_ops_count(target_val, number)
    return total_ops_count

def equal(arr):
    min_ops = sys.maxint
    for i in xrange(0,5):
        ops_count = get_total_ops_count(min(arr) - i, arr)
        if( ops_count < min_ops):
            min_ops = ops_count
    return min_ops

if __name__ == "__main__":
    t = int(raw_input().strip())
    for a0 in xrange(t):
        n = int(raw_input().strip())
        arr = map(int, raw_input().strip().split(' '))
        result = equal(arr)
        print result

