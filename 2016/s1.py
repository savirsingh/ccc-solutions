# code by savir singh

def checker(a, b):
    alist = list(a)
    alist.sort()
    blist = list(b)
    blist.sort()

    return (alist == blist)

n = input()
anagram = input()
counter = 0
asterisks = anagram.count("*")

ana2 = list(anagram)
n2 = list(n)

for j in range(asterisks):
    asindex = ana2.index('*')
    newspot = ana2[asindex-1]
    nindex = n.index(newspot)
    nstring = n2[nindex-1]
    ana2.insert(asindex, nstring)
    ana2.remove('*')
    anagram = str(ana2).replace('[','').replace(']', '').replace("'", "").replace(',', '').replace(' ', '')

if checker(n, anagram):
    print("A")
else:
    print("N")
