# Code By Vikas Verma
t = int(input())
for i in range(t):
    n = int(input())
    l = [int(x) for x in input().split()]

    res = 0
    for i in range(n):
        res ^= (i+1) ^ l[i]
    if(res != 0):
        print("no")
    else:
        if(l == sorted(l)):
            print("no")
        else:
            print("yes")
