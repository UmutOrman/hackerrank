from HTMLParser import HTMLParser

class MyHTMLParser(HTMLParser):
    def handle_starttag(self, tag, attrs):
        print "Start :", tag
        for attr in attrs:
            print "->", attr[0] , ">", attr[1]
    def handle_endtag(self, tag):
        print "End   :", tag
    def handle_startendtag(self, tag, attrs):
        print "Empty :", tag
        for attr in attrs:
            print "->", attr[0] , ">", attr[1]


feed = ""
for i in range(int(raw_input())):
    feed += raw_input()

parser = MyHTMLParser()
parser.feed(feed)
parser.close()