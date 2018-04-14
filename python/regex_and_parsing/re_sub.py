import re
for i in range(int(raw_input())):
    print(re.sub(r'(?<= )(\&\&|\|\|)(?= )', (lambda line: 'and' if line.group(1) == '&&' else 'or'), raw_input()))