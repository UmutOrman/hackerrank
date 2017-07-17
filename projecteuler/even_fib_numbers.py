def Fib(n):
    if n == 1:
        return 1
    elif n == 2:
        return 2
    else:
        return Fib(n-2) + Fib(n-1)

list = []
checker = 1
n=1

while checker < 4000000:
    checker = Fib(n)
    if checker%2 == 0:
        list.append(checker)
    n += 1

print "meh"
result = sum(list)
print list
print result
print "lol"    
