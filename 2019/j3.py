# code by savir singh

n = int(input())

for i in range(n):
    a = input()
    from itertools import groupby

    cons = groupby(a)
    counts = [[sum(1 for j in cons), num] for num, cons in cons]

    for count in counts:
        print(str(count[0]) + " " + str(count[1]), end=' ')
    print("")
