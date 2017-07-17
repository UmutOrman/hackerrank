def get_numbers():
    number = 1
    while number < 1001:
        yield number
        number += 1

number_dict = {1:"one", 2:"two", 3:"three", 4:"four", 5:"five", 6:"six", 7:"seven", 8:"eight", 9:"nine", 10:"ten", 11:"eleven", 12:"twelve", 13:"thirteen", 14:"fourteen", 15:"fifteen", 16:"sixteen", 17:"seventeen", 18:"eighteen", 19:"nineteen", 20:"twenty", 30:"thirty", 40:"forty", 50:"fifty", 60:"sixty", 70:"seventy", 80:"eighty", 90:"ninety", 100:"onehundred", 200:"twohundred", 300:"threehundred", 400:"fourhundred", 500:"fivehundred", 600:"sixhundred", 700:"sevenhundred", 800:"eighthundred", 900:"ninehundred", 1000:"onethousand"}

sec_number_dict = {2:"twenty", 3:"thirty", 4:"forty",5:"fifty",6:"sixty", 7:"seventy", 8:"eighty", 9:"ninety"}

third_number_dict = {1:"onehundred",2:"twohundred", 3:"threehundred", 4:"fourhundred", 5:"fivehundred", 6:"sixhundred", 7:"sevenhundred", 8:"eighthundred", 9:"ninehundred"}

def translate_number(number):
    if len(str(number)) == 1:
        return number_dict[number]
    elif len(str(number)) == 2:
        if number in number_dict:
            return number_dict[number]
        else:
            return sec_number_dict[int(str(number)[0])] + number_dict[int(str(number)[1])]
    else:
        if number in number_dict:
            return number_dict[number]
        else:
            if str(number)[1] == '0':
                return third_number_dict[int(str(number)[0])] + "and" +  number_dict[int(str(number)[2])]
            elif int(str(number)[1:]) in number_dict:
                return third_number_dict[int(str(number)[0])] + "and" + number_dict[int(str(number)[1:])]
            else:
                return third_number_dict[int(str(number)[0])] + "and" + sec_number_dict[int(str(number)[1])] + number_dict[int(str(number)[2])]

def numbers_letter_counts():
    total_count = 0
    for number in get_numbers():
        print number
        total_count += len(str(translate_number(number)))
    return total_count

print numbers_letter_counts()

        
            
            
        
