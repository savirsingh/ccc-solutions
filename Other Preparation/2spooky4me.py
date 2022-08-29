# code by savir singh
# https://dmoj.ca/problem/2spooky4me
# 30/100 (IR)

in1 = list(map(int, input().split(" ")))
n = in1[0]
l = in1[1]
s = in1[2]

houses = [0]*l
newlist = []

try:
    for i in range(n):
        in2 = list(map(int, input().split(" ")))
        a = in2[0]
        b = in2[1]
        spook = in2[2]
        for j in range(a, b+1):
            houses[j]+=spook

    for k in range(len(houses)):
        if houses[k] < s:
            newlist.append(houses[k])
except:
    pass

print(len(newlist))
