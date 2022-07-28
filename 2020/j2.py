# code by savir singh

p = int(input())
n = int(input())
r = int(input())
day = 0
infected = n
notreached = True
infectedlist = []
infectedlist.append(infected)

if n != 1 or r != 1:
    while notreached:
        infected = infected*r
        infectedlist.append(infected)
        day += 1
        if sum(infectedlist) > p:
            notreached = False
else:
    day = p
    
print(day)
