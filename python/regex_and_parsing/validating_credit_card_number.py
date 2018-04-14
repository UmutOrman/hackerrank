import re

for _ in range(int(raw_input())):
    try:
        cc_number = raw_input()
        assert re.match(r'^[4-6]{1}\d{3}(-?)\d{4}\1\d{4}\1\d{4}$', cc_number)
        assert not re.search(r'(\d)\1{3,}', "".join(cc_number.split("-")))
        assert not re.search(r'[^0-9\-].*', cc_number)
    except:
        print "Invalid"
    else:
        print "Valid"