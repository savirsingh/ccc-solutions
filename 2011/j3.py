# code by savir singh

t1 = int(input())
t2 = int(input())
sumacfound = 0
sumaclist = []
sumaclist.append(t1)
sumaclist.append(t2)

while sumacfound == 0:
    a = sumaclist[-2] - sumaclist[-1]
    if sumaclist[-1] < a:
        sumacfound = 1
    sumaclist.append(a)

print(len(sumaclist))
