# code by savir singh

x = int(input())
goldplayers = 0

for i in range(x):
    a = int(input())
    b = int(input())
    if a*5-b*3 > 40:
        goldplayers += 1

if goldplayers == x:
    print(str(goldplayers) + "+")

else:
    print(goldplayers)
