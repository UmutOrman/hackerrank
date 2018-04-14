import re
pattern = re.compile("#[A-Fa-f0-9]{3,6}")
property_flag = False
for _ in range(int(raw_input())):
    line = raw_input()
    if(" " in line and "{" not in line):
        results = re.findall(pattern, line)
        for result in results:
            print result