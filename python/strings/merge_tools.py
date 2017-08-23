def merge_the_tools(string, k):
    n_substrings = len(string) / k
    for i in range(n_substrings):
        result = ""
        hit_list = "" 
        for j in range(k):
            if string[i*k + j] not in hit_list:
                result += string[i*k+j]
                hit_list += string[i*k+j]
        print result

s = raw_input()
n = int(raw_input())
merge_the_tools(s,n)
