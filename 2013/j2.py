# code by savir singh

in1 = list(input())
list1 = ['I', 'O', 'S', 'H', 'Z', 'X', 'N']
counter = 0

for i in range(len(in1)):
    if in1[i] in list1:
        counter += 1

if counter == len(in1):
    print("YES")
else:
    print("NO")
