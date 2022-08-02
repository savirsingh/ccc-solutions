# code by savir singh

from itertools import combinations_with_replacement
outputlist = []

# find all factors for the integer z
def checkfactors(z):
    flist = []
    for i in range(1, z+1):
        if z%i == 0:
            flist.append(i)
    return flist


while True:
    a = int(input())
    # if the input is 0, end the program
    if a == 0:
        break
    factors = checkfactors(a)
    
    # all pairs using the factors of the integer z
    allpairs = list(set(combinations_with_replacement(factors, r=2)))

    perimeters = []
    
    # remove number from list if the product is inequal to the input
    for i in range(a//2):
        for pair in allpairs:
            product = (pair[0]*pair[1])
            if product != a:
                del allpairs[allpairs.index(pair)]
    
    # get perimeters for all pairs in the list
    for j in range(len(allpairs)):
        perimeter = 2*allpairs[j][0]+2*allpairs[j][1]
        perimeters.append(perimeter)
    
    # calculations required for the output
    smallestp = min(perimeters)
    sindex = perimeters.index(smallestp)
    pairs = allpairs[sindex]

    # append findings/calculations to outputlist at the end
    outputlist.append("Minimum perimeter is " + str(smallestp) + " with dimensions " + str(pairs[0]) + " x " + str(pairs[1]))

# output everything at the end
for output in outputlist:
    print(output)
