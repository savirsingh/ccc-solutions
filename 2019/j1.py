# code by savir singh

a3 = int(input())
a2 = int(input())
a1 = int(input())
b3 = int(input())
b2 = int(input())
b1 = int(input())

ascore = 3*a3+2*a2+a1
bscore = 3*b3+2*b2+b1

if ascore > bscore:
    print("A")
elif bscore > ascore:
    print("B")
else:
    print("T")
