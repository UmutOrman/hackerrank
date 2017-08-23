from itertools import permutations
s = raw_input().split()
k = int(s[1])
string = s[0]
permut = sorted(list(permutations(string,k)))
for permutation in permut:
    current_str = ""
    for letter in permutation:
        current_str += letter
    print current_str

