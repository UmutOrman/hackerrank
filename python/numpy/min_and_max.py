import numpy
n,m = map(int, raw_input().strip().split())
a = []
for i in range(n):
    a.append(map(int, raw_input().strip().split()))
print numpy.min(numpy.array(a), 1).max()