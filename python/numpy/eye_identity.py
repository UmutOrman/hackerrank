import numpy
line = raw_input().split()
M = int(line[0])
N = int(line[1])

print numpy.eye(M, N, k = 0)
