n = int(raw_input())
arr_set = set(map(int,raw_input().split())) 
n_commands = int(raw_input())
for i in range(n_commands):
    command = raw_input().split()
    if (command[0] == "pop"):
        arr_set.pop()
    elif (command[0] == "remove"):
        arr_set.remove(int(command[1]))
    elif (command[0] == "discard"):
        arr_set.discard(int(command[1]))
print sum(arr_set)
    
