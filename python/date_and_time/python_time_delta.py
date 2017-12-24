#!/bin/python

import sys
import datetime
from dateutil import parser

if __name__ == "__main__":    
    t = int(raw_input().strip())
    for a0 in xrange(t):
        t1_line = raw_input().strip()    
        t2_line = raw_input().strip()
        time1 = parser.parse(t1_line)
        time2 = parser.parse(t2_line)
        time_diff = time1 - time2
        print abs(time_diff.days * 24 * 60 * 60 + time_diff.seconds)
