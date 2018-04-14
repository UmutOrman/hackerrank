import numpy
n, m = map(int, raw_input().strip().split())
my_funny_valentine = []
for i in range(n):
    my_funny_valentine.append(map(int, raw_input().strip().split()))
dude_looks_like_a_lady = numpy.array(my_funny_valentine)
print numpy.sum(dude_looks_like_a_lady, 0).prod()