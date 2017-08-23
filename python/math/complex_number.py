import cmath
s = raw_input()
real_s = ""
imaginar_s = ""
start_index = 0
if (s[0] == '-'):
    real_s += s[0]
    start_index = 1
imaginer_part = False
for i in range(start_index,len(s) - 1 ):
    if(s[i] == '+' or s[i] == '-'):
        imaginer_part = True
    if(not imaginer_part):
        real_s += s[i]
    else:
        imaginar_s += s[i]
real = int(real_s)
imaginar = int(imaginar_s)
print abs(complex(real,imaginar))
print cmath.phase(complex(real,imaginar))
