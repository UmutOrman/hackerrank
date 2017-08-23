from itertools import groupby

things = [("vehicle", "bus"), ("animal", "duck"), ("plant", "cactus"), ("vehicle", "speed boat"), ("animal", "bear")]

for key, group in groupby(things, lambda x: x[0]):
    for thing in group:
        print "A %s is a %s." % (thing[1], key)
    print " "
