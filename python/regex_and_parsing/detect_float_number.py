import re
def is_float(text):
    return bool(re.match(r'^[-+]?[0-9]*\.[0-9]+$', text))
inputs = []
for i in xrange(int(raw_input())):
    print is_float(raw_input())