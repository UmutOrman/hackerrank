if __name__ == '__main__':
    s = raw_input()
    has_alphanumerical = False
    has_alpha = False
    has_numerical = False
    has_lower = False
    has_upper = False
    for i in range(len(s)):
        if(s[i].isdigit() or s[i].isalpha()):
            has_alphanumerical = True
        if(s[i].isalpha()):
            has_alpha = True
        if(s[i].isdigit()):
            has_numerical = True        
        if(s[i].islower()):
            has_lower = True
        if(s[i].isupper()):
            has_upper = True
    print  has_alphanumerical
    print has_alpha
    print has_numerical
    print has_lower
    print has_upper
