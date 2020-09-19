# Code By Vikas Verma
t = int(input())
for i in range(t):
  l = [int(x) for x in input().split()]
  for i in range(l[0]-l[1]-1, l[0]):
    print(i+1, end=" ")
  for i in range(l[0]-l[1]-1):
    print(i+1, end=" ")
