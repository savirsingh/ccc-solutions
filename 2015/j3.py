# code by savir singh
# 15/15 on CCC Grader
# 15/20 on DMOJ

consonants = ['b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z']
vowels = ['a', 'e', 'i', 'o', 'u', 'x']
closesttoa = ['b', 'c']
closesttoe = ['d', 'f', 'g']
closesttoi = ['h', 'j', 'k', 'l']
closesttoo = ['m', 'n', 'p', 'q']
closesttou = ['r', 's', 't', 'v', 'w', 'y', 'z']

word = list(input())

for i in range(len(word)):
    if word[i] not in str(vowels):
        if word[i] in closesttoa:
            vowel = 'a'
        elif word[i] in closesttoe:
            vowel = 'e'
        elif word[i] in closesttoi:
            vowel = 'i'
        elif word[i] in closesttoo:
            vowel = 'o'
        elif word[i] in closesttou:
            vowel = 'u'
        if word[i] != 'z':
            word[i] = word[i]+vowel+consonants[consonants.index(word[i])+1]
        else:
            word[i] = word[i]+vowel+'z'

print(''.join(word))
