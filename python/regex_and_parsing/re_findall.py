import re

consonants = '[qwrtypsdfghjklzxcvbnm]'
results = re.findall('(?<=' + consonants +')([aeiou]{2,})(?='+ consonants + ")", raw_input(), re.I)
print('\n'.join(results or ['-1']))