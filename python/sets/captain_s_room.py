K = int(raw_input())
arr = map(int,raw_input().split())
set_arr = set(arr)
print (sum(set_arr)*K - sum(arr)) / (K-1)
