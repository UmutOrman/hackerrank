def mutate_string(string, position, character):
    s_list = list(string)
    s_list[position] = character
    result = ''.join(s_list)
    return result

s = raw_input()
s2 = raw_input()
s2_elements = s2.split() 
index = int(s2_elements[0])
letter = s2_elements[1]
print mutate_string(s,index,letter)
