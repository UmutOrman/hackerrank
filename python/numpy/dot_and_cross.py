import numpy
n = int(raw_input())
a = []
for i in range(n):
    a.append(map(int, raw_input().strip().split()))
A = numpy.array(a)
b = []
for i in range(n):
    b.append(map(int, raw_input().strip().split()))
B = numpy.array(b)
print numpy.matmul(a, b)