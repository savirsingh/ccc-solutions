# code by savir singh

list1 = []
list2 = []
checks = []
counter = 0
previous = ""

while True:
    x = input()
    if x == "99999":
        break
    list1.append(x[2:])
    checks.append(x[:2])
    counter += 1
    if (int(x[0]) + int(x[1])) == 0:
        list2.append(previous)
    elif (int(x[0]) + int(x[1])) % 2 == 0:
           list2.append("right")
           previous = "right"
    else:
        list2.append("left")
        previous = "left"

try:
    if list1[0] != "99999":
        if checks[0] == "00":
            list2[0] = ""
            
except IndexError:
    pass


for i in range(counter):
    print(list2[i], list1[i])
