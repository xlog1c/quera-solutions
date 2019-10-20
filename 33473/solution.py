import math

def get_func(shapelist):
    def square(z):
        return z*z

    def circle(r):
        return r*r*math.pi

    def rectangle(t, a):
        return t*a

    def triangle(e, q):
        return 0.5*e*q
    funclist = []
    for shape in shapelist:
        if shape == 'square':
            funclist.append(square)
        if shape == 'circle':
            funclist.append(circle)
        if shape == 'rectangle':
            funclist.append(rectangle)
        if shape == 'triangle':
            funclist.append(triangle)
    return funclist