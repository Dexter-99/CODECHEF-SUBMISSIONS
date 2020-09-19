# Code By Vikas Verma
t = int(input())
for i in range(t):
    n = int(input())
    l = [int(x) for x in input().split()]
    setA = set(l)
    if(n-len(setA) != 0):
        print("Yes")
    else:
        print("No")
