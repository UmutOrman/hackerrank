luce_moje = "759564174782183587102004824765190123750334880277730763679965042806167092414126568340807033414872334732371694295371446525439152975114701133287773177839681757917152381714914358502729486366046889536730731669874031046298272309709873933853600423"

def get_numbers():
    number = 1
    while True:
        yield number
        number += 1

def get_triangular_numbers():
    n = 0
    nth_triangular_number = 0
    for number in get_numbers():
        nth_triangular_number += number
        n += 1
        yield (nth_triangular_number , n)

def get_rows(row_tekstovi):
    row_counter = 1
    number_of_rows = 0
    for triangular_number in get_triangular_numbers():
        if triangular_number[0] == len(row_tekstovi) / 2:
            number_of_rows = triangular_number[1]
            break
    for row_number in range(number_of_rows):
        current_row = []
        len_of_row = row_number + 1
        for i in range(len_of_row):
            current_row.append(int(row_tekstovi[row_number * len_of_row + (i*2):row_number * len_of_row + (i * 2) + 2]))
        yield current_row

rows_in_list = [] 
for row in get_rows(luce_moje):
    rows_in_list.append(row)

def get_max_sum(i, j, row_list):
    if i + 1 == len(row_list):
        max_sum = row_list[i][j]
    elif get_max_sum(i+1, j+1, row_list) > get_max_sum(i+1, j, row_list):
        max_sum = get_max_sum(i+1, j+1, row_list) + row_list[i][j]
    else:
        max_sum = get_max_sum(i+1, j, row_list) + row_list[i][j]
    return max_sum

print get_max_sum(0, 0, rows_in_list)
