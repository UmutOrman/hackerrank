import numpy

n ,m = map(int, raw_input().split(" "))
arr_of_future = []
for i in range(n):
    next_line = []
    for number in map(int, raw_input().strip().split(" ")):
        next_line.append(number)
    arr_of_future.append(next_line)
print numpy.array(arr_of_future).transpose()
print numpy.array(arr_of_future).flatten()