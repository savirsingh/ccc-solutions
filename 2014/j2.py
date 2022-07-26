a = int(input())
b = list(input())

bcount = b.count('B')
acount = b.count('A')

if acount > bcount:
    print("A")
elif bcount > acount:
    print("B")
else:
    print("Tie")
