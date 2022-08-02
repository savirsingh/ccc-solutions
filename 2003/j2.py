# code by savir singh

from itertools import combinations_with_replacement
outputlist = []

def checkfactors(z):
    flist = []
    for i in range(1, z+1):
        if z%i == 0:
            flist.append(i)
    return flist


while True:
    a = int(input())
    if a == 0:
        break
    factors = checkfactors(a)

    allpairs = list(set(combinations_with_replacement(factors, r=2)))

    perimeters = []

    for i in range(a//2):
        for pair in allpairs:
            product = (pair[0]*pair[1])
            if product != a:
                del allpairs[allpairs.index(pair)]

    for j in range(len(allpairs)):
        perimeter = 2*allpairs[j][0]+2*allpairs[j][1]
        perimeters.append(perimeter)
    
    smallestp = min(perimeters)
    sindex = perimeters.index(smallestp)
    pairs = allpairs[sindex]

    outputlist.append("Minimum perimeter is " + str(smallestp) + " with dimensions " + str(pairs[0]) + " x " + str(pairs[1]))

for output in outputlist:
    print(output)
