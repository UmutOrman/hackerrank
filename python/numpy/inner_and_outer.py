import numpy
arrA = numpy.array(raw_input().strip().split(), int)
arrB = numpy.array(raw_input().strip().split(), int)
print numpy.inner(arrA, arrB)
print numpy.outer(arrA, arrB)