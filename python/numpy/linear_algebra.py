import numpy
n = int(raw_input())
a = []
for i in range(n):
    a.append(map(float, raw_input().strip().split()))
print numpy.linalg.det(numpy.array(a))
