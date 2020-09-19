# Code By Vikas Verma
t = int(input())
for i in range(t):
    n = int(input())
    l = [int(x) for x in input().split()]
    count = 0
    for i in range(len(l)):
        if(len[i] == 2):
            count += 1
    print(count*(count-1)/2)
