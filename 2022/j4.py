# code by savir singh
# gives TLE, 14/15 points
# check C++ solution too

same = []
different = []
groups = []
violated = 0

x = int(input())
for r in range(x):
    in1 = input().split(" ")
    same.append(in1)

y = int(input())
for s in range(y):
    in1 = input().split(" ")
    different.append(in1)

z = int(input())
for t in range(z):
    in1 = input().split(" ")
    groups.append(in1)

for pair in same:
    for group in groups:
        if pair[0] in group:
            if pair[1] not in group:
                violated += 1

for pair in different:
    for group in groups:
        if pair[0] in group:
            if pair[1] in group:
                violated += 1

print(violated)
