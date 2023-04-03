# code by savir singh
# https://dmoj.ca/problem/sac22cc4jp4
# 100/100

n, k = map(int, input().split())
p = list(map(int, input().split()))

nxt = [[0] * n for _ in range(62)]
for i in range(n):
    nxt[0][p[i]-1] = i
for i in range(1, 62):
    for j in range(n):
        nxt[i][j] = nxt[i-1][nxt[i-1][j]]

a = p
for i in range(61, -1, -1):
    if k >= 2**i:
        a = [nxt[i][x-1]+1 for x in a]
        k -= 2**i

print(*a)
