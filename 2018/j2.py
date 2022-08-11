# code by savir singh

n = int(input())
first = list(input())
second = list(input())
counter = 0

for i in range(n):
    if first[i] == 'C' and second[i] == 'C':
        counter += 1

print(counter)
