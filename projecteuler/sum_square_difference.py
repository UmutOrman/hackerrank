def squarer(limit):
    number = 1
    while number < limit:
        yield number**2
        number += 1

def sum_of_squares():
    result = 0
    for i in squarer(101):
        result += i
    return result

def square_of_sums():
    sum = 0
    for i in range(1,101):
        sum += i
    result = sum**2
    return result

difference = square_of_sums() - sum_of_squares()
print difference
