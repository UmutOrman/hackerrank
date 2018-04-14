import re

n, m = map(int,raw_input().strip().split(' '))
matrix = []
matrix_i = 0
for _ in xrange(m):
    matrix.append('')
for matrix_i in xrange(n):
    matrix_t = str(raw_input())
    for matrix_j in xrange(len(matrix_t)):
        matrix[matrix_j] += matrix_t[matrix_j]

print re.sub(r'(?<=[A-Za-z0-9])([^A-Za-z0-9]+)(?=[A-Za-z0-9])', ' ', ''.join(matrix))

