from itertools import combinations
n = int(raw_input())
li = raw_input().split()
k = int(raw_input())
counts = 0
combos = list(combinations(li, k))
possiblities = len(combos)
for combo in combos:
    if 'a' in combo:
        counts += 1
print float(counts) / possiblities


