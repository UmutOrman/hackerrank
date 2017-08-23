from collections import namedtuple
N = int(raw_input())
column_names = raw_input().split()
Student = namedtuple('Student', " ".join(column_names))
for i in range(N):
    tup = tuple(raw_input().split())
    current_student = Student(*tup)
    sum_grades += current_student.MARKS
print float(sum_grades) / N
