import re
#findall or finditer doesn't work in this problem
#since they can't find overlapping occurences of given regex
string = raw_input()
regex = re.compile(raw_input())
result = regex.search(string)
if not result:
    print (-1, -1)
else:
    while result:
        print (result.start(), result.end() -1)
        result = regex.search(string, result.start() + 1)
