# code by savir singh

list1 = []
for i in range(4):
    a = int(input())
    list1.append(a)

if list1[1] == list1[2]:
    if list1[0] == 8 or list1[0] == 9:
        if list1[3] == 8 or list1[3] == 9:
            print("ignore")
        else:
            print("answer")
    else:
        print("answer")
else:
    print("answer")
