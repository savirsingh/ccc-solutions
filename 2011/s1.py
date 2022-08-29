# code by savir singh

n = int(input())
text = ''

for i in range(n):
    a = input()
    text = text+a

t = text.count('t')+text.count('T')
s = text.count('s')+text.count('S')

if t==s:
    print("French")
elif t>s:
    print("English")
else:
    print("French")
