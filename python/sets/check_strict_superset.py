setA = set(map(int,raw_input().split()))
n = int(raw_input())
result = True
for i in range(n):
    current_set = set(map(int,raw_input().split()))
    if not (current_set < setA):
        result = False
        break
print result
