from collections import Counter
n = int(raw_input())
sizes_list = Counter(map(int, raw_input().split()))
n_requests = int(raw_input())
profit = 0
for i in range(n_requests):
    request, money = map(int, raw_input().split())
    if(sizes_list[request] > 0):
        profit += money
        sizes_list[request] -= 1
print profit

