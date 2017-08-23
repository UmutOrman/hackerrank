from collections import OrderedDict
N = int(raw_input())
ord_dict = OrderedDict()
for i in range(N):
    word = raw_input()
    if(word not in ord_dict):
        ord_dict[word] = 1
    else:
        ord_dict[word] += 1
print len(ord_dict)
for item in ord_dict.items():
    print item[1],
print
