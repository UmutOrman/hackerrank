def average(array,n):
    arr_set = set(array)
    print sum(arr_set) / n
    
n = int(raw_input())
array = map(int,raw_input().split())
average(array)
