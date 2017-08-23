def capitalize(string):
    prev_space = False
    result = string[0].upper()
    for i in range(1, len(string)):
        if(string[i] == ' '):
            prev_space = True
            result += ' '
            continue            
        if(prev_space):
            result += string[i].upper()
            prev_space = False
        else:
            result += string[i]
            prev_space = False
    print result 

s = raw_input()
capitalize(s)
