# Code By Vikas Verma
t = int(input())
for i in range(t):
    l = [int(x) for x in input().split()]
    count = 0
    for i in l:
        if i:
            count += 1
    if count == 0:
        print("Beginner")
    elif count == 1:
        print("Junior Developer")
    elif count == 2:
        print("Middle Developer")
    elif count == 3:
        print("Senior Developer")
    elif count == 4:
        print("Hacker")
    elif count == 5:
        print("Jeff Dean")
