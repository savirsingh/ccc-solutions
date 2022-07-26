t = int(input())
c = int(input())
chores = []
counter = 0

for i in range(c):
    chore = int(input())
    chores.append(chore)

chores.sort()

for j in range(c):
    if chores[j] <= t:
        t -= chores[j]
        counter += 1

print(counter)
