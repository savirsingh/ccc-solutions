# code by savir singh

from itertools import permutations

needle = list(input())
haystack = list(input())
appearances = 0

allpermutations = list(set(permutations(needle, r=len(needle))))

perm = []

for permutation in allpermutations:
    for z in range(len(permutation)):
        perm.append(permutation[z])

perms = []

for s in range(int(len(perm)/len(needle))):
    perms.append(perm[:len(needle)])
    del perm[:len(needle)]
    

for i in range(len(perms)):
    permstring = str(perms[i]).replace("[", "").replace("]", "")
    haystackstring = str(haystack).replace("[", "").replace("]", "")
    if permstring in haystackstring:
        appearances += 1

print(appearances)
