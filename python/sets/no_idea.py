n,m  = map(int,raw_input().split())
arr = set(map(int,raw_input().split()))
A = map(int,raw_input().split())
B = map(int,raw_input().split())
happiness = 0
for i in arr:
    if i in A:
        happiness += 1
    if i in B:
        happiness -= 1
print happiness
