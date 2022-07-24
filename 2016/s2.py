# code by savir singh

q = int(input())
n = int(input())
dmoj = list(map(int, input().split()))
peg = list(map(int, input().split()))
dmoj.sort()
peg.sort()
total = 0
if q == 1:
    for i in range(n):
        total += max(dmoj[i], peg[i])
else:
    for i in range(n):
        total += max(dmoj[i], peg[n - i - 1])
print(total)
