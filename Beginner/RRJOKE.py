# Code By Vikas Verma

t = int(input())
for i in range(t):
    n = int(input())
    res = 0
    for i in range(n):
        l = [int(x) for x in input().split()]
        res ^= (i+1)
    print(res)
