# code by savir singh

def time(plist, wlist, dlist, position):
    timetaken = 0
    for i in range(len(plist)):
        total_distance = abs(position - plist[i])
        if total_distance > dlist[i]:
            min_travel = total_distance - dlist[i]
            timetaken += min_travel * wlist[i]
    return timetaken

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
    ans = 0
    while start <= end:
        j = (start+end)//2
        jt = time(plist, wlist, dlist, j)
        jp = time(plist, wlist, dlist, j+1)
        jm = time(plist, wlist, dlist, j-1)

        if jt <= jp and jt <= jm:
            ans = jt
            break
        elif jt <= jp:
            end = j - 1
        else:
            start = j + 1

    print(ans)
