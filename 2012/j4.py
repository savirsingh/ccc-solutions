# code by savir singh

alphabet = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N','O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']

k = int(input())
code = list(input())
outputlist = []

for i in range(len(code)):
    p = code.index(code[i])+1
    shift = 3*p+k
    cindex = alphabet.index(code[i])
    code[code.index(code[i])] = " "
    outputlist.append(alphabet[cindex-shift])

print(''.join(outputlist))
