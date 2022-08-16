# code by savir singh

l = int(input())

for i in range(l):
    a = input().split(" ")
    notimes = int(a[0])
    for j in range(notimes):
        print(a[1], end='')
    print("")
