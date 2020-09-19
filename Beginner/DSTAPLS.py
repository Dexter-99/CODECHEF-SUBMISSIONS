# Code By Vikas Verma
t = int(input())
for i in range(t):
  l = [int(x) for x in input().split()]
  n = l[0]
  k = l[1]
  if((n % k) == (n % (k**2))):
    print("NO")
  else:
    print("YES")
