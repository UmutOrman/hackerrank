import re

def wrapper(f):
    def fun(l):
        l = [re.sub(r'(0|91|\+91)?(\d{5})(\d{5})', r'+91 \2 \3', mobile_number) for mobile_number in l]
        f(l)
    return fun


@wrapper
def sort_phone(l):
    print '\n'.join(sorted(l))

if __name__ == '__main__':
    l = [raw_input() for _ in range(int(input()))]
    sort_phone(l)