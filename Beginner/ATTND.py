# Code By Vikas Verma
t = int(input())
_map = {}
for i in range(t):
    n = int(input())
    names = []
    for i in range(n):
        l = input()
        names.append(l)
        if(_map.__contains__(l.split()[0])):
            _map[l.split()[0]] += 1
        else:
            _map[l.split()[0]] = 1

    for i in names:
        if(_map[i.split()[0]] > 1):
            print(i)
        else:
            print(i.split()[0])
