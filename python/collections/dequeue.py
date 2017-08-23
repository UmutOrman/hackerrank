from collections import deque
N = int(raw_input())
d = deque()
for i in range(N):
    line = raw_input().split()
    if(line[0] == 'append'):
        d.append(line[1])
    elif(line[0] == 'appendleft'):
        d.appendleft(line[1])
    elif(line[0] == 'pop'):
        d.pop()
    elif(line[0] == 'popleft'):
        d.popleft()
print ' '.join(d)
