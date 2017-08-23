#!/usr/bin/env python
# -*- coding: utf-8 -*-
import math
AB = int(raw_input())
BC = int(raw_input())
result = int(round(math.degrees(math.atan2(AB, BC))))
print str(result) + '°'
