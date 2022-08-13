# code by savir singh
# it doesn't give 15/15
# i believe it is because of precision or something

n = int(input())
plist = []
wlist = []
dlist = []
times = []

for i in range(n):
    in1 = list(map(int, input().split(" ")))
    p = in1[0]
    w = in1[1]
    d = in1[2]
    plist.append(p)
    wlist.append(w)
    dlist.append(d)

if n==1:
    print(plist[0])
else:
    start = min(plist)
    end = max(plist)
    for j in range(start, end+1):
        timetaken = 0
        for k in range(n):
            using = plist[k]
            if j != dlist[k]:
                if abs(abs(dlist[k]-j)-using) < abs(j+dlist[k]-using):
                    target = abs(dlist[k]-j)
                else:
                    target = j+dlist[k]
            else:
                target = dlist[k]
            timetaken += (abs(using-target))*wlist[k]
        times.append(timetaken)

    print(min(times))
