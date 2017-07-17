import math

def is_prime(number):
    if number > 1:
        if number == 2:
            return True
        if number % 2 == 0:
            return False
        for current in range(3, int(math.sqrt(number) + 1), 2):
            if number % current == 0: 
                return False
        return True
    return False

def get_primes(number, limit):
    while number < limit:
        if is_prime(number):
            yield number
        number += 1

i = int(math.sqrt(600851475143))
def traverse():
    answer = 0
    for factor in get_primes(3, i):
        print (factor)
        if (600851475143 % factor) == 0:
            answer = factor
            #print answer
            #print "lol"
            
    print (answer)
    return

traverse()
