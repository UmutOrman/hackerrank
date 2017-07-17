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
    while True:
        if is_prime(number):
            yield number
        number += 1

def ten_thousand_oneth_prime():
    counter = 1
    for prime in get_primes():
        if counter == 10001:
            return prime
        else:
            counter += 1

print ten_thousand_oneth_prime()
