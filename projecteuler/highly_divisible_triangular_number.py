import math
import time

def get_numbers():
    number = 1
    while True:
        yield number
        number += 1

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

def divisible_by_power(number, divider):
    counter = 0
    while number%divider == 0:
        number = number / divider
        counter += 1
    return counter

def get_triangular_numbers():
    nth_triangular_number = 0
    for number in get_numbers():
        nth_triangular_number += number
        yield nth_triangular_number

def get_factors(my_number):
    prime_factors = {}
    number_of_divisors = 1
    square = int(math.sqrt(my_number))
    for prime in get_primes(square+1):
        if my_number%prime == 0:
            prime_factors[prime] = divisible_by_power(my_number, prime)
            number_of_divisors *= prime_factors[prime] + 1
    return number_of_divisors

def get_triangle_number_with_divisors():
    for number in get_triangular_numbers():
        print number
        print get_factors(number)
        if get_factors(number) > 500:
            return number

start_time = time.time()            
print get_triangle_number_with_divisors()     
print time.time() - start_time
