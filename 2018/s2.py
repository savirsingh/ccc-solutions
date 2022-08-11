# code by savir singh

def rotategrid(grid):
    for x in range(0, int(n / 2)):
        for y in range(x, n-x-1):
            templist = grid[x][y]
            grid[x][y] = grid[y][n-1-x]
            grid[y][n-1-x] = grid[n-1-x][n-1-y]
            grid[n-1-x][n-1-y] = grid[n-1-y][x]
            grid[n-1-y][x] = templist

n = int(input())
measurements = []
measurements2 = []

for i in range(n):
    a = list(map(int, input().split(" ")))
    measurements.append(a)
    measurements2.extend(a)

smallest = measurements2[0]
index1 = 0

for j in range(len(measurements2)):
    try:
        if smallest > measurements2[j]:
            smallest = measurements2[j]
            index1 = measurements2.index(smallest)
    except IndexError:
        pass

if measurements2[0] == smallest:
    for measurement1 in measurements:
        print(str(measurement1).replace("[", "").replace("]", "").replace(",", ""))

else:
    while True:
        rotategrid(measurements)
        if measurements[0][0] == smallest:
            for measurement2 in measurements:
                print(str(measurement2).replace("[", "").replace("]", "").replace(",", ""))
            break
