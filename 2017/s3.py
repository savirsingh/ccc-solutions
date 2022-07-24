# code by savir singh

def duplicatecheck(c):
    for d in c:
        if c.count(d) > 1:
            return True
    return False

def mostoften(t):
    counter = 0
    num = t[0]
     
    for r in t:
        current = t.count(r)
        if(current > counter):
            counter = current
            num = r
 
    return num

def getsums(a):
    for b in range(len(a)-1):
        heights.append(a[0] + a[b+1])


n = int(input())
bo = input().split(" ")
boards = []
heights = []
longestlength = 0
longestheight = 0

for z in range(n):
    boards.append(int(bo[z]))

for i in range(n):
    getsums(boards)
    boards.remove(boards[0])

if duplicatecheck(heights):
    longestlength = heights.count(mostoften(heights))
    longestheight = 1
    
else:
    longestlength = 1
    longestheight = len(heights)


print(longestlength, longestheight)
