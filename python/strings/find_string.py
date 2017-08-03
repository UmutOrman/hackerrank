def count_substring(string, sub_string):
    sub_len = len(sub_string)
    counter = 0
    n_occurences = 0
    for i in range(len(string)):
        if(string[i] == sub_string[counter]):
            counter += 1
            if(counter == sub_len):                
                n_occurences += 1
                counter = 0
                if(i + 1 < len(string) and counter + 1 < sub_len and  sub_string[0] == string[i] and sub_string[counter + 1] == string[i+1]):
                    counter = 1
        else:
            counter = 0
    return n_occurences

s1 = raw_input()
s2 = raw_input()
print count_substring(s1,s2)
