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

if "*" not in anagram:
    if checker(n, anagram):
        print("A")
    else:
        print("N")

else:
    ana1 = list(anagram)
    while '*' in ana1:
        ana1.remove('*')
    yescount = 0
    for j in range(len(ana1)):
        if str(ana1[j]) in n:
            yescount += 1
        else:
            break
    if yescount == len(ana1) and len(ana1) + anagram.count("*") == len(n):
        print("A")
    else:
        print("N")
