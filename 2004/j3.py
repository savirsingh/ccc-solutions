# code by savir singh

ad = int(input())
no = int(input())
adjectives = []
nouns = []

for i in range(ad):
    adj = input()
    adjectives.append(adj)

for j in range(no):
    nou = input()
    nouns.append(nou)

for s in range(ad*no):
    try:
        for z in range(no):
            print(str(adjectives[s]) + " as " + str(nouns[z]))
    except IndexError:
        pass
