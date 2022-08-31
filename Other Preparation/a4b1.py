# code by savir singh
# https://dmoj.ca/problem/a4b1
# 300/300

n = int(input())
nums = []

for i in range(n):
    a = int(input())
    nums.append(a)

nums.sort()

for num in nums:
    print(num)
