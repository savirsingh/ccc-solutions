# code by savir singh

t = input()
s = list(input())
output = "no"

if ''.join(s) in t:
    output = "yes"
else:
    for i in range(len(s)):
        s.append(s[0])
        del s[0]
        if ''.join(s) in t:
            output = "yes"
            break

print(output)
