import calendar
line = map(int,raw_input().split())#according to month,day and year
print calendar.day_name[calendar.weekday(line[2],line[0],line[1])].upper()
