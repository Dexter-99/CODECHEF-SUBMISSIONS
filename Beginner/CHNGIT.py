# Code By Vikas Verma

t = int(input())
for i in range(t):
    n = int(input())
    l = [int(x) for x in input().split()]
    _dict = {}
    for i in l:
        if _dict.__contains__(i):
            _dict[i] += 1
        else:
            _dict[i] = 1
    _max = 0
    for v in _dict.values():
        _max = max(_max, v)
    print(n-_max)
