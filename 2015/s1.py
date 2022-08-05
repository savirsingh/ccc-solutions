# code by savir singh

statements = []
k = int(input())

for i in range(k):
    x = int(input())
    if x != 0:
        statements.append(x)
    else:
        del statements[-1]

print(sum(statements))
