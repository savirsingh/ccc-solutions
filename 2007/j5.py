# code by savir singh

# gives TLE error but works

def find(dis):
  global ways
  if (dis >= 7000):
    ways += 1
  for motel in motels:
    if (motel - dis >= a and motel - dis <= b):
      find(motel)

motels = [990, 1010, 1970, 2030, 2940, 3060, 3930, 4060, 4970, 5030, 5990, 6010, 7000]
ways = 0

a = int(input())
b = int(input())
c = int(input())

for i in range(c):
    in1 = int(input())
    motels.append(in1)

motels.sort()

find(0)
print(ways)
