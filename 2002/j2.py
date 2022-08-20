# code by savir singh

vowels = ['a', 'e', 'i', 'o', 'u']

while True:
    word1 = input()
    if len(word1) > 4 and "or" in word1:
        word = word1.split("or")
        if word[0][-1] not in vowels and len(str(word[1])) == 0:
            print(''.join(word[0]) + 'our')
        else:
            print(''.join(word1))
    elif word1 == "quit!":
        break
    else:
        print(word1)
