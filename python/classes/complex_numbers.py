import math
class Complex(object):
    def __init__(self, real, imaginary):
        self.real = real
        self.imaginary = imaginary
    def __add__(self, no):
        total_real = self.real + no.real
        total_imaginary = self.imaginary + no.imaginary
        return Complex(total_real, total_imaginary)
    def __sub__(self, no):
        sub_real = self.real - no.real
        sub_imaginary = self.imaginary - no.imaginary
        return Complex(sub_real, sub_imaginary)
    def __mul__(self, no):
        mul_real = (self.real * no.real) - (self.imaginary * no.imaginary)
        mul_imaginary = (self.imaginary * no.real) + (self.real * no.imaginary)
        return Complex(mul_real,mul_imaginary)
    def __div__(self, no):
        div_real = ((self.real * no.real) - (self.imaginary * (-no.imaginary)) ) / ((no.real * no.real) - (no.imaginary * (-no.imaginary)))
        div_imaginary = ((self.imaginary * no.real) + (self.real * (-no.imaginary)) ) / ((no.real * no.real) - (no.imaginary * (-no.imaginary)))
        return Complex(div_real,div_imaginary)
    def mod(self):
        mod_real = math.sqrt((self.real ** 2) + (self.imaginary ** 2))
        mod_imaginary = 0.00
        return Complex(mod_real,mod_imaginary)
    def __str__(self):
        if self.imaginary == 0:
            result = "%.2f+0.00i" % (self.real)
        elif self.real == 0:
            if self.imaginary >= 0:
                result = "0.00+%.2fi" % (self.imaginary)
            else:
                result = "0.00-%.2fi" % (abs(self.imaginary))
        elif self.imaginary > 0:
            result = "%.2f+%.2fi" % (self.real, self.imaginary)
        else:
            result = "%.2f-%.2fi" % (self.real, abs(self.imaginary))
        return result

complex1_args = map(float,raw_input().split())
complex1 = Complex(complex1_args[0], complex1_args[1])
complex2_args = map(float,raw_input().split())
complex2 = Complex(complex2_args[0], complex2_args[1])
print complex1 + complex2 
print complex1 - complex2
print complex1 * complex2
print complex1 / complex2
print complex1.mod()
print complex2.mod()
