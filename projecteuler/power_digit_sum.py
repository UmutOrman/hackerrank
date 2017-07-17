def get_sum_of_power_digits(number, power ):
    string_answer = str(number**(power))
    sum = 0
    for num_letter in string_answer:
        sum += int(num_letter)
    return sum

print get_sum_of_power_digits(2,1000)
        
    
