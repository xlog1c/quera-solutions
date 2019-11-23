n = int(input())
l = []
for i in range(n):
    s = input()
    yes = 1
    st = ''
    for j in s:
        if(yes == 1):
            st += j.upper()
            yes = 0
        else:
            st += j.lower()
        if(j == ' '):
            yes = 1
    l.append(st)

for i in l:
    print(i)
