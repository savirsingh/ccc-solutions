# code by savir singh

h = int(input())
m = int(input())
list1 = []
ans = 0
touches = False

t = 0

for i in range(m):
    t += 1
    a = (-6*t**4) + (h*t**3) + (2*t**2) + t
    list1.append(a)
    if a <= 0:
        ans = len(list1)
        touches = True
        break
if touches:    
    print("The balloon first touches ground at hour:")
    print(ans)
else:
    print("The balloon does not touch ground in the given time.")
