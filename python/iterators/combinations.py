from itertools import combinations
s = raw_input().split()
k = int(s[1])
string = s[0]
for i in xrange(1,k + 1 ):
    combo = list(combinations(string,i))
    my_list = []
    for combination in combo:
        my_list.append(sorted(combination))
    sorted_combo = sorted(my_list)
    for combination in sorted_combo:
        current_str = ""
        for letter in combination:
            current_str += letter
        print current_str
