# code by savir singh

n=int(input())
p = []
q = []
for i in range(n):
    x, y = input().split()
    y = int(y)
    p.append(y)
    q.append([x, y])

best = 10000000000000000

for i in p:
    curcheck = 0
    for j in range(n):
        if (q[j][0] == "L" and q[j][1] < i) or (q[j][0] == "G" and q[j][1] > i):
            curcheck+=1
    best = min(best, curcheck)

print(best)
