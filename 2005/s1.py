# code by savir singh

# 15/15! USING PYTHON!!!!

t = int(input())
phones = []
outputlist = []

dic= {'A':2, 'B':2, 'C': 2, 'D':3, 'E':3, 'F':3, 'G':4, 'H':4, 'I':4, 'J':5, 'K':5, 'L':5, 'M':6, 'N':6, 'O':6, 'P':7, 'Q':7, 'R':7, 'S':7, 'T':8, 'U':8, 'V':8, 'W':9, 'X':9, 'Y':9, 'Z':9}

for i in range(t):
    num = input().replace("-", "")
    phones.append(num)

for j in range(len(phones)):
    thelist = list(phones[j])
    for s in range(len(thelist)):
        if thelist[s] in dic.keys():
            thelist[s] = str(dic.get(thelist[s]))
    outputlist.append(thelist)


for output in outputlist:
    first = ''.join(output[:3])
    del output[:3]
    second = ''.join(output[:3])
    del output[:3]
    third = ''.join(output[:4])
    print(first + '-' + second + '-' + third)
