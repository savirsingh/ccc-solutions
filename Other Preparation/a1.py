# code by savir singh
# https://dmoj.ca/problem/a1
# 100/100

n = int(input())
case1 = 1

for i in range(n):
    word1 = input().split(" ", 1)
    index = int(word1[0])-1
    word = list(word1[1])
    del word[index]
    print(str(case1) + " " + ''.join(word))
    case1 += 1
