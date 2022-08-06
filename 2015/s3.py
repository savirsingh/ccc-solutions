# code by savir singh
# code works but gives TLE, my C++ program doesn't work either :(
# 6/15

import sys
g = int(sys.stdin.readline())
p = int(sys.stdin.readline())
taken = []
planes = 0
hello = 0

for i in range(p):
    a = int(sys.stdin.readline())
    if hello == 0:
        allowed = []
        allowed = list(range(1, a+1))
        helloworld = 0
        for s in range(len(allowed)):
            if max(allowed) not in taken:
                planes += 1
                taken.append(max(allowed))
                helloworld += 1
                break
            else:
                del allowed[-1]

        if helloworld == 0:
            hello = 1

print(planes)

