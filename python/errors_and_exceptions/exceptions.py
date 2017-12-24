n = int(raw_input())
for i in range(n):
    a,b = raw_input().split()
    try:
        print int(a) / int(b)
    except (ZeroDivisionError,ValueError) as e:
        print "Error Code:", e
