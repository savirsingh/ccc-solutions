# code by savir singh

start = input().split(" ")
end = input().split(" ")

power = int(input())
startx = int(start[0])
starty = int(start[1])
endx = int(end[0])
endy = int(end[1])

powerneeded = abs(endx-startx)+abs(endy-starty)
if power >= powerneeded:
    if powerneeded % 2 == 0 and power % 2 == 0:
        print("Y")
    elif powerneeded % 2 != 0 and power % 2 != 0:
        print("Y")
    else:
        print("N")
else:
    print("N")
