from __future__ import print_function
from itertools import product
first = map(int,raw_input().split())
second = map(int,raw_input().split())
moj_list = list(product(first,second))
print (*moj_list,sep = ' ')
