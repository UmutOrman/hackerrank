import re
pattern = re.compile("^[7-9]{1}\d{9}$")
for i in range(int(raw_input())):
    if(re.match(pattern, raw_input())):
        print "YES"
    else:
        print "NO"