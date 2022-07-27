# code by savir singh

fishy = []
cd = False
for z in range(4):
    n1 = int(input())
    fishy.append(n1)

if fishy[0] == fishy[1] and fishy[0] == fishy[2] and fishy[0] == fishy[3]:
    cd = True

de = fishy.copy()
de.sort(reverse=True)

in1 = fishy.copy()
in1.sort()

sfi = len(set(fishy))
lf = len(fishy)

if cd:
    print("Fish At Constant Depth")
elif fishy == in1:
    print("Fish Rising")
elif fishy == de and sfi == lf:
    print("Fish Diving")
else:
    print("No Fish")
