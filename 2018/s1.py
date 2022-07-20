# code by savir singh

n = int(input())
villages = []
for i in range(n):
    villages.append(float(input()))

distances = []

villages.sort()

for i in range(1, n - 1):
    distances.append((villages[i+1] - villages[i]) / 2 + (villages[i] - villages[i - 1]) / 2)

distances.sort()

print(distances[0])
