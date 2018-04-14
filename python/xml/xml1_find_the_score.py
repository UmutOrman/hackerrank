import sys
import xml.etree.ElementTree as etree

def get_attr_number(node):
    number_attrs = len(node.attrib)
    for child in node:
        number_attrs += get_attr_number(child)
    return number_attrs

if __name__ == '__main__':
    sys.stdin.readline()
    xml = sys.stdin.read()
    tree = etree.ElementTree(etree.fromstring(xml))
    root = tree.getroot()

    print get_attr_number(root)