import numpy
n, m  = map(int, raw_input().strip().split())
a = []
for i in range(n):
    a.append(map(int, raw_input().strip().split()))
arrA = numpy.array(a)
b = []
for i in range(n):
    b.append(map(int, raw_input().strip().split()))
arrB = numpy.array(b)
print arrA+arrB
print arrA - arrB
print arrA * arrB
print arrA / arrB
print arrA % arrB
print arrA ** arrB

