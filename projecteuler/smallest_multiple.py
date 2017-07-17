"""
def get_numbers():
    number = 2520
    while True:
        yield number
        number += 1

#for i in get_numbers():
#    print i


def is_evenly_divisible(number):
    meh = True
    for i in range(2,21):
        if number%i != 0:
            meh = False
    return meh

def get_smallest_multiple():
    for number in get_numbers():
        if is_evenly_divisible(number):
            print number
            return

get_smallest_multiple()
"""
#############--------MORE-EFFECTIVE-SOLUTION------###########
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

def get_primes(limit):
    number = 2
    while number < limit:
        if is_prime(number):
            yield number
        number += 1

multiple_factors = {}
for prime in get_primes(20):    
    multiple_factors[prime] = 0

def divisible_by_power(number, divider):
    counter = 0
    while number%divider == 0:
        number = number / divider
        counter += 1
    return counter

#print divisible_by_power(8,3)

def smallest_multiply():
    result = 1
    for prime in get_primes(20):
        max = 0
        for i in range(2,21):
            if divisible_by_power(i, prime) > max:
                max = divisible_by_power(i, prime)
        multiple_factors[prime] = max
        result = result * (prime**max)
    return result

print smallest_multiply()

