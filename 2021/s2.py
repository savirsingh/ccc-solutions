# code by savir singh
# gives TLE, 10/15
# but works 100%
# if you are looking for a solution which gives 15/15, check C++ solution

import sys
m = int(sys.stdin.readline())
n = int(sys.stdin.readline())
k = int(sys.stdin.readline())
canvas = []

canvas = ['B']*(m*n)

for s in range(k):
    a = input().split(" ")
    if a[0] == 'R':
        for t in range((int(a[1])-1)*n, int(a[1])*n):
            if canvas[t] == 'B':
                canvas[t] = 'G'
            else:
                canvas[t] = 'B'
    else:
        for u in range(int(a[1])-1, m*n, n):
            if canvas[u] == 'B':
                canvas[u] = 'G'
            else:
                canvas[u] = 'B'

print(canvas.count('G'))
