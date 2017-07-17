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

def get_primes():
    number = 2
    while number < 2000000:
        if is_prime(number):
            yield number
        number += 1

def get_summation():
    sum = 0
    for prime in get_primes():
        sum += prime
    return sum

print get_summation()
