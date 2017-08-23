from itertools import product
k,m = map(int, raw_input().split())
total_li = []
for i in range(k):
    li = map(int,raw_input().split())
    del li[0]
    total_li.append(li)
moj_li = list(product(*total_li))
maximum = 0
for tup in moj_li:
    result = 0
    for element in tup:
        result += element**2
    if(result % m) > maximum:
        maximum = result % m
print maximum
