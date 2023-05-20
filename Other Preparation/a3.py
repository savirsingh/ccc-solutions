# code by savir singh
# https://dmoj.ca/problem/a3
# 100/100

t = int(input())

for i in range(t):
    k = int(input())
    i = k
    while True:
        if len(str(i**3))>2 and str(i**3)[-3:] == "888":
            print(i)
            break
        i+=1
