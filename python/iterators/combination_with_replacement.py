from itertools import combinations_with_replacement
s = raw_input().split()
k = int(s[1])
string = s[0]
combo = list(combinations_with_replacement(string,k))
my_list = []
for combination in combo:
    my_list.append(sorted(combination))
sorted_combo = sorted(my_list)
for combination in sorted_combo:
    current_str = ""
    for letter in combination:
        current_str += letter
    print current_str
