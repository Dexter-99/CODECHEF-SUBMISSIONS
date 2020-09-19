# Code By Vikas Verma
t = int(input())
for i in range(t):
    s = input()
    flag = True
    l = [0]*26
    for i in s:
        l[ord(i)-97] += 1
    count = 0
    falg = True
    for i in range(len(s)-1):
        if(s[i] == s[i-1]):
            flag = False
            break
    _set = set(s)
    if(len(_set) == 1):
        print("YES")
    elif(len(_set) == 2 and len(s) % 2 == 0 and flag):
      print("YES")
    else:
      print("NO")
