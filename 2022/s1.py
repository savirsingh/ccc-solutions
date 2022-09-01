# code by savir singh

n = int(input())
ways = 0
temp = n
done = False

if n%4==0:
    ways+=1

if n%5==0:
    ways+=1

temp = n-4
while temp>4:
    if temp%5==0:
        done = True
        ways+=1
    temp-=4
if not done:
    temp = n-5
    while temp>5:
        if temp%4==0:
            ways+=1
        temp-=5

print(ways)
