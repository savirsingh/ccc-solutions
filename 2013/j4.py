t = int(input())
c = int(input())
maxchores = 0
chores = []

for i in range(c):
    a = int(input())
    chores.append(a)

chores.sort()

for j in range(len(chores)):
    if chores[0] <= t:
        maxchores+=1
    else:
        break
    t-=chores[0]
    del chores[0]

print(maxchores)
