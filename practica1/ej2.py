def calcPi(n):
    k = 1
    s = 0

    for i in range(1000000):

        if i % 2 == 0:
            s += 4/k
        else:
            s -= 4/k
        k += 2
    s = str(s)
    return s[:n+2]

print(calcPi(4))
