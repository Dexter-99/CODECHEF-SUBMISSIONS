# Code By Vikas Verma
t = int(input())
for i in range(t):
    n = int(input())
    l = [int(x) for x in input().split()]
    total = 0
    e = 0
    for i in range(n):
        if(l[i] & 1):
            total += e
        else:
          e += 1
    print(total)r

