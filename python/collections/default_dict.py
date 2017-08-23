from collections import defaultdict
n,m = map(int,raw_input().split())
moj_d = defaultdict(list)
for i in range(1, n + 1):
    val = raw_input()
    moj_d[val].append(i)

for i in range(m):
    val = raw_input()
    if(val not in moj_d):
        print -1
    else:
        for element in moj_d[val]:
            print element,
