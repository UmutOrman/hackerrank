import numpy
numpy.set_printoptions(sign=' ')
n,m = map(int, raw_input().strip().split())
a = []
for i in range(n):
    a.append(map(int, raw_input().strip().split()))
arrA = numpy.array(a)
print numpy.mean(arrA, 1)
print numpy.var(arrA, 0)
print numpy.std(arrA, None)