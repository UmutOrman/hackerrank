from collections import OrderedDict
N = int(raw_input())
ord_dict = OrderedDict()
for i in range(N):
    inputy = raw_input().split()
    quantity = int(inputy.pop())
    item_name = " ".join(inputy)
    if(item_name not in ord_dict):
        ord_dict[item_name] = quantity
    else:
        ord_dict[item_name] += quantity
for i in ord_dict.items():
    print i[0] + " " str(i[1])
