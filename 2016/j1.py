# code by savir singh

results = []

for i in range(6):
    a = input()
    results.append(a)

countw = results.count('W')

if countw == 5 or countw == 6:
    print("1")
elif countw == 3 or countw == 4:
    print("2")
elif countw == 1 or countw == 2:
    print("3")
elif countw == 0:
    print("-1")
