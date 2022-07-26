# code by savir singh

n = int(input())
antonia = 100
david = 100

for i in range(n):
    a = input().split(" ")
    if int(a[0]) < int(a[1]):
        antonia -= int(a[1])
    elif int(a[0]) == int(a[1]):
        pass
    else:
        david -= int(a[0])

print(antonia)
print(david)
