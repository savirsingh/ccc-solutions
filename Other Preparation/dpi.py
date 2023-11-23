# code by savir singh
# https://dmoj.ca/problem/dpi
# 100/100
# should prob be like 7p... might be changed in future

import math
N = int(input())
probabilities = list(map(float, input().split()))
dp = [[0.0] * (N+1) for _ in range(N+1)]
dp[0][0] = 1.0

for i in range(1, N+1):
    for j in range(N+1):
        dp[i][j] = probabilities[i-1] * dp[i-1][j-1] + (1 - probabilities[i-1]) * dp[i-1][j]

answer = sum(dp[N][j] for j in range((N+1)//2, N+1))
print("{:.9f}".format(answer))
