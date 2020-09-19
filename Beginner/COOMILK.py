# Code By Vikas Verma
t = int(input())
for i in range(t):
    n = int(input())
    l = [x for x in input().split()]
    flag = True
    for i in range(n):
        if(i == (n-1) and l[i] == "cookie"):
            flag = False
            break
        if(l[i] == "cookie" and l[i+1] != "milk"):
            flag = False
            break
    if(flag):
        print("YES")
    else:
        print("NO")
