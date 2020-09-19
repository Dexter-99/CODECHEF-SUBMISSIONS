# Code By Vikas Verma
from numpy import *
t = int(input())
for i in range(t):
    n = int(input())
    res = n
    count = 0
    while (res > 0):
        val = int(sqrt(res))
        res -= (val**2)
        count += 1
    print(count)
