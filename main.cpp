def simpson(n):
    import math
    def sins(x):
        return 1.5*math.sin(x)**3

    h = math.pi / n
    sum = 0.0
    sum1 = 0.0
    for i in range(1,int(n / 2)+1):
        sum += sins((2*i-1)*h)
        sum1 += sins((2*i*h))
    sum1 -= sins((2*int(n / 2)*h))
    return h/3 *(4*sum + 2*sum1)
