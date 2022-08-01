# code by savir singh

words = []
while True:
    x = input()
    if x == "X":
        break
    words.append(x)


for word in words:
    while True:
        ana = word.find("ANA")
        bas = word.find("BAS")
        if ana == -1 and bas == -1:
            break
        if ana != -1:
            word = word.replace("ANA", "A")
        if bas != -1:
            word = word.replace("BAS", "A")

    if word == "A":
        print("YES")
    else:
        print("NO")
