from itertools import groupby
for k,g in groupby((raw_input()), int):
    print (len(list(g)),k),

