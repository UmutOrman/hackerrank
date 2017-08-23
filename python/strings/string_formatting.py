def print_formatted(number):
    space_len = len(str(bin(number))) - 2 
    for i in range(1,number+1):    
        space_len0 = space_len - len(str(i))
        space_len1 = space_len - (len(str(oct(i))) - 2)
        space_len2 = space_len - (len(str(hex(i))) - 3)
        space_len3 = space_len - (len(str(bin(i))) - 3)
        print space_len0*" " + str(i) + space_len1*" " + str(oct(i))[1:] + space_len2*" " + str(hex(i))[2:].upper() + space_len3*" " + str(bin(i))[2:]

N = int(raw_input())
print_formatted(N)

