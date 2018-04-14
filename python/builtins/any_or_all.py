n = int(raw_input())
list = raw_input().split()
print any( num == num[::-1] for num in list) and all(int(num) > 0 for num in list)