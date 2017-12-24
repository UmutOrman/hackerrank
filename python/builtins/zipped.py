n, x =  map(int, raw_input().split())
X = []
for i in range(x):
    next = map(float, raw_input().split())
    X .append(next)
result = zip(*X)
for i in range(n):
    print sum(result[i]) / x