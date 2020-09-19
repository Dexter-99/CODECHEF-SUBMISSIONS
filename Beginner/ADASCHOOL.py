# Code By Vikas Verma

t = int(input())
for i in range(t):
    l = [int(x) for x in input().split()]
    if(l[0] % 2 == 0 or l[1] % 2 == 0):
        print("YES")
    else:
        print("NO")
