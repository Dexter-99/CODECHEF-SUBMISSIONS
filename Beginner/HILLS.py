# Code By Vikas Verma
t = int(input())
for i in range(t):
    l = [int(x) for x in input().split()]
    U = l[1]
    D = l[2]
    hills = [int(x) for x in input().split()]
    curr = 0
    para = 1
    for i in range(1, l[0]):
        if(hills[i] == hills[curr]):
            curr += 1
        elif(hills[i] > hills[curr] and (hills[i]-hills[curr]) <= U):
            curr += 1
        elif(hills[i] < hills[curr] and (hills[curr]-hills[i]) <= D):
            curr += 1
        elif(hills[i] < hills[curr] and para == 1):
            curr += 1
            para -= 1
        else:
            break
    print(curr+1)
