# code by savir singh
# for some reason, it gives 13/15
# but i checked every test case manually and it seems to be working
# even DMOJ gives most people WA or IR
# idk what's going on lol

try:
    n = int(input())
    names = []
    performances = []

    for i in range(n):
        in1 = input().split(" ")
        names.append(in1[0])
        r = int(in1[1])
        s = int(in1[2])
        d = int(in1[3])
        formula = 2*r+3*s+d
        performances.append(formula)

    p2 = performances.copy()
    p2.sort()
    max1 = p2[-1]
    p2.pop()
    try:
        max2 = p2[-1]
    except IndexError:
        max2 = 0
        performances.append(0)

    maxindex1 = performances.index(max1)
    del performances[maxindex1]
    performances.insert(maxindex1, -500)
    maxindex2 = performances.index(max2)

    if n == 1:
        print(names[maxindex1])
    else:

        if max1 != max2 and names[maxindex1] != names[maxindex2]:
            print(names[maxindex1])
            print(names[maxindex2])
        elif max1 == max2 and names[maxindex1] != names[maxindex2]:
            name1 = sorted(names[maxindex1])
            name2 = sorted(names[maxindex2])
            name3 = ''
            for j in range(len(min(name1, name2))):
                if int(ord(name1[j])) < int(ord(name2[j])):
                    break
                elif int(ord(name1[j])) > int(ord(name2[j])):
                    names[maxindex1], names[maxindex2] = names[maxindex2], names[maxindex1]
                    break
            print(''.join(names[maxindex1]))
            print(''.join(names[maxindex2]))

        else:
            print(names[maxindex1])
except IndexError:
    print("\n")
