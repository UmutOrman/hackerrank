def split_and_join(line):
    line_list = line.split()
    line_joint = "-".join(line_list)
    return line_joint

line = raw_input()
print split_and_join(line)
