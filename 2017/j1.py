# code by savir singh

x = int(input())
y = int(input())

# simply check x and y values and print out quadrant accordingly
if x > 0 and y > 0:
    print("1")
elif x > 0 and y < 0:
    print("4")
elif x < 0 and y > 0:
    print("2")
else:
    print("3")
