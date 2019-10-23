#https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/3/ALDS1_3_D

s = str(input())
l = len(s)

h = [0]
for i in range(l):
    if s[i] == '\\':
        h.append(h[i]-1)
    elif s[i] == '/':
        h.append(h[i]+1)
    else:
        h.append(h[i])

a = []
m = -200000
n = 0
flag = False
for i in range(l+1):
    if m == h[i] and i != 0:
        a.append([n,i,m])
        m = -200000
    if m < h[i] or i == 0:
        m = h[i]
        n = i
    if (m in h[i+1:]) == False:
        m = -200000

b = []
tmp = 0
for i in range(len(a)):
    for j in range(a[i][0],a[i][1]):
        tmp += a[i][2] - h[j]
        if s[j] == '/':
            tmp += 1 / 2
        elif s[j] == '\\':
            tmp -= 1 / 2
    b.append(int(tmp))
    tmp = 0

if len(b) != 0:
    i=0
    while True:
        if b[i] == 0:
            del b[i]
            i -= 1
        i += 1
        if i == len(b):
            break


A = sum(b)
k = len(b)

print(A)
print(k,end = '')
if k != 0:
    print(' ',end='')
    for i in range(k-1):
        print(b[i],end=' ')
    print(b[len(b)-1])
else:
    print('')
