def check_palindrome(number):
    num = str(number)
    is_palindrome = True
    other_value = len(num) - 1
    for value in num[:len(num)/2]:
        if value != num[other_value]:
            is_palindrome = False
        other_value -= 1
    return is_palindrome


def find_largest_palindrome():
    max = 0
    for palindrome in get_palindromes():
        if palindrome > max:
            max = palindrome
    return max

def get_palindromes():
    for i in range(100, 1000):
        for j in range(100, 1000):
            if check_palindrome(i*j):
                yield i*j
        
print find_largest_palindrome()
#print check_palindrome(131)
