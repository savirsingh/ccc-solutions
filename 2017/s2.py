# code by savir singh

import sys

n = int(sys.stdin.readline())
measurements = list(map(int, sys.stdin.readline().split()))

measurements.sort()
if n%2==0:
    lowtides = measurements[:int(n/2)]
    hightides = measurements[int(n/2):]
else:
    lowtides = measurements[:(n//2+1)]
    hightides = measurements[(n//2+1):]
lowtides.sort(reverse=True)

if n!=1:
    if n%2==0:
        for i in range(int(n/2)):
            print(lowtides[i], end=' ')
            print(hightides[i], end=' ')
    else:
        for i in range(n//2+1):
            try:
                print(lowtides[i], end=' ')
                print(hightides[i], end=' ')
            except:
                pass
else:
    print(measurements[0])
