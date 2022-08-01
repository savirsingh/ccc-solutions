# code by savir singh

n = int(input())
outputlist = []

for i in range(n):
    word1 = list(input())
    word2 = list(input())
    word3 = list(input())
    wordlist=[]
    wordlist.append(word1)
    wordlist.append(word2)
    wordlist.append(word3)

    fixfree = True
    others = []

    minword = min(word1, word2, word3)
    
    if word1 != minword:
        others.append(word1)
    if word2 != minword:
        others.append(word2)
    if word3 != minword:
        others.append(word3)

    if len(word1) == len(word2) == len(word3):
        minword = word1
        midword = word1
        maxword = word1
    else:
        try:
            midword = min(others)
            maxword = max(others)
        except ValueError:
            pass

    if minword[:len(minword)] == midword[:len(minword)] or minword[:len(minword)] == maxword[:len(minword)]:
        fixfree = False
    
    if midword[:len(midword)] == maxword[:len(midword)]:
        fixfree = False

    word1.reverse()
    word2.reverse()
    word3.reverse()

    minword = min(word1, word2, word3)

    others.clear()

    if word1 != minword:
        others.append(word1)
    if word2 != minword:
        others.append(word2)
    if word3 != minword:
        others.append(word3)

    if len(word1) == len(word2) == len(word3):
        minword = word1
        midword = word1
        maxword = word1
    else:
        try:
            midword = min(others)
            maxword = max(others)
        except ValueError:
            pass

    if minword[:len(minword)] == midword[:len(minword)] or minword[:len(minword)] == maxword[:len(minword)]:
        fixfree = False
    
    if midword[:len(midword)] == maxword[:len(midword)]:
        fixfree = False


    if fixfree:
        outputlist.append("Yes")
    else:
        outputlist.append("No")


for output in outputlist:
    print(output)
