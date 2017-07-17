def get_numbers(limit):
    number = 1
    while number < limit:
        yield number
        number += 1

def get_collatz_seq(number):
    if number % 2 == 0:
        number_in_seq = number / 2
    else:
        number_in_seq = (number * 3 ) + 1
    yield number_in_seq
    while number_in_seq != 1:
        if number_in_seq % 2 == 0:
            number_in_seq /= 2
        else:
            number_in_seq = (number_in_seq * 3) + 1
        yield number_in_seq

def find_longest_collatz_seq():
    max = 0
    longest_chain_producer = 1
    for number in get_numbers(1000000):
        counter = 1
        for num in get_collatz_seq(number):
            counter += 1
        if counter > max:
            max = counter
            longest_chain_producer = number
    return longest_chain_producer
        

print find_longest_collatz_seq()

