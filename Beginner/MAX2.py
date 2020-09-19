# Code By Vikas Verma
t = int(input())
s = input()
idx = -1
for i in range(len(s)):
  if(s[i] == "1"):
    idx = i
if(idx == -1):
  print(1)
else:
  print(t-(idx+1))
