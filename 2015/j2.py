# code by savir singh

x = input()

happy = x.count(":-)")
sad = x.count(":-(")

if happy > sad:
    print("happy")
elif sad > happy:
    print("sad")
elif happy == 0 and sad == 0:
    print("none")
elif happy == sad:
    print("unsure")
