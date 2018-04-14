cube = lambda x: x**3

def fibonacci(n):
    if(n <= 0):
        return 0
    elif( n == 1):
        return 1
    else:
        return fibonacci(n-1) + fibonacci(n-2)

print map(cube, map(fibonacci,list(xrange(int(raw_input())))))
