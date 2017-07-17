import math

def get_numbers():
    number = 3
    while number < 1000:
        yield number
        number += 1

def get_pythogoreans():
    for a in get_numbers():
        for b in get_numbers():
            for c in get_numbers():
                if (a**2) + (b**2) == (c**2) and (a + b + c) == 1000:
                    print [a,b,c]
                    return

get_pythogoreans()
            
