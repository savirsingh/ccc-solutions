# code by savir singh

n = int(input())
xcoords = []
ycoords = []

for i in range(n):
    in1 = list(map(int, input().split(",")))
    xcoords.append(in1[0])
    ycoords.append(in1[1])

print(str(min(xcoords)-1) + "," + str(min(ycoords)-1))
print(str(max(xcoords)+1) + "," + str(max(ycoords)+1))
