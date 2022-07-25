# code by savir singh

row1 = input().split(" ")
row2 = input().split(" ")
row3 = input().split(" ")
row4 = input().split(" ")
total = 0

r1 = []
r2 = []
r3 = []
r4 = []
c1 = []
c2 = []
c3 = []
c4 = []

for i in range(4):
    r1.append(int(row1[i]))
    r2.append(int(row2[i]))
    r3.append(int(row3[i]))
    r4.append(int(row4[i]))

c1.append(r1[0])
c1.append(r2[0])
c1.append(r3[0])
c1.append(r4[0])
c2.append(r1[1])
c2.append(r2[1])
c2.append(r3[1])
c2.append(r4[1])
c3.append(r1[2])
c3.append(r2[2])
c3.append(r3[2])
c3.append(r4[2])
c4.append(r1[3])
c4.append(r2[3])
c4.append(r3[3])
c4.append(r4[3])

total = r1[0] + r1[1] + r1[2] + r1[3]

if r2[0] + r2[1] + r2[2] + r2[3] == total and r3[0] + r3[1] + r3[2] + r3[3] == total and r4[0] + r4[1] + r4[2] + r4[3] == total and c1[0] + c1[1] + c1[2] + c1[3] == total and c2[0] + c2[1] + c2[2] + c2[3] == total and c3[0] + c3[1] + c3[2] + c3[3] == total and c4[0] + c4[1] + c4[2] + c4[3] == total:
    print("magic")
else:
    print("not magic")
