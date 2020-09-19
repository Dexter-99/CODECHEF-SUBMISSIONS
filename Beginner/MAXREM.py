# Code By Vikas Verma
n = int(input())
l = [int(x) for x in input().split()]
_max = 0
_smax = 0
_set = set(l)
if(len(_set) == 1):
    print(0)
else:
    for i in range(n):
        if(l[i] > _max):
          _smax = _max
          _max = l[i]
    print(_smax % _max)
