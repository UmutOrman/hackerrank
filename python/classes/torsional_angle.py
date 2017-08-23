import math
class Points(object):
    def __init__(self, x, y, z):
        self.x = x
        self.y = y
        self.z = z
    def __sub__(self, no):
        sub_x = self.x - no.x
        sub_y = self.y - no.y
        sub_z = self.z - no.z
        return Points(sub_x,sub_y, sub_z)
    def dot(self, no):
        total = (self.x * no.x) + (self.y * no.y) + (self.z * no.z)
        return total
    def cross(self, other):
        answer = Points(self.y * other.z - self.z * other.y, self.z * other.x - other.z * self.x, self.x * other.y - self.y * other.x)
        return answer
    def absolute(self):
        return pow((self.x ** 2 + self.y ** 2 + self.z ** 2), 0.5)

A = Points(*map(float,raw_input().split()))
B = Points(*map(float,raw_input().split()))
C = Points(*map(float,raw_input().split()))
D = Points(*map(float,raw_input().split()))
AB = B - A
BC = C - B
CD = D - C
X = AB.cross(BC)
Y = BC.cross(CD)
print "%.2f"%math.degrees(math.acos(X.dot(Y)/X.absolute()/Y.absolute()))
