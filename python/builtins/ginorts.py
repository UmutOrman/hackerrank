from __future__ import print_function
s = raw_input()
s = sorted(s,key = lambda x: (x.isdigit() and int(x)%2==0, x.isdigit(),x.isupper(),x.islower(),x))
print(*(s),sep = '')