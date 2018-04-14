from HTMLParser import HTMLParser

class MyHTMLParser(HTMLParser):
    def handle_comment(self, data):
        comments = data.split('\n')
        if(len(comments) > 1):
            print ">>> Multi-line Comment"
            for comment in comments:
                print comment
        else:
            print ">>> Single-line Comment"
            print comments[0]

    def handle_data(self, data):
        if(data != '\n'):
            print ">>> Data"
            print data
html = ""
for i in range(int(raw_input())):
    html += raw_input().rstrip()
    html += '\n'

parser = MyHTMLParser()
parser.feed(html)
parser.close()