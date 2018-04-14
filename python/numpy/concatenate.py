import numpy
n, m, p = map(int, raw_input().split())
first_array = []
for i in range(n):
    first_array.append(map(int, raw_input().split()))
array_1 = numpy.array(first_array)
second_array = []
for i in range(m):
    second_array.append(map(int, raw_input().split()))
array_2 = numpy.array(second_array)
print numpy.concatenate((array_1,array_2), 0)
