# code by savir singh

plan = [[0,-1], [0,-2], [0,-3], [1,-3], [2,-3], [3,-3], [3,-4], [3,-5], [4,-5], [5,-5], [5,-4], [5,-3], [6,-3], [7,-3], [7,-4], [7,-5], [7,-6], [7,-7], [6,-7], [5,-7], [4,-7], [3,-7], [2,-7], [1,-7], [0,-7], [-1,-7], [-1,-6], [-1,-5]]
position = [-1, -5]

while 1:
    i = input().split(' ')
    c = i[0]
    l = int(i[1])
    a = 'safe'
    if c == 'q':
        break
    while l > 0:
        if c == 'l':
            position[0] -= 1
        elif c == 'r':
            position[0] += 1
        elif c == 'u':
            position[1] += 1
        elif c == 'd':
            position[1] -= 1
        l -= 1

        if position in plan:
            a = 'DANGER'
        else:
            plan.append(position.copy())

    print(position[0], position[1], a)
    if a == 'DANGER':
        break
