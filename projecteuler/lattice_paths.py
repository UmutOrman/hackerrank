def get_combination(n,m):
    result = 1
    i = n
    while i > n - m:
        result *= i
        i -= 1
    j = 1
    while j <= m:
        result /= j
        j += 1
    return result

print get_combination(40, 20)
