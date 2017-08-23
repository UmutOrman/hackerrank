lenA = int(raw_input())
setA = set(map(int,raw_input().split()))
n = int(raw_input())
for i in range(n):
    command = raw_input().split()
    setN = set(map(int,raw_input().split()))
    if (command[0] == "intersection_update" ):
        setA.intersection_update(setN)
    elif (command[0] == "update"):
        setA.update(setN)
    elif (command[0] == "difference_update"):
        setA.difference_update(setN)
    elif (command[0] == "symmetric_difference_update"):
        setA.symmetric_difference_update(setN)
print sum(setA)
