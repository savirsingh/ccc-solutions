# code by savir singh

t = int(input())
s = int(input())
h = int(input())
spaces=s*" "
asterisks=s*"*"
space2 = (s+1)*" "

for i in range(t):
    print("*" + spaces + "*" + spaces + "*")

print("*" + asterisks + "*" + asterisks + "*")

for j in range(h):
    print(space2 + "*")
