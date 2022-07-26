# code by savir singh

def partnerz(a):
    index1 = y.index(a)
    partner = str(z[index1])

    return partner

def partnery(b):
    index1 = z.index(b)
    partner = str(y[index1])

    return partner

x = int(input())
y = input().split(" ")
z = input().split(" ")
gb = "good"

for j in range(x):
    pz = partnerz(y[j])
    inz = z.index(y[j])
    py = partnery(z[inz])
    if pz != py:
        gb = "bad"
    
for k in range(x):
    if y[k] == z[k]:
        gb = "bad"

print(gb)
