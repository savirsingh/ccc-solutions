# code by savir singh

orientations = input()
grid =[[1,2], [3,4]]
# 1 2
# 3 4

for i in range(len(orientations)):
    if orientations[i] == "H":
        grid[1], grid[0] = grid[0], grid[1]

    elif orientations[i] == "V":
        grid[0][0], grid[0][1] = grid[0][1], grid[0][0]
        grid[1][0], grid[1][1] = grid[1][1], grid[1][0]

print(grid[0][0], grid[0][1])
print(grid[1][0], grid[1][1])
