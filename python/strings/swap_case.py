def swap_case(s):
    sn = ""
    for i in range(len(s)):
        if(s[i].isupper()):
            sn += s[i].lower()
        else:
            sn += s[i].upper()
    return sn

s = raw_input()
result = swap_case(s)
print result
