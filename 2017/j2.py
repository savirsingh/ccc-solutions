# code by savir singh

n = int(input())
k = int(input())
new = n

for i in range(k):
    new = new+n*10 # because adding 0 to end is same as *10
    n = n*10 # update n for next loop

print(new)
