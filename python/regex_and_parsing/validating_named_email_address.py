import re
pattern = re.compile("^<[a-zA-Z][a-zA-Z0-9_\-\.]*@[a-zA-Z]+\.[a-zA-Z]{1,3}>$")
def fun(name_email_tuple):
    return re.match(pattern, name_email_tuple[1])

def filter_mail(names_emails):
    return filter(fun, names_emails)

if __name__ == '__main__':
    n = int(raw_input())
    names_emails = []
    for _ in range(n):
        name, email = raw_input().split(" ")
        names_emails.append((name, email))

    filtered_emails = filter_mail(names_emails)
    for name_mail in filtered_emails:
        print name_mail[0] + " " + name_mail[1]