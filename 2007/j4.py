# code by savir singh

def checker(a, b):
    alist = list(a)
    alist.sort()
    blist = list(b)
    blist.sort()

    return (alist == blist)

original = input().replace(' ', '')
anagram = input().replace(' ', '')

if checker(original, anagram):
    print("Is an anagram.")

else:
    print("Is not an anagram.")
