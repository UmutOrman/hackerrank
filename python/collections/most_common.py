from collections import defaultdict
s = raw_input()
d = defaultdict(int)
for i in range(len(s)):
    if(s[i] not in d):
        d[s[i]] = 1
    else:
        d[s[i]] += 1
counter = 0
#for lexicographic ordering
keys = []
values = []
for w in sorted(d, key = d.get, reverse = True):
    counter += 1
    keys.append(w)
    values.append(d[w])
    if(counter == 3):
        break
if(keys[0] > keys[1] and values[0] == values[1]):
    tmp = keys[0]
    keys[0] = keys[1]
    keys[1] = tmp
if(keys[1] > keys[2] and values[1] == values[2]):
    tmp = keys[1]
    keys[1] = keys[2]
    keys[2] = tmp
for i in range(3):
    print keys[i], values[i]
    
