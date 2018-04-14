import numpy
numpy.set_printoptions(sign=' ')

arrA = numpy.array( raw_input().strip().split(), float)
print numpy.floor(arrA)
print numpy.ceil(arrA)
print numpy.rint(arrA)
