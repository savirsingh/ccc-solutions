# code by savir singh

number = input()
number = [number[i:i+2] for i in range(0, len(number), 2)]
total = 0

valuedic = {'I':1, 'V':5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000}

for j in range(len(number)):
    base = valuedic.get(number[j][1])
    arabic = int(number[j][0])
    try:
        if valuedic.get(number[j+1][1]) > base:
            total -= arabic*base
        else:
            total += arabic*base
    except:
        total += arabic*base

print(total)
