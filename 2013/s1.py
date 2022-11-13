# code by savir singh

x = int(input())

def nextnum(year):
    while True:
        year+=1 
        a = list(str(year))
        s = set(a)
        if len(s) == len(a):
            return year
print(nextnum(x))
