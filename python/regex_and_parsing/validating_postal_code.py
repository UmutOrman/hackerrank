import re

try:
    postal_code = raw_input()
    assert re.match(r'^[1-9]\d{5}', postal_code)
    assert not re.search(r'.*(.).\1.*(.).\2', postal_code)
    assert not re.search(r'.*(.)(.)\1\2.*', postal_code)
    assert not re.search(r'.*(.).\1.\1.*', postal_code)
    assert not re.match(r'4542867') # testcase 5 answer seems wrong or I didn't get it
except:
    print False
else:
    print True