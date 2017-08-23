from __future__ import print_function

def print_rangoli(size):
    moj_alphabet = []
    for i in range(size):
        moj_alphabet.append(chr(ord('a') + i))
    line_length = (size - 1) * 4 + 1 
    for i in range(size - 1):
        for j in range(line_length / 2 - (i * 2)):
            print("-",end="")
        for j in range(i):
            print(moj_alphabet[size-1-j] + "-",end="")
        print(moj_alphabet[size-1-i],end="")
        for j in range(i):
            print("-" + moj_alphabet[size- 1 - i + j + 1],end="" )
        for j in range(line_length / 2 - (i * 2)):
            print("-",end="")
        print("\n",end="")
    
    for j in range(size-1):
        print(moj_alphabet[size-1-j] + "-",end="")
    print(moj_alphabet[0],end="")
    for j in range(size - 1):
            print("-" + moj_alphabet[j + 1],end="" )
    print("\n",end="")

    for i in range(size - 1):
        for j in range((i+1)*2):
            print("-",end="")
        for j in range((line_length / 2 - (i+1) *2 ) / 2):
            print(moj_alphabet[size-1-j] + "-",end="")
        print(moj_alphabet[i+1],end="")
        for j in range((line_length / 2 - (i+1) *2 ) / 2):
            print("-" + moj_alphabet[i + 1 + j + 1],end="" )
        for j in range((i+1)*2):
            print("-",end="")
        print("\n",end="")

n = int(raw_input())
print_rangoli(n)
