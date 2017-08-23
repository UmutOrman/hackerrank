from collections import deque
N = int(raw_input())
for test in range(N):
    n_cubes = int(raw_input())
    d = deque(map(int, raw_input().split()))
    flag = True
    while(len(d) > 2):
        i = d.popleft()
        j = d.popleft()
        r = d.pop()
        if(i == max(i,r)):
            if(i >= j):
                d.appendleft(j)
                d.append(r)
            else:
                flag = False
                break
        else:
            if(r >= j):
                d.appendleft(j)
                d.appendleft(i)
            else:
                flag = False
                break
    if(flag):
        print "Yes"
    else:
        print "No"
